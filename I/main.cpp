#include <iostream>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  int N,M;
  std::cin>>N>>M;
  for(N;N<=M;N++){
    if(!(N%2))
      std::cout<<N<<"\n";
  }
  // TODO: fixme.

  return 0;
}