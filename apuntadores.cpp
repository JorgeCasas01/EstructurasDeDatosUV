#include <iostream>
#include <string>
using namespace std;

int main(){
	string *nombres;
	int x;
	cout<<"cuantos nombres desea capturar? "<<endl;
	cin>>x;
	nombres= new string[x];
	for(int i=0;i<x;i++){
		fflush(stdin);
		cout<<"ingresa el nombre: "<<endl;
		getline(cin,nombres[i]);
	}
	
	for(int i=0;i<x;i++){
		cout<<"nombre "<<i+1<<": "<<nombres[i]<<endl;
	}
	
	delete []nombres; 
	return 0;
}
