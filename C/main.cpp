#include <iostream>
using namespace std;
int main() {

  int L,N,l,m,w,j,v,s,d;
  cin>>L>>N>>l>>m>>w>>j>>v>>s>>d;
  int dia1=L-(N*l);
  int dia2=L-(N*m)+dia1;
  int dia3=L-(N*w)+dia2;
  int dia4=L-(N*j)+dia3;
  int dia5=L-(N*v)+dia4;
  int dia6= L-(N*s)+dia5;
  int dia7=L-(N*d)+dia6;
  cout<<dia1<<endl;
  cout<<dia2<<endl;
  cout<<dia3<<endl;
  cout<<dia4<<endl;
  cout<<dia5<<endl;
  cout<<dia6<<endl;
  cout<<dia7<<endl;

  return 0;
}