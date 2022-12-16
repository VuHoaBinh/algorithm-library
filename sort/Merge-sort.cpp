#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

void merge1(int a[],int l, int mid, int r){
    vector<int> x(a+l,a+mid+1);
    vector<int> y(a+mid+1,a+r+1);
    int i=0,j=0;
    while(i<x.size() && j<y.size()){
        if(x[i]<=y[i]){
            a[l] = x[i];
            l++;i++;
        }else{
            a[l] = y[j];
            l++;j++;
        }
    }
    while(i < x.size()){
        a[l] = x[i];
        l++; i++;
    }
    while(j < y.size()){
        a[l] = y[j];
        l++; j++;
    }
}
void merge_sort(int a[], int left ,int right) {
    if(left >= right){
        return;
    }
    int mid =(left + right) / 2;
    merge_sort(a,left,mid);
    merge_sort(a,mid+1,right);
    merge1(a,left,mid,right);
}
int main(){
    int a[] = {1,2,4,3,5,8,7,6};
    int n = 8;
    merge_sort(a,0,n-1);
    for( int i=0; i<n; i++ ){
        cout << a[i] <<" ";
    }
}





