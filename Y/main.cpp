#include <iostream>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  int N;
  do{
    std::cin>>N;
  }while(N<1||N>1000);
  int x[N]={};
  for(int i=0;i<N;i++){
    int valor=0;
    std::cin>>valor;
    x[i]=valor;
  }
  int count=0;
  for(int i=0;i<N;i++){
    if(x[i]==x[N-(i+1)]){
      count++;
    }
  }
  if(count==N){
    std::cout<<"SI";
  }else{
    std::cout<<"NO";
  }
  // TODO: fixme.

  return 0;
}