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
    NodoEntero* apuntador = cabeza;
    while (apuntador != NULL) {
        cout << apuntador->getDato() << ", ";
        apuntador = apuntador->getSiguiente();
    }
    cout<<endl;
}

void Lista::agregarElemento(int dato) {
    NodoEntero* nuevoNodo = new NodoEntero(dato);
    if (estaVacia()) {
        cabeza = nuevoNodo;
    } else {
        NodoEntero* apuntador = cabeza;
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
        NodoEntero* apuntador = cabeza;
        cabeza = apuntador->getSiguiente();
        delete apuntador;
    }
}
void lista::eliminarElemento(int dato){
	if(dato == cabeza){
		*cabeza= *cabeza->getSiguiente()
	}
	else if(dato == cabeza->getSiguiente(getDato())){
		nodoEntero* apuntador=cabeza->getSiguiente();
		cabeza->setSiguiente(apuntador->getSiguiente());
		delete apuntador;
	}
	else if(dato == )
}


