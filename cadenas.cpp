#include <iostream>
using namespace std;

int main(){
	string nombre;
	int tam;
	cout<<"dame tu nombre"<<endl;
	getline(cin,nombre);
	tam=nombre.size();
	cout<<"hola "<<nombre<<" como estas?"<<" tu nombre tiene "<<tam<<" caracteres"<<endl;
	for(int i=tam-1;i>=0;i--){
		cout<<nombre[i];
	}
	cout<<endl;
	return 0;
}
