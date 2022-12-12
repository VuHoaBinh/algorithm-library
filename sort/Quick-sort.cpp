/*
Note: 0<= n =10^7
Function: compare and change the direction of elements in an array.
Defect: limited of elements
Advantages: easy to remember

=>complexity = O(nlogn)	
*/
#include<bits/stdc++.h>
using namespace std;

int quick_sort( int *a,int left,int right){
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

// array
void input(int *a ,int &n){
	do{
		cin >> n;
	}while(n<0);
	for( int i=0;i<n;i++){
		cin >> a[i];
	}
}

void output(int *a, int n){
	for( int i=0;i<n;i++){
		cout << a[i] << " ";
	}
}

int main(){
    int a[] ={6,5,4,7,3,2,6,7,2,9};
    int n = 10;
	cout <<"\nsort selection: "<< endl;
	quick_sort(a,0,n-1);
	output(a,n); 
	return 0; 
}