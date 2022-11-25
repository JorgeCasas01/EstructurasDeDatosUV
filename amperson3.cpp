#include<iostream>
using namespace std;

int main(){
	int *q, *p;
	int a =5;
	q = &a;
	p=q;
	cout <<"valot que almacena a: "<<a<<endl;
	cout<<"la direccion de a es "<<&a<<endl;
	cout<<"el valor que almacena p: "<<&p<<endl;
	cout<<"el valor que almacena q: "<<q<<endl;
	return 0;
	
}
