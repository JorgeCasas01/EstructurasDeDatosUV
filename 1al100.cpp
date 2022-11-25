#include <iostream>
using namespace std;
void imprimirRec(int i){
	if(i<100){
		cout<<(i+1)<<endl;
		imprimirRec(i+1);
	}
}
void imprimir100(){
	imprimirRec(0);
}

int main(){
	imprimir100();
	return 0;
}
