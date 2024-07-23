#include <iostream>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  int N,A=0;
  do{
    std::cin>>N;
  }while(N>500||N<1);
  int x[N]={};
  for(int i=0;i<N;i++){
    int valor;
    std::cin>>valor;
    x[i]=valor;
  }
  std::cin>>A;
  int posPerro=0,cont=0;
  for(int i=0;i<N;i++){
    posPerro+=x[i];

    if(A==posPerro){
      cont++;
      
    }
  }
  std::cout<<cont;
  return 0;
}