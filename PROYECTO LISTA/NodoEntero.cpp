/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoEntero.cpp
 * Author: fredycastaneda
 * 
 * Created on October 13, 2020, 10:37 AM
 */
 
#include <iostream>
#include "NodoEntero.h"



NodoEntero::NodoEntero(int dato) {
    this->dato = dato;
    this->siguiente = NULL;//NULL 
}

NodoEntero::NodoEntero(const NodoEntero& orig) {
}

NodoEntero::~NodoEntero() {
}

int NodoEntero::getDato(){
    return dato;
}

void NodoEntero::setDato(int dato){
    this->dato = dato;
}
   
NodoEntero * NodoEntero::getSiguiente(){
    return siguiente;
}

void NodoEntero::setSiguiente(NodoEntero *siguiente){
    this->siguiente = siguiente;
}

