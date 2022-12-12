#include<bits/stdc++.h>
using namespace std;

/*
Note: 0<= n =10^7
Function: compare and change the direction of elements in an array.
Defect: do not change index the number of reductions. 
Advantages: easy to compare, compare the number of reductions

=>complexity = O((n(n+1)/2)-1) 	
*/

// insertion sort
void insertion_sort(int *a, int n){
	for( int i=1;i<n;i++){
		int x = a[i];
		int pos = i-1; // -> head array (pos>=0)
		while(pos >= 0 && x <a[pos]){
			a[pos+1]= a[pos]; // a[pos+1] == x => take a[pos+1] to hold value x
			pos--;
		}
		a[pos+1]= x;// take value x
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
	cout <<"\nsort insertion: "<< endl;
	insertion_sort(a,10);
	output(a,10); 
	return 0;  
}
