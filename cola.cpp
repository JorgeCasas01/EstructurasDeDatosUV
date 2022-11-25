#include <iostream>
#include "Cola.h"
using namespace std;



Cola::Cola() {
	this->frente = NULL;
	this->fin = NULL;

}



Cola::Cola(const Cola& orig) {

}



Cola::~Cola() {

}



bool Cola::estaVacia() {

return frente == NULL; // NULL

}
void Cola:: meter(int dato){
	NodoEntero* nuevoNodo= new NodoEntero(dato);
	if(estaVacia())
	{
		this->frente=this->fin=nuevoNodo;
	}else{
		this->fin->setSiguiente(nuevoNodo);
		
	}
}
int Cola::sacar(){
	if(!estaVacia()){
		int dato=frente->getDato();
		if(frente=fin){
			delete frente;
			frente=fin=NULL;
		}else{
			NodoEntero* nodoEliminar=frente;
			frente=frente->getSiguiente();
			delete nodoEliminar;
		}
		return dato;
	}else{
		exit(1);
	}
}
int Cola::peek(){
	if(!estaVacia()){
	}
}
void Cola::imprimir() {

Cola aux;

while (!this->estaVacia()) {

int dato = this->sacar();

cout << dato << ",";

aux.meter(dato);

}

while (!aux.estaVacia()) {

this->meter(aux.sacar());

}

}
