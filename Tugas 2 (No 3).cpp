#include <iostream>
using namespace std;
#define harga 15000
int main() {
  float jumlah,total;
  cout <<"Masukkan Jumlah Barang = ";
  cin >> jumlah ;
  total = harga*jumlah;
  cout << "\nYang harus dibayar =\n" << total;
  
  return 0;

}