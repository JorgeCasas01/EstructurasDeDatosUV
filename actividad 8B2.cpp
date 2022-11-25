#include <iostream>
using namespace std;
int num(int n, int v , int c){
	if(n<v){
		return c;
	}
	else{
		return num(n,v*10,c+1);
	}
}

int main(){
	int n,v=5,c=1;
	cout<<"ingrese un numero";
	cin>>n;
	cout<<num(n,v,c);
	return 0;
}
