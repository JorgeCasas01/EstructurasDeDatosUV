/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lista.cpp
 * Author: fredycastaneda
 * 
 * Created on October 13, 2020, 10:54 AM
 */

#include "Lista.h"
#include <iostream>
using namespace std;

Lista::Lista() {
    cabeza = NULL;
}

Lista::Lista(const Lista& orig) {
    
}

Lista::~Lista() {

}

bool Lista::estaVacia() {
    return cabeza == NULL;
}
    
void Lista::imprimirLista() {
    NodoEstudiante* apuntador = cabeza;
    while (apuntador != NULL) {
        cout << apuntador->getMatricula() << "-"<< apuntador->getNombre()<<" ,";
        apuntador = apuntador->getSiguiente();
    }
    cout<<endl;
}

void Lista::agregarElemento(string matricula , string nombre) {
    NodoEstudiante* nuevoNodo = new NodoEstudiante(matricula , nombre);
    if (estaVacia()) {
        cabeza = nuevoNodo;
    } else {
        NodoEstudiante* apuntador = cabeza;
        while (apuntador->getSiguiente() != NULL) {
            apuntador = apuntador->getSiguiente();
        }
        apuntador->setSiguiente(nuevoNodo);
    }
}

void Lista::eliminarPrimerElemento(){
    if(this->estaVacia()){
        cout<<" No se puede eliminar, la lista está vacia"<<endl;
    }else{
        NodoEstudiante* apuntador = cabeza;
        cabeza = apuntador->getSiguiente();
        delete apuntador;
    }
}
	void Lista::eliminarElemento(string matricula){
		int ban=0;
	if (this->estaVacia()){
		cout<<"La lista se encuentra vacia, no se puede eliminar..."<<endl;
	}else{
		NodoEstudiante* apuntador = cabeza;
	if (apuntador->getMatricula()==matricula){
		ban=1;
		cabeza=apuntador->getSiguiente();
	delete apuntador;
	}else{
		while (apuntador!=NULL && apuntador->getSiguiente()!=NULL) {
			if(matricula == apuntador->getSiguiente()->getMatricula()){
	//guardar aux
			NodoEstudiante* nodoBorrar = apuntador->getSiguiente();
				if (nodoBorrar->getSiguiente()!=NULL) {
				apuntador->setSiguiente(apuntador->getSiguiente()->getSiguiente());
	//apuntador->setDato(apuntador->getSiguiente());
			}else{
			apuntador->setSiguiente(NULL);
		}
	delete nodoBorrar;
	}
	apuntador = apuntador->getSiguiente();
			}
		}
		if(ban==0){
			cout<<"el elemento no esta en la lista"<<endl;
		}	
	}
	
}
void lista::agregarPosicion(int pos, string matricula , string nombre){
	NodoEstudiante* nuevoNodo = new NodoEstudiante(pos,matricula , nombre);
}
