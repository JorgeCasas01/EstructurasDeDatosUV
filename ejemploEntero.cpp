#include <iostream>

using namespace std;

//variables globales


int main(){
	//variables locales a main
	int edad;
	float peso;
	char genero;
	cout<<"dame tu edad: "<<endl;
	cin>>edad;
	cout<<"dame tu peso: "<<endl;
	cin>>peso;
	cout<<"dame tu genero: (H-M)"<<endl;
	cin>>genero;
	cout<<"tu tienes "<<edad<<" años , pesas "<<peso<<" kilos y eres :";
	if(genero=='M'|| genero=='m'){  // o es || y es &&
		cout<<"Mujer"<<endl;
	}
	else{
		if(genero=='H'||genero=='h'){
		cout<<"Hombre"<<endl;
		}
		else{
			cout<<" de genero no reconocido"<<endl;
		}
	}
	return 0;
}

