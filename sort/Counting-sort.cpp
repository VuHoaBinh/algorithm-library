/*
Note: 0<= n =10^7
Function: compare and change the direction of elements in an array.
Defect: limited of elements
Advantages: easy to remember

=>complexity = O(n)	
*/
#include<bits/stdc++.h>
using namespace std;
#define int_min -1e9

int count_number[10000001];
int counting_sort( int *a,int n){
    int m = int_min;
    for( int i=0;i<n;i++){
        count_number[a[i]]++;
        m = max(m,a[i]);
    }
    for( int i=0;i<=m;i++){
        if(count_number[i]!=0){
            for( int j=0;j<count_number[i];j++){
                cout << i << " ";
            }
        }
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
	counting_sort(a,n);
	// output(a,n); 
	return 0; 
}