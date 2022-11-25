#include <iostream>

using namespace std;

class NODO{
  private:
      int numero;
      NODO *sig;    
  public:
         NODO();
         ~NODO();
         void setNumero(int nuevoNumero);
         void setSig(NODO *nuevoSig);
         int getNumero(void);
         NODO *getSig(void);    
};

 
class PILA{
    private:
        NODO *tope;
        int tam;
        int noElementos;
    public:
        PILA();
        ~PILA();
        NODO *getTope(void);
        int getTam(void);
        int getNoElementos(void);
        void setTope(NODO *nuevoTope);
        void setTam(int nuevoTam);
        void setNoElementos(int nuevoNoElementos);
        void push(NODO *nuevo);
        NODO *pop(void);
        bool esVacia(void);
        bool estaLlena(void);
        void mostrar(void);
        void invertir(void);
        NODO *quitaFondo(void);
        NODO *quitaNodo(int pos);
        void inviertoExtremos(void);
        void pasaTopeFondo(void);
        void Pila pila;
		void pila.push(5);
		void pila.push(9);
		void pila.push(2);
		void pila.push(4);
		void pila.push(9);
		void pila.mostrarHastaPosicion(1);
};

void Pila::mostrarHastaPosicion(int posicion){
	Pila aux;
	int contador=0;
		while (!this->isEmpty()){
			int dato = this->pop();
			aux.push(dato);
		}
		while (!aux.isEmpty()) {
			int dato = aux.pop();
			contador++;
			if (contador<=posicion){
				cout<<dato<<", ";
			}
			this->push(dato);
		}
}
 

 

 

int main(void){
    NODO *nuevo;
    PILA *stack;
    char opc='s';
    int x;
    stack=new PILA;
    stack->setTam(5);
    while(opc!='n'){
        cout<<"Dame un numero:";
        cin>>x;
        nuevo=new NODO;
        nuevo->setNumero(x);
        stack->push(nuevo);
        cout<<"Desea ingresar un nuevo dato a la pila (s/n)?";
        cin>>opc;
    }
    stack->mostrar();
 //   delete stack->quitaFondo();
    //stack->invertir();
//    cout<<"Dame la posicion del nodo a retirar:";
//    cin>>x;
//    delete stack->quitaNodo(x);
//    stack->inviertoExtremos();
    stack->pasaTopeFondo();
    cout<<"_________________"<<endl;
    stack->mostrar();
    delete stack;
    return 0;
}

 

 

 

 

 


//implementación de comportamientos de la clase nodo
NODO::NODO(){
   numero=0;
   sig=NULL;        
}

 

 

 


NODO::~NODO(){
              
}

 

 

 


void NODO::setNumero(int nuevoNumero){
   numero=nuevoNumero;    
}

 

 

 


void NODO::setSig(NODO *nuevoSig){
    sig=nuevoSig;    
}

 

 

 


int NODO::getNumero(void){
   return numero;    
}

 

 

 

 
NODO *NODO::getSig(void){
     return sig;
}

 

 

 


//implementacion de la clase pila
PILA::PILA(){
    tope=NULL;
    noElementos=0;
    tam=3;
}
    
PILA::~PILA(){
    NODO *temp;
    while(noElementos>0){
        temp=pop();
        delete temp;
    }
}

 

 

 

NODO *PILA::getTope(void){
    return tope;
}

 

 

 

int PILA::getTam(void){
    return tam;
}

 

 

 

int PILA::getNoElementos(void){
    return noElementos;
}

 

 

 

void PILA::setTope(NODO *nuevoTope){
    tope=nuevoTope;
}

 

 

 

void PILA::setTam(int nuevoTam){
    tam=nuevoTam;
}

 

 

 

void PILA::setNoElementos(int nuevoNoElementos){
    noElementos=nuevoNoElementos;
}

 

 

 

void PILA::push(NODO *nuevo){
    if(estaLlena()){
        cout<<"No se pudo ingresar el nodo porque la pila esta llena"<<endl;
    }
    else{
        noElementos++;
        nuevo->setSig(tope);
        tope=nuevo;
    }
}

 

 

 


NODO *PILA::pop(void){
    NODO *nodo;
    if(esVacia()){
        cout<<"No se pudo sacar elementos, la pila esta vacia"<<endl;
        return NULL; 
    }
    else{
        nodo=tope;
        tope=tope->getSig();
        nodo->setSig(NULL);
        noElementos--;
        return nodo;
    }
}

 

 

 


bool PILA::esVacia(void){
    if(noElementos==0){
       return true;
    }
    else{
       return false;    
    }
}

 

 

 

bool PILA::estaLlena(void){
    if(noElementos==tam){
        return true;
    }
    else{
        return false;
    }
}

 

 

 

void PILA::mostrar(void){
  PILA *aux;
  NODO *temp;
  aux=new PILA;
  aux->setTam(this->getTam());//para igualar las pilas al mismo tamaño
  while(!esVacia()){
      temp=pop();
      cout<<temp->getNumero()<<endl;
      aux->push(temp);
  }
  while(!aux->esVacia()){
      temp=aux->pop();
      push(temp);
  }
  delete aux;
}

 

 

 

void PILA::invertir(void){
   NODO *temp;
   PILA *aux1, *aux2;
   aux1= new PILA;
   aux2= new PILA;
   aux1->setTam(this->getTam());
   aux2->setTam(this->getTam());
   while(!esVacia()){
        temp=pop();
        aux1->push(temp);
   }    
   while(!aux1->esVacia()){
       temp=aux1->pop();
       aux2->push(temp);
   }
   while(!aux2->esVacia()){
       temp=aux2->pop();
       push(temp);
   }
   delete aux1;
   delete aux2;
}

 

 

 

NODO *PILA::quitaFondo(void){
    NODO *temp,*nodoSacar;
    PILA *aux;
    aux=new PILA;
    aux->setTam(this->getTam());
    while(getNoElementos()>1){
        temp=pop();
        aux->push(temp);
    }
    nodoSacar=pop();
    while(!aux->esVacia()){
         temp=aux->pop();
         push(temp);
    } 
    delete aux;
    return nodoSacar;
}

 

NODO *PILA::quitaNodo(int pos){
    NODO *temp,*nodoSacar;
    PILA *aux;
    int cont=0;
    aux=new PILA;
    aux->setTam(this->getTam());
    while(!esVacia()){
        temp=pop();
        cont++;
        if(cont==pos){
            nodoSacar=temp;
        }
        else{
            aux->push(temp);
        }
    }
    while(!aux->esVacia()){
         temp=aux->pop();
         push(temp);
    } 
    delete aux;
    return nodoSacar;    
} 

 

void PILA::inviertoExtremos(void){
            NODO *temp,*nodoT,*nodoF;
            PILA *aux;
            aux=new PILA;
            if(!esVacia()){
                nodoT=pop();
            }
            while(noElementos>1){
                temp=pop();
                aux->push(temp);
            }
            nodoF=pop();
            push(nodoT);
            while(!aux->esVacia()){
                temp=aux->pop();
                push(temp);
            }
            push(nodoF);
            delete aux;
}   

 

void PILA::pasaTopeFondo(void){
  NODO *temp, *nodoT;
  PILA *aux;
  aux=new PILA;
  aux->setTam(this->getTam());
  if(!esVacia()){
       nodoT=pop();
  }    
  while(!esVacia()){
      temp=pop();
      aux->push(temp); 
  }
  push(nodoT);
  while(!aux->esVacia()){
      temp=aux->pop();
      push(temp);
  }
  delete aux;
 }
