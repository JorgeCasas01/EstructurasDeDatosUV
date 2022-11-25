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
};

class COLA{
	private:
		NODO *frente;
		NODO *fin;
	public:
		COLA();
		~COLA();
		void setFrente(NODO *nuevoFrente);
		void setFin(NODO *nuevoFin);
		NODO *getFrente(void);
		NODO *getFin(void);
		bool esVacia(void);
		NODO *retirar(void);
		void insertar(NODO *nodo);
		void mostrar(void);
		COLA *dividir(void);
		void invertir(void);
		int contarElementos(void);
		void invertirConPila(void);
};



int main(){
	NODO *nuevo;
	COLA *filabanco, *otrafila;
	char opc='s';
	filabanco=new COLA;
	do{
		cout<<"Desea un turno? (s/n)"<<endl;
		cin>>opc;
		if(opc=='s'){
		    nuevo=new NODO;
		    if(filabanco->getFin()==NULL){
		    	nuevo->setNumero(1);
			}
			else{
				nuevo->setNumero(filabanco->getFin()->getNumero()+1);
			}
			filabanco->insertar(nuevo);
		}
	}while(opc=='s');
	cout<<"Los turnos que estan dentro de la fila son:"<<endl;
	filabanco->mostrar();
	do{
		cout<<"Desea atender un turno? (s/n)"<<endl;
		cin>>opc;
		if(opc=='s'){
			nuevo=filabanco->retirar();
			cout<<"Se esta atendiendo al turno: "<<nuevo->getNumero()<<endl;
			delete nuevo;
		}
	}while(opc=='s');
	filabanco->mostrar(); //mostramos la cola original
/*	otrafila=filabanco->dividir();//la cola original se divide en 2, la mitad queda en original y la otra mitad en otrafila
	cout<<"La cola original queda:"<<endl;
	filabanco->mostrar();
	cout<<"La cola adicional queda:"<<endl;
	otrafila->mostrar();
	delete otrafila;
*/
    filabanco->invertirConPila();
	cout<<"La cola invertida queda:"<<endl;
	filabanco->mostrar();
	delete filabanco;
	return 0;
}





//implementaci�n de comportamientos de la clase nodo
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


COLA::COLA(){
   frente=NULL;
   fin=NULL;	
}

COLA::~COLA(){
	NODO *temp;
	while(!esVacia()){
		temp=retirar();
		delete temp;
	}
}

void COLA::setFin(NODO *nuevoFin){
	fin=nuevoFin;
}

void COLA::setFrente(NODO *nuevoFrente){
	frente=nuevoFrente;
}

NODO *COLA::getFrente(void){
	return frente;
}

NODO *COLA::getFin(void){
	return fin;
}

bool COLA::esVacia(void){
	if(frente==NULL){
		return true;
	}
	else{
		return false;
	}
}

void COLA::insertar(NODO *nuevo){
	if(fin==NULL){
		frente=nuevo;
		fin=nuevo;
	}
	else{
		fin->setSig(nuevo);
		fin=nuevo;
	}
}

NODO *COLA::retirar(void){
   NODO *nodoRetirar;
   if(frente==NULL){
   	  return NULL;
   }
   else{
   	  nodoRetirar=frente;
   	  if(frente==fin){
   	  	     frente=NULL;
   	  	     fin=NULL;
		 }
		else{
			frente=frente->getSig();
			nodoRetirar->setSig(NULL);
		} 
	return nodoRetirar;
   }	
}

void COLA::mostrar(void){
	COLA *aux;
	NODO *nodoRetirar;
	if(esVacia()){
		cout<<"La cola no tiene elementos, esta vacia"<<endl;
	}
	else{
		aux=new COLA;
		while(frente!=NULL){
			nodoRetirar=retirar();
			cout<<"Turno: "<<nodoRetirar->getNumero()<<endl;
			aux->insertar(nodoRetirar);
		}
		while(aux->getFrente()!=NULL){
			nodoRetirar=aux->retirar();
			insertar(nodoRetirar);
		}
		delete aux;
	}
}

COLA *COLA::dividir(void){
	COLA *aux, *adicional;
	NODO *temp;
	if(esVacia()){
	    cout<<"La cola no tiene elementos, esta vac�a"<<endl;
		return NULL;	
	}
	else{
		aux=new COLA;
		adicional=new COLA;
		while(frente!=NULL){
			temp=retirar();
			aux->insertar(temp);
			temp=retirar();
			adicional->insertar(temp);
		}
		while(aux->getFrente()!=NULL){
			temp=aux->retirar();
			insertar(temp);
		}
		delete aux;
		return adicional;
	}
}


void COLA::invertir(void){
   NODO *nodoRetirar;  
   if(!esVacia()){
       nodoRetirar=retirar();
       invertir();
       insertar(nodoRetirar);
   }    
}

int COLA::contarElementos(void){
	int cantidad=0;
	COLA *aux;
	NODO *nodoRetirar;
	if(esVacia()){
		return cantidad;
	}
	else{
		aux=new COLA;
		while(frente!=NULL){
			nodoRetirar=retirar();
			cantidad++;
			aux->insertar(nodoRetirar);
		}
		while(aux->getFrente()!=NULL){
			nodoRetirar=aux->retirar();
			insertar(nodoRetirar);
		}
		delete aux;
		return cantidad;
	}	
}

void COLA::invertirConPila(void){
	PILA *pila;
	NODO *temp;
	if(esVacia()){
		cout<<"No se puede invertir, la cola esta vac�a"<<endl;
	}
	else{
		pila=new PILA;
		pila->setTam(contarElementos());
		while(frente!=NULL){
			temp=retirar();
			pila->push(temp);
		}
		while(!pila->esVacia()){
			temp=pila->pop();
			insertar(temp);
		}
		delete pila;
	}
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
  aux->setTam(this->getTam());//para igualar las pilas al mismo tama�o
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


