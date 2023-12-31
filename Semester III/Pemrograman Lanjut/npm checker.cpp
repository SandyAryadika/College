#include <iostream>
#include <string>

using namespace std;

bool CheckNPM(string npm, int &digittahunajaran, int tahunsekarang) {
    string thnmasuk = npm.substr(0, 2);
    string digit20 = "20";
    string tahunajaran = digit20 + thnmasuk;
    digittahunajaran = stoi(tahunajaran);

    if (digittahunajaran < 2003 || digittahunajaran > tahunsekarang) {
        cout << "NPM tidak ditemukan." << endl;
        return false;
    }

    return true;
}

bool CheckFasilkom(string npm) {
    if (npm[3] == '8') {
        switch (npm[4]) {
            case '1':
                cout << "Informatika";
                break;
            case '2':
                cout << "Sistem Informasi";
                break;
            case '3':
                cout << "Sains Data";
                break;
            case '4':
                cout << "Bisnis Digital";
                break;
            default:
                cout << "Bukan program studi yang dikenal";
                return false;
        }
        cout << endl;
        return true;
    } else {
        cout << "Bukan fasilkom" << endl;
        return false;
    }
}

void CheckLamaAjar(int digittahunajaran, int tahunsekarang) {
    if (digittahunajaran < 2017) {
        cout << "Anda sudah lulus" << endl;
    } else {
        int masaajaran = tahunsekarang - digittahunajaran;
        cout << "Informasi: masa ajaran anda sudah " << masaajaran << " tahun." << endl;
    }
}

int main() {
    bool confirm;
    char lanjut;
    string npm;
    int tahunsekarang = 2023, digittahunajaran;

    do {
        cout << "Masukkan NPM: ";
        cin >> npm;

        confirm = CheckNPM(npm, digittahunajaran, tahunsekarang);

        if (confirm) {
            confirm = CheckFasilkom(npm);
            if (confirm) {
                CheckLamaAjar(digittahunajaran, tahunsekarang);
            }
        }

        cout << endl;
    } while (!confirm);

    return 0;
}

