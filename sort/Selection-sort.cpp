#include<bits/stdc++.h>
using namespace std;

void selection_sort( int *a, int n){
    for( int i=0; i<n; i++){
        int min =i;
        for( int j=i+1; j<n; j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        if(min!=i){
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
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
	cout <<"\nsort selection: "<< endl;
	selection_sort(a,10);
	output(a,10); 
	return 0; 
}