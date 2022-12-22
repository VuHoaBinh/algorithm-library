#include<bits/stdc++.h>
using namespace std;
// Dữ liệu đầu vào: 4, 10, 3, 5, 1
//          4(0)
//         /   \
//      10(1)   3(2)
//     /   \
//  5(3)    1(4)

// Các số trong ngoặc biểu thị các chỉ số trong mảng biểu diễn dữ liệu.
// Áp dụng quy trình heapify cho chỉ mục 1:
//          4(0)
//         /   \
//     10(1)    3(2)
//     /   \
//  5(3)    1(4)

// Áp dụng quy trình heapify cho chỉ mục 0:
//        10(0)
//        /  \
//     5(1)  3(2)
//    /   \
//  4(3)    1(4)
// Thủ tục heapify tự gọi đệ quy để xây dựng heap theo cách từ trên xuống.
void heapify(int a[], int n, int i){
    int l = i*2+1;
    int r = i*2+2;
    int largest = i;
    if(l<n && a[l]>a[largest]){
        largest=l;
    }
    if(r<n && a[r]>a[largest]){
        largest = r;
    }
    if(largest!=i){
        swap(a[i],a[largest]);
        heapify(a,n,largest);
    }
}


// heap sort
void heap_sort(int *a, int n){
	for(int i=n/2-1; i>=0; i--){
        heapify(a,n,i);
    }
    for(int i = n-1;i>=0;i--){
        swap(a[i],a[0]);
        heapify(a,i,0);
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
	//int *a= new int;
	//int n;
	// input(a,n);
	// output(a,n);
	int a[] ={6,5,4,7,3,2,6,7,2,9};
	cout <<"\nsort heap: "<< endl;
	heap_sort(a,10);
	output(a,10); 
	return 0;  
}
