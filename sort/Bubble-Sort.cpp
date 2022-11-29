#include<bits/stdc++.h>
using namespace std;

/*
Function: compare and change the direction of elements in an array.
Defect: number min quickly but max number lowly
Advantages: easy to remember

=>O(n) = n(n-1)/2 	
*/

// Bubble sort
void bubble_sort(int *a, int n){
	for( int i=0;i<n-1;i++){
		for( int j=n-1;j>i;j--){
			if(a[j-1]>a[j]){ 
				int temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
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
	int *a= new int;
	int n;
	input(a,n);
	output(a,n);
	
	cout <<"\nsort bubble: "<< endl;
	bubble_sort(a,n);
	output(a,n); 
	return 0;  
}
