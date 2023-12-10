#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream wf;
    string npm, nama, alamat, jurusan, no_telepon;
    int usia, i = 1, lanjut = 1;

    cout << "===== Pencatatan Data Mahasiswa ke dalam File =====" << endl;
    wf.open("contoh1.txt", ios::app);

    while (lanjut == 1)
    {
        cout << "\nData mahasiswa ke-" << i << endl;
        cout << "NPM\t:";
        cin >> npm;
        cout << "Nama\t:";
        cin >> nama;
        cout << "Usia\t:";
        cin >> usia;
        cout << "Alamat\t:";
        cin.ignore(); 
        getline(cin, alamat);
        cout << "Jurusan\t:";
        getline(cin, jurusan);
        cout << "Nomor Telepon\t:";
        cin >> no_telepon;

        cout << "Data input ke-" << i << ": " << npm << "-" << nama << "-" << usia << "-" << alamat << "-" << jurusan << "-" << no_telepon << endl;
        wf << npm << "\t" << nama << "\t" << usia << "\t" << alamat << "\t" << jurusan << "\t" << no_telepon << endl;

        cout << "\nPilih 1 untuk lanjut input dan 0 untuk berhenti:";
        cin >> lanjut;
        i++;
    }

    wf.close();

    cout << "===== Pencarian Data Mahasiswa =====" << endl;
    string kata_kunci;
    cout << "Masukkan kata kunci pencarian: ";
    cin.ignore();
    getline(cin, kata_kunci);

    ifstream rf("contoh1.txt");
    i = 1;

    while (rf >> npm >> nama >> usia >> alamat >> jurusan >> no_telepon)
    {
        if (npm.find(kata_kunci) != string::npos || nama.find(kata_kunci) != string::npos ||
            alamat.find(kata_kunci) != string::npos || jurusan.find(kata_kunci) != string::npos ||
            no_telepon.find(kata_kunci) != string::npos)
        {
            cout << "Data input ke-" << i << ": " << npm << "-" << nama << "-" << usia << "-" << alamat << "-" << jurusan << "-" << no_telepon << endl;
        }
        i++;
    }

    rf.close();

    return 0;
}