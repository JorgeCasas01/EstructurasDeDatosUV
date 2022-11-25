#include <iostream>
#include <list>
#include <conio.h>
using namespace std;
void imprimirLista( list<string> & sList );
void imprimirListaInversa( list<string> & sList );
void imprimirPorBusqueda( list<string> & sList,string busqueda );
void eliminarPosicion( list<string> & sList,int posicion );
void insertarPosicion( list<string> & sList,string nuevo,int posicion );



int main(int argc, char *argv[]) {
	list <string> agenda;
	agenda.push_back("Pedro");
	agenda.push_back("Jose");
	agenda.push_back("Ana");
	agenda.push_back("Anastasia");
	agenda.push_back("Samantha");
	cout << agenda.size() << endl;
	cout<<endl<<endl;
	imprimirLista(agenda);
	cout<<endl<<endl;
	imprimirListaInversa(agenda);
	cout<<endl<<endl;
	imprimirPorBusqueda(agenda,"J");
	cout<<endl<<endl;
	eliminarPosicion(agenda,3);
	cout<<endl<<endl;
	imprimirLista(agenda);
	cout<<endl<<endl;
	insertarPosicion(agenda,"Angel",3);
	cout<<endl<<endl;
	imprimirLista(agenda);
	return 0;
}

void imprimirLista( list<string> & sList )
{
	list<string>::iterator pos;
	pos = sList.begin();
	while( pos != sList.end())
	{
		cout << *pos << endl;
		pos++;
	}
}
void imprimirListaInversa( list<string> & sList )
{
	list<string>::reverse_iterator pos;
	pos = sList.rbegin();
	while( pos != sList.rend())
	{
		cout << *pos << endl;
		pos++;
	}
}
void imprimirPorBusqueda( list<string> & sList,string busqueda )
{
	string nombre;
	list<string>::iterator pos;
	pos = sList.begin();
	while( pos != sList.end())
	{
		nombre=*pos;
		if(nombre.find(busqueda)==0){
			cout << *pos << endl;
		}
		
		pos++;
	}
}
void eliminarPosicion( list<string> & sList,int posicion )
{
	list<string>::iterator pos;
	pos = sList.begin();
	advance(pos,posicion-1);
	sList.erase(pos);

}
void insertarPosicion( list<string> & sList,string nuevo,int posicion )
{
	list<string>::iterator pos;
	pos = sList.begin();
	advance(pos,posicion-1);
	sList.insert(pos,nuevo);
	
}

