#include <iostream>
using namespace std;

double rekursif(double x, int n){
    if(n == 0){
        return 1.0; //x^0 = 1
    } else if(n % 2 == 0){
        double kalkulasi = rekursif(x, n/2);
        return kalkulasi * kalkulasi;
    } else if(n % 2 != 0){
        double kalkulasi = rekursif(x, (n - 1)/2);
        return x * kalkulasi * kalkulasi;
    }
}

int main(){
    int n;
    double x;

    cout << "Masukkan nilai x: " << endl;
    cin >> x;

    cout << "Masukkan nilai n: " << endl;
    cin >> n;

    double hasil = rekursif(x,n);
    cout << "Hasil dari " << x << "^" << n << " adalah " << hasil << endl;
    return 0;
}