#include <iostream>
using namespace std;
int main(){
	int var1=10;
	int *pA;
	pA=&var1;
	cout<<"el valor que almacena pA: "<<pA<<endl;
	cout<<"el valor que almacena var1 es: "<<var1<<endl;
	cout<<"la direccion de var1 es: "<<&var1;
	cout<< &var1; //imprime 0xbfe
	return 0;
}
