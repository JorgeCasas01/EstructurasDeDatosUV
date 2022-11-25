#include <iostream>
using namespace std;
int main()
{
int *pENTERO;
int x =10;
int y;
pENTERO=&y; pENTERO=x;
cout<<"valor que almacena pENTERO"<<pENTERO<<endl;
cout<<"la direccion de y es"<<&y<<endl;
cout<<"el valor que almacena y:"<<y<<endl;
cout<<"el valor que almacena y: "<<*pENTERO<<endl;
return 0
}
