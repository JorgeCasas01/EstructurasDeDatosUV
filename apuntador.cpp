

using namespace std;

int main(){
  int arre[3]={1,2,3}

  int *puntero=arre;

  for(int i=0;i<3;i++){
  cout<<*puntero<<endl,cout<<arre[i]<<endl;
  puntero++;

  return 0;
}
