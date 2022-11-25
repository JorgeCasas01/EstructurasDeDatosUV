#include <iostream>

int main(){
	int disco;
	cout<<"dame el numero de discos hanoi: ";
	cin>>disco;
	hanoi(disco, 'A','B','C');
	return 0;
}
