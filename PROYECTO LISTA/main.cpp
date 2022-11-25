#include <cstdlib>
#include <iostream>

#include "Lista.cpp"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   
    Lista lista;
    lista.agregarElemento(8);
    lista.agregarElemento(9);
    lista.agregarElemento(10);
    lista.imprimirLista();
    lista.eliminarPrimerElemento();
    cout<<"Lista después de eliminar el primero: "<<endl;
    lista.imprimirLista();
    cout<<"Lista después de eliminar el primero: "<<endl;
    lista.eliminarPrimerElemento();
    lista.imprimirLista();
    cout<<"Lista después de eliminar el primero: "<<endl;
    lista.eliminarPrimerElemento();
    lista.imprimirLista();
    lista.eliminarPrimerElemento();

    return 0;
}
