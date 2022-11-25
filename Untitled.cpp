void ejecutando( int valor){
 if(valor > 0 ){
 ejecutando(valor – 2);
 cout << valor<< “ ”; 
 }
}
int main(){
 ejecutando(12);
 return 0;

