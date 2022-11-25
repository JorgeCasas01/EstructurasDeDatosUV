#include <iostream>
using namespace std;

int main(){
int num=0, cont=0;

cout<<"introduce una cantidad y te diremos cuantos digitos tiene : ";
cin>>num;
while(num>0){
	cont++;
	num=num/10;
	cout<<"\nValor actual: "<<num;
}
cout<<"\nel numero de digitos es: "<<cont;
return 0;

}
