/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: fredycastaneda
 *
 * Created on October 13, 2020, 10:36 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>

#include "Lista.cpp"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   
    Lista lista;
    lista.agregarElemento("S20022109","Juan Perez");
    lista.agregarElemento("S20022112","Roberto Garcia");
    lista.agregarElemento("s20013423","Andres Casas");
    lista.imprimirLista();
    lista.eliminarElemento("s2245634");
	lista.eliminarPrimerElemento();
	lista.imprimirLista();
	lista.agregarPosicion(2,"s20032112","mario frias");
	lista.imprimirLista();
    return 0;
}

