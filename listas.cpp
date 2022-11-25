#include <iostream>

 

using namespace std;

 

class NODO{
  private:
      string nombre;
      string correo;
      string telefono;
      NODO *sig;    
  public:
         NODO();
         ~NODO();
         void setNombre(string nuevoNombre);
         void setCorreo(string nuevoCorreo);
         void setTelefono(string nuevoTelefono);
         void setSig(NODO *nuevoSig);
         string getNombre(void);
         string getCorreo(void);
         string getTelefono(void);
         NODO *getSig(void);    
};

 

class LISTA{
    private:
       NODO *cabeza;        
    public:
       LISTA();
       ~LISTA();
       void setCabeza(NODO *nuevaCabeza);
       NODO *getCabeza(void);
       void insertarInicio(NODO *nodo);
       void insertarAlFinal(NODO *nodo);
       void insertarOrdenado(NODO *nodo);
       void eliminar(string email);    
       void mostrar(void);
};

 

int main(){
    
    return 0;
}

 

//implementación de comportamientos de la clase nodo
NODO::NODO(){
   nombre="";
   correo="";
   telefono="";
   sig=NULL;        
}

 

NODO::~NODO(){
              
}

 

void NODO::setNombre(string nuevoNombre){
   nombre=nuevoNombre;    
}

 

void NODO::setCorreo(string nuevoCorreo){
  correo=nuevoCorreo;    
}

 

void NODO::setTelefono(string nuevoTelefono){
    telefono= nuevoTelefono;    
}

 

void NODO::setSig(NODO *nuevoSig){
    sig=nuevoSig;    
}

 

string NODO::getNombre(void){
   return nombre;    
}

 

string NODO::getCorreo(void){
     return correo;
}

 

string NODO::getTelefono(void){
     return telefono;
}
 
NODO *NODO::getSig(void){
     return sig;
}

 

//implementacion de comportamientos de la clase lista

 

LISTA::LISTA(){
    cabeza=NULL;    
}

 

LISTA::~LISTA(){
    NODO *temp;
    while(cabeza!=NULL){
        temp=cabeza;
        cabeza=cabeza->getSig();
        delete temp;
    }
}

 

void LISTA::setCabeza(NODO *nuevaCabeza){
    cabeza=nuevaCabeza;
}

 

NODO *LISTA::getCabeza(void){
    return cabeza;
}

 

void LISTA::insertarInicio(NODO *nodo){
    
}

 

void LISTA::insertarAlFinal(NODO *nodo){
    NODO *temp;
    temp=cabeza;
    if(cabeza==NULL){
        cabeza=nodo;
    }
    else{
        while(temp->getSig()!=NULL){ //recorro la lista hasta posicionarme en el ultimo nodo
            temp=temp->getSig();
        }
        temp->setSig(nodo);// el ultimo nodo, pone en su sig al nuevo nodo
    }
}
 
