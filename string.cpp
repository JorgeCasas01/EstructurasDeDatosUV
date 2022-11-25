#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char nombre1[]="Beto" , nombre2[]="Ana";
	
	if(strcmp(nombre1,nombre2)<0){
		cout<<nombre1<<","<<nombre2<<endl;
	}
	else if (strcmp(nombre1,nombre2)<0){
		cout<<nombre2<<","<<nombre1<<endl;
	}
	else if(strcmp(nombre1,nombre2)==0){
		cout<<"los nombres son iguales: "<<nombre1<<","<<nombre2<<endl;
	}
	return 0;
}
