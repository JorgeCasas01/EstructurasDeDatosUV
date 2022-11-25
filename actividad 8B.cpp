#include <iostream>
using namespace std;

int imprimirMay(int i, int ar[], int tam){
	if(tam>0){
		if(i<ar[tam-1]){
			i=ar[tam-1];
			imprimirMay(i,ar,tam-1);
		}
	}
	return i;
}

int main(){
	int ar[5]{6,34,63,12,230};
	int i=ar[0];
	cout<<"el mayor es"<<endl;
	cout<<imprimirMay(i,ar,5);
	return 0;
}
