#include <iostream>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  int N;
  do{
    std::cin>>N;
  }while(N<1||N>100);
  int x[N]={};
  for(int i=0;i<N;i++){
    int valor=0;
    std::cin>>valor;
    x[i]=valor;
  }
  int mayor=x[0],count=0;
  for(int i=0;i<N;i++){
    if(x[i]>mayor){
      mayor=x[i];
    }
  }
  for(int i=0;i<N;i++){
    if(mayor!=x[i]){
      count++;
    }
  }
  std::cout<<count<<"\n";
    for(int i=0;i<N;i++){
    if(mayor!=x[i]){
      std::cout<<x[i]<<"\t";
    }
  }
  // TODO: fixme.

  return 0;
}