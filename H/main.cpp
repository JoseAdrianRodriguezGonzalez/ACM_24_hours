#include <iostream>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  int A,B;
  do{
    std::cin>>A>>B;
  }while(A<1000||B>40000);
  // TODO: fixme.
  int result=A-B;
  if(result>=0){
    std::cout<<"El negocio si va a jalar"<<"\n"<<result;
  }else{
    std::cout<<"Dejalo ya esta muerto"<<"\n"<<(-1)*result;
  }
  return 0;
}