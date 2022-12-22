#include<bits/stdc++.h>
using namespace std;

typedef struct NODE{
	int data;
	NODE* link;
}NODE;
typedef struct LIST{
	NODE* pHead;
	NODE* pTail;
}LIST;

void init(LIST &L){
	L.pHead = L.pTail = NULL;
}
int Empty(LIST L){
	if(L.pHead == NULL){
		return 1;
	}
	return 0;
}
NODE* getNode(int x){
	NODE *p = new NODE;
	if(p==NULL){
		cout <<"full data!!" <<endl;
		return NULL;
	}
	p->data = x;
	p->link = NULL;
	return p;
}
void addHead(LIST &L,NODE *new_node){
	if(L.pHead == NULL){
		L.pHead =L.pTail =new_node;
	}else{
		new_node->link = L.pHead;
		L.pHead = new_node;
	}
}

void insertNode(LIST &L, int x){
	NODE *p = getNode(x);
	if(p==NULL){
		return;
	}
	addHead(L,p); 
}

void createNode(LIST &L){
	int x,n;
	cout <<"Enter quantity: "; cin >> n;
	for( int i = 0; i < n; i++){
		cin >> x;
		insertNode(L,x);
	}
	cout <<"list: " << endl;
}
void output(LIST L){
	NODE *p = new NODE;
	for(NODE *p = L.pHead ;p!=NULL;p=p->link){
		cout << p->data << " ";
	}

}
// bubble sort
void bubble_sort(LIST &L){
	NODE *flag = L.pTail;
	for(NODE *p = L.pHead;p!=NULL;p = p->link){
		NODE *flag1;// to swap flag - flag1
		for(NODE *k = L.pHead ;k!=flag;k = k->link){
			if(k->data > k->link->data){
				int temp = k->data;
				k->data = k->link->data;
				k->link->data = temp;
			}
			flag1 = k;
		}
		flag = flag1;
	}
}


int main(){
	LIST L;
	init(L);
	createNode(L);
	output(L); 

	cout <<"\nsort bubble: "<< endl;
	bubble_sort(L);
	output(L); 
	return 0;  
}
