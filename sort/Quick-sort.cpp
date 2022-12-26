/*
Note: 0<= n =10^7
Function: compare and change the direction of elements in an array.
Defect: limited of elements
Advantages: easy to remember
=>complexity = O(nlogn)	
*/
#include<bits/stdc++.h>
using namespace std;

// sort mid array
int quick_sort_MID( int *a,int left,int right){
    if(left >= right){
        return -1;
    }
    int mid = (left+right)/2; // index mid
    int i = left ,j = right;
    do{
        while(a[left]<a[mid]){
            left++;
        }
        while(a[right]>a[mid]){
            right--;
        }
        if(left <= right){
            int temp=a[left];
            a[left] = a[right];
            a[right] = temp;
            left++;
            right--;
        }
    }while(left<right);
    if(i<right){
        quick_sort(a,i,right);
    }
    if(left< j){
        quick_sort(a,left,j);
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////

// Lomuto Partition ( right element)
int partition_Lomuto(int a[],int left,int right){
    int x = a[right];// pilot
    int i = left -1 ;
    for(int j = left; j < right;j++){
        if(a[j]<=x){
            i+=1;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[right]);
    return i+1;
}


// Hoare Partition (contrarian pair element)
int partition_Hoare( int a[], int left,int right){
    int x = a[right];
    int i = left-1;
    int j=right+1;
    while(1){
        do{
            j--;
        }while(a[j]>x);   
        do
        {
            i++;
        }while(a[i]<x);
        if(i<j){
            swap(a[i],a[j]);
        }else
        {
           return j;
        }
    }

}
void quick_sort(int a[],int left,int right){
    if(left>=right){
        return;
    }
    //int p = partition_Lomuto(a,left,right);
    int p = partition_Hoare(a,left,right);
    quick_sort(a,left,p-1) ;
    quick_sort(a,p+1,right);;
}

////////////////////////////////////////////////////////////////////////////////////
int main(){
    int a[] ={6,5,4,7,3,2,6,7,2,9};
    int n = 10;
	cout <<"\nsort selection: "<< endl;
	quick_sort(a,0,n-1);
	for( int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	return 0; 
}
