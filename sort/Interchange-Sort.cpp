#include<bits/stdc++.h>
using namespace std;

/*
Function: compare and change the direction of elements in an array.
Defect: waste of time, for loop the many times
Advantages: easy to remember

=>complexity = O(n(n-1)/2)	
*/

// interchange sort
void interchange_sort(int *a, int n){
	for( int i=0;i<n-1;i++){
		for( int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
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
	// int *a= new int;
	// int n;
	// input(a,n);
	// output(a,n);
	int a[] ={6,5,4,7,3,2,6,7,2,9};
	cout <<"\nsort interchange: "<< endl;
	interchange_sort(a,10);
	output(a,10); 
	return 0;  
}
