#include <iostream>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  unsigned int a,b,c;
  do{
    std::cin>>a>>b>>c;
  }while(a>100||b>100||c>100);
  unsigned int volumen=a*b*c;
  std::cout<<volumen;
  // TODO: fixme.

  return 0;
}