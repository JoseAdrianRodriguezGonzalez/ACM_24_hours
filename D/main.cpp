#include <iostream>
using namespace std;
int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  int T,B,L;
  cin>>T>>B;
  if(T%2)
    L=T/2+1;
  else
    L=T/2;
  T-=L;
  B-=1;
  if(T%B){
    L+=T%B;
  }
  cout<<L;
  return 0;
}