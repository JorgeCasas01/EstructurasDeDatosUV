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
       void mostrarPares(void);
};


int main(){
    string nom,tel,correo;
    char x;
    NODO *nuevo;
    LISTA *agenda;
    agenda=new LISTA();
    do{
        cout<<"Dame un nombre:";
        getline(cin,nom);
        fflush(stdin);
        cout<<"Dame telefono:";
        getline(cin,tel);
        fflush(stdin);
        cout<<"Dame correo:";
        getline(cin,correo);
        fflush(stdin);
        nuevo= new NODO();
        nuevo->setNombre(nom);
        nuevo->setCorreo(correo);
        nuevo->setTelefono(tel);
        agenda->insertarOrdenado(nuevo);
        cout<<"Quiere agregar otro (s/n):";
        cin>>x;
        fflush(stdin);
    }while(x!='n');
    agenda->mostrarPares();
   /* cout<<"Escribir correo a eliminar:";
    getline(cin,correo);
    fflush(stdin);
    agenda->eliminar(correo);
    agenda->mostrar();
    delete agenda;
    */
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
    nodo->setSig(cabeza);
    cabeza=nodo;
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

void LISTA::insertarOrdenado(NODO *nuevo){
	NODO *temp;
	int bandera=0;
	if(cabeza==NULL){//si la lista esta vacía
		cabeza=nuevo;
	}
	else{
		temp=cabeza;
		if(cabeza->getNombre().compare(nuevo->getNombre())>0){ //si el nuevo nodo va al inicio
			nuevo->setSig(cabeza);
			cabeza=nuevo;
		}
		else{
			while(temp->getSig()!=NULL && bandera==0){//recorre lista 
				if(nuevo->getNombre().compare(temp->getSig()->getNombre())>0){//verifica si el nuevo nodo no va colocado entre el temp y temp->sig
				 		temp=temp->getSig();
				 }
				 else{//verifica si el nuevo nodo si va colocado entre el temp y temp->sig
				 	bandera=1;
				 }
			}
			nuevo->setSig(temp->getSig());
			temp->setSig(nuevo);
		}
	}
}

void LISTA::eliminar(string email){
	NODO *temp, *nodo_eliminar;
	int bandera=0;
	if(cabeza==NULL){
		cout<<"No se encontro el correo, la lista esta vacía"<<endl;
	}
	else{ //si nodo a borrar es el primero de la lista
		if(cabeza->getCorreo().compare(email)==0){
			nodo_eliminar=cabeza;
			cabeza=cabeza->getSig();
			nodo_eliminar->setSig(NULL);
			cout<<"Nodo eliminado"<<endl;
			delete nodo_eliminar;
		}
		else{//si el nodo a eliminar esta enmedio o al final de la lista
			temp=cabeza;
			while(temp->getSig()!=NULL && bandera==0){//recorre lista 
				if(email.compare(temp->getSig()->getCorreo())!=0){//verifica si el nuevo nodo no va colocado entre el temp y temp->sig
				 		temp=temp->getSig();
				 }
				 else{//verifica si el nuevo nodo si va colocado entre el temp y temp->sig
				 	bandera=1;
				 }
			}
			if(bandera==1){
				nodo_eliminar=temp->getSig();
				temp->setSig(nodo_eliminar->getSig());
				nodo_eliminar->setSig(NULL);
				cout<<"Nodo eliminado"<<endl;
				delete nodo_eliminar;
			}
			else{
				cout<<"Correo no encontrado en la lista"<<endl;
			}
		}
	}
}

void LISTA::mostrar(void){
    NODO *temp;
    temp=cabeza;
    while(temp!=NULL){
        cout<<"Nombre:"<<temp->getNombre()<<endl;
        cout<<"Correo:"<<temp->getCorreo()<<endl;
        cout<<"Telefono:"<<temp->getTelefono()<<endl;
        cout<<"_______________________"<<endl;
        temp=temp->getSig();
    }    
}
void LISTA::mostrarPares(void){
NODO *temp;
int cont=1;
temp=cabeza;
while(temp!=NULL){
  if((cont%2)==0){
     cout<<"Nombre:"<<temp->getNombre()<<endl;
     cout<<"Correo:"<<temp->getCorreo()<<endl;
     cout<<"Telefono:"<<temp->getTelefono()<<endl;
     cout<<"_______________________"<<endl;
     
  }
  temp=temp->getSig();
  cont++;    
 }
}
















