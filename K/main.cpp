#include <iostream>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  int N,cont=0;
  do{
    std::cin>>N;
  }while(N>100||N<1);
  for(int i=0;i<N;i++){
    int valor=2*i+1;
    int espacios=N-(i+1);
    for(int j=0;j<espacios;j++){
      std::cout<<" ";
    }
    for(int k=0;k<valor;k++){
      std::cout<<"*";
    }
    std::cout<<"\n";

  }
  // TODO: fixme.

  return 0;
}