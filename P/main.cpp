#include <iostream>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  int N;
  do{
    std::cin>>N;
  }while(N>100||N<3);
  int x[N]={};
  for(int i=0;i<N;i++){
    int valor;
    std::cin>>valor;
    x[i]=valor;
  }
  for(int j=0;j<N-1;j++){
    int posMayor=j;
    int valM=x[j];
    for(int i=posMayor+1;i<N;i++){
      if(x[i]>valM){
        valM=x[i];
        posMayor=i;
      }
    }
    int aux=x[j];
    x[j]=x[posMayor];
    x[posMayor]=aux;
  }
  std::cout<<x[0]<<"\n"<<x[1]<<"\n"<<x[2];
  // TODO: fixme.

  return 0;
}