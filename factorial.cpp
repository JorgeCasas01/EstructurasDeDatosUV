#include <iostream>
using namespace std;

int factorial(int a){
	int fact=1;
	if(a==0||a==1){
		fact=1;
	}
	else{
		for(int i=1;i<=a;i++){
			fact*=i;
		}
	}
	
	return fact;
}
int factorialRecursivo(int a){
	if(a==0||a==1){
		return 1;
	}
	else{
		return a*factorialRecursivo(a-1);
	}
}

int main(){
	int x;
	cout<<"ingresa un numero : ";
	cin>>x;
	cout<<"el factorial es: "<<factorialRecursivo(x)<<endl;
	return 0;
}
