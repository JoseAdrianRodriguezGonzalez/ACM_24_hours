#include <iostream>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  int p,s,r,d=1,aux;
  do{
    std::cin>>p>>s>>r;
  }while((p<1||p>1000000)&&(r<1||r>1000000)&&(s<1||s>1000000));
  aux=s;
  while(aux<p){
    aux+=s;
    aux-=r;
    d++;

  } 
  std::cout<<d;
  // TODO: fixme.

  return 0;
}