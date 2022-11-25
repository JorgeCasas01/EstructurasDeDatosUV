/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoEntero.h
 * Author: fredycastaneda
 *
 * Created on October 13, 2020, 10:37 AM
 */

#ifndef NODOENTERO_H
#define NODOENTERO_H

class NodoEntero {
public:
    NodoEntero(int dato);
    NodoEntero(const NodoEntero& orig);
    virtual ~NodoEntero();
    int getDato();
    void setDato(int dato);
    NodoEntero * getSiguiente();
    void setSiguiente(NodoEntero *siguiente);
private:
    int dato;
    NodoEntero *siguiente;
};

#endif /* NODOENTERO_H */

