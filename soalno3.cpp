#include <iostream>
using namespace std;

int main(){

int total, angka, n = 1;
while (n <= 10){
    angka = 2*n;
    total += angka; // total = total + angka
    cout << angka; //  output
    n++;
    if (angka <20) // if (angka < 20)
    cout << " + "; // output
}
cout << " = " << total; // output
}