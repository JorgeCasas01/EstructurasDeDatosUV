#include<iostream>
using namespace std;

class Vector{
	private:
		int tamanio;
		int *arreglo;
	public:
		vector(int size){
			tamanio=size;
			arreglo=new int[size];
		}
		~Vector(){
			delete []arreglo;
			cout<<"arreglo eliminado"<<endl;
		}
		void setTamanio(int size){
			tamanio=size;
		}
		void setArreglo(){
			for(int i=0;i<tamanio;i++){
				arreglo[i]=i+1;
			}
		}
		int getTamanio(){
			return tamanio;
		}
		int getArreglo(int i){
			return arreglo[i];
		}
};

int main(){
	Vector v1(5);
	v1.setArreglo();
	cout<<v1.getArreglo(3)<<endl;
	
	return 0;
}
