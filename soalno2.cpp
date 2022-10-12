#include <iostream>
using namespace std;

int main(){

int total, angka, n = 1;
while (n <= 10){
    angka = (2*n)-1;
    total += angka; // total = total + angka
    cout << angka; //  output
    n++;
    if (angka <((2*10)-1)) //if (angka < 19)
    cout << " + "; // output
}
cout << " = " << total; // output
}