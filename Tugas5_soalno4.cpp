#include <iostream> 
using namespace std;

int main(){
  int prima,a,b = 0;

  cout<<"Silahkan masukkan bilangan = ";
  cin >> prima;

  for (a = 2; a <= prima/2; a+=1)
  {
    if (prima%a == 0) {
    b = 1;
    break;
    }
  }
  if (b == 0)
    cout <<"Bilangan "<< prima <<" merupakan bilangan prima\n";
  else 
    cout <<"Bilangan "<< prima <<" bukan termasuk bilangan prima\n";
  return 0;
}