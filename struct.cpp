#include <iostream>
#include <cstring>
using namespace std;

int main(){
	struct Alumno
	{
		char nombre [50];
		char matricula[12];
		
	};
	Alumno a1[3];
	strcpy(a1[0].nombre,"Juan Perez");
	strcpy(a1[0].matricula,"s10324");
	strcpy(a1[1].nombre,"beto");
	strcpy(a1[1].matricula,"s10325");
	strcpy(a1[2].nombre,"raul");
	strcpy(a1[2].matricula,"s10326");
	
	for(int i=0;i<3;i++){
		cout<<a1[i].nombre<<" , "<<a1[i].matricula<<endl;
	}
}
