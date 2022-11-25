#include<iostream>
using namespace std;

void recibirDatos(int**);
void imprimeDatos(int**);

int main(){
int **pp = new int *[2];
recibirDatos(pp);
imprimeDatos(pp);

return 0;
}

void recibirDatos(int** pp){
pp[0] = new int [2];
pp[1] = new int [2];
pp[0][0] = 0;
pp[0][1] = 0;
pp[1][0] = 0;
pp[1][1] = 0;
}
void imprimeDatos(int** pp){
for(int i = 0;i<2;i++){
for(int j = 0;j<2;j++){
cout<<pp[i][j];
}
cout<<endl;
}
}
