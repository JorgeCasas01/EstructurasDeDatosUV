/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lista.h
 * Author: fredycastaneda
 *
 * Created on October 13, 2020, 10:54 AM
 */

#include "NodoEntero.cpp"

#ifndef LISTA_H
#define LISTA_H

class Lista {
public:
    Lista();
    Lista(const Lista& orig);
    virtual ~Lista();
    bool estaVacia();
    void agregarElemento(int dato);
    void imprimirLista();
    void eliminarPrimerElemento();
    void eliminarElemento();
    
private:
    NodoEntero *cabeza;
};

#endif /* LISTA_H */

