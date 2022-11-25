int main(int argc, char** argv) {
    Pila pila;
	pila.push(5);
	pila.push(9);
	pila.push(2);
	pila.push(4);
	pila.push(9);
	pila.mostrarHastaPosicion(1);
	//pila.menu();
    return 0;
}
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
