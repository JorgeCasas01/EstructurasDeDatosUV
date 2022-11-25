#include <iostream>
using namespace std;
int main(){
	int ar[3]={1,2,3};
	int *p= ar;
	for(int i=0;i<3;i++){
		cout<<*p<<endl;
		p++;
	}
}
