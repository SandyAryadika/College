#include <iostream>
using namespace std;

void menaraHanoi(int n, char dari_tiang, char ke_tiang, char tiang_bantu) {
    if (n == 1) {
        cout << "Pindahkan cakram 1 dari tiang " << dari_tiang << " ke tiang " << ke_tiang << endl;
        return;
    }
    menaraHanoi(n - 1, dari_tiang, tiang_bantu, ke_tiang);
    cout << "Pindahkan cakram " << n << " dari tiang " << dari_tiang << " ke tiang " << ke_tiang << endl;
    menaraHanoi(n - 1, tiang_bantu, ke_tiang, dari_tiang);
}

int main() {
    int n;
    cout << "Masukkan jumlah cakram: ";
    cin >> n;
    menaraHanoi(n, 'A', 'C', 'B');
    return 0;
}