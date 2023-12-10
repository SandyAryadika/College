/*#include <iostream>
using namespace std;*/

/*struct Kampus{
  string namaKampus;
  int TB;
};
*/

/*cara 1 (global)
struct Mahasiswa{
  string npm, nama, jurusan;
  int usia;
  string hobi[2];
  Kampus kps;
}mhs1, mhs2, mhs3;
*/

//cara 2 (lokal)
/*
struct Mahasiswa{
  string npm, nama, jurusan;
  int usia;
  string hobi [2];
  Kampus kps;

};
*/

/*int main (){}*/
  /*Mahasiswa mhs1, mhs2, mhs3;*/
  /*mhs1.npm = "22081010323";
  mhs1.nama = "Sandy Aryadika Widodo";
  mhs1.jurusan = "Informatika";
  mhs1.usia = 19;
  mhs1.hobi[0] = "nge-game";
  mhs1.hobi[1] = "desain";
  mhs1.kps.namaKampus = "UPN 'Veteran' Jawa Timur";
  mhs1.kps.TB = 2022;
  /*
  mhs2.npm = "21081010350";
  mhs2.nama = "Pamungkas";
  mhs2.jurusan = "Informatika";
  mhs2.usia = 20;
  mhs2.hobi[0] = "tidur";
  mhs2.hobi[1] = "makan";
  mhs2.kps.namaKampus = "UPN 'Veteran' Jawa Timur";
  mhs2.kps.TB = 2021;
  -
  cout << "NPM \t\t: " << mhs1.npm << endl;
  cout << "Nama \t\t: " << mhs1.nama << endl;
  cout << "Jurusan \t: " << mhs1.jurusan << endl;
  cout << "Usia \t\t: " << mhs1.usia << endl;
  cout << "Hobi 1 \t\t: " << mhs1.hobi[0] << endl;
  cout << "Hobi 2 \t\t: " << mhs1.hobi[1] << endl;
  cout << "Nama Kampus \t: " << mhs1.kps.namaKampus << endl;
  cout << "Tahun Bediri \t: " << mhs1.kps.TB << endl;
*/

/*
//cara 2
  Mahasiswa mhs2;
  mhs2 = {"21081010350","Pamungkas","Informatika",20,"tidur","makan","UPN 'Veteran' Jawa Timur", 2021};

//cara 3
  Mahasiswa mhs3 = {"21083010001", "Darma Putra", "Sains Data",20,"muter-muter","layangan","UPN 'Veteran' Jawa Timur",2021};

  cout << "NPM \t\t: " << mhs2.npm << endl;
  cout << "Nama \t\t: " << mhs2.nama << endl;
  cout << "Jurusan \t: " << mhs2.jurusan << endl;
  cout << "Usia \t\t: " << mhs2.usia << endl;
  cout << "Hobi 1 \t\t: " << mhs2.hobi[0] << endl;
  cout << "Hobi 2 \t\t: " << mhs2.hobi[1] << endl;
  cout << "Nama Kampus \t: " << mhs2.kps.namaKampus << endl;
  cout << "Tahun Bediri \t: " << mhs2.kps.TB << endl << endl;

  cout << "NPM \t\t: " << mhs3.npm << endl;
  cout << "Nama \t\t: " << mhs3.nama << endl;
  cout << "Jurusan \t: " << mhs3.jurusan << endl;
  cout << "Usia \t\t: " << mhs3.usia << endl;
  cout << "Hobi 1 \t\t: " << mhs3.hobi[0] << endl;
  cout << "Hobi 2 \t\t: " << mhs3.hobi[1] << endl;
  cout << "Nama Kampus \t: " << mhs3.kps.namaKampus << endl;
  cout << "Tahun Bediri \t: " << mhs3.kps.TB << endl;
  */

/*
//cara 2
#include <iostream>
using namespace std;

struct mahasiswa {
    string npm, nama, jurusan;
    int usia;
    string hobi[2];
};

int main() {
    mahasiswa mhs1;

    mhs1.hobi[0] = "nge-game";
    mhs1.hobi[1] = "desain";

    cout << "Hobi 1: " << mhs1.hobi[0] << endl;
    cout << "Hobi 2: " << mhs1.hobi[1] << endl;

    return 0;
}
/*

/*
//cara 2
    #include <iostream>
    using namespace std;

struct Mahasiswa {
    string npm, nama, jurusan;
    int usia;
    string hobi[2];
};

int main() {
    Mahasiswa mhs1[2];

    mhs1[0].npm = "22081010323";
    mhs1[1].nama = "Sandy Aryadika";
    cout << mhs1[0].npm << endl;
    cout << mhs1[1].nama << endl;

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

struct Kampus {
    string namaKampus;
    int TB;
};

struct Mahasiswa {
    string npm, nama, jurusan;
    int usia;
    string hobi[2];
    Kampus kps;
};

struct Alamat {
    string jalan;
    string kota;
    string kode_pos;
};

int main() {
    Mahasiswa mhs1;

    mhs1.npm = "22081010323";
    mhs1.nama = "Sandy Aryadika Widodo";
    mhs1.jurusan = "Informatika";
    mhs1.usia = 19;
    mhs1.hobi[0] = "nge-game";
    mhs1.hobi[1] = "desain";
    mhs1.kps.namaKampus = "UPN 'Veteran' Jawa Timur";
    mhs1.kps.TB = 2022;

    Alamat alamat;
    alamat.jalan = "PCI Blok O-249 RT07 RW04";
    alamat.kota = "Gresik";
    alamat.kode_pos = "61171";

    cout << "Informasi Mahasiswa:" << endl;
    cout << "NPM\t: " << mhs1.npm << endl;
    cout << "Nama\t: " << mhs1.nama << endl;
    cout << "Jurusan\t: " << mhs1.jurusan << endl;
    cout << "Usia\t: " << mhs1.usia << " tahun" << endl;
    cout << "Hobi\t: " << mhs1.hobi[0] << " dan " << mhs1.hobi[1] << endl;
    cout << "Kampus\t: " << mhs1.kps.namaKampus << ", Tahun Berdiri: " << mhs1.kps.TB << endl;
    cout << "Alamat\t: " << alamat.jalan << ", " << alamat.kota << " " << alamat.kode_pos << endl;
}
*/

#include <iostream>
using namespace std;

struct Kampus {
    string namaKampus;
    int TB;
};

struct Mahasiswa {
    string npm, nama, jurusan;
    int usia;
    string hobi[2];
    Kampus kps;
};

struct Alamat {
    string jalan;
    string kota;
    string kode_pos;
};

// Fungsi yang menerima parameter bertipe Mahasiswa
void tampilkanInformasiMahasiswa(const Mahasiswa &mahasiswa) {
    cout << "Informasi Mahasiswa:" << endl;
    cout << "NPM\t: " << mahasiswa.npm << endl;
    cout << "Nama\t: " << mahasiswa.nama << endl;
    cout << "Jurusan\t: " << mahasiswa.jurusan << endl;
    cout << "Usia\t: " << mahasiswa.usia << " tahun" << endl;
    cout << "Hobi\t: " << mahasiswa.hobi[0] << " dan " << mahasiswa.hobi[1] << endl;
    cout << "Kampus\t: " << mahasiswa.kps.namaKampus << ", Tahun Berdiri: " << mahasiswa.kps.TB << endl;
}

int main() {
    Mahasiswa mhs1;

    mhs1.npm = "22081010323";
    mhs1.nama = "Sandy Aryadika Widodo";
    mhs1.jurusan = "Informatika";
    mhs1.usia = 19;
    mhs1.hobi[0] = "nge-game";
    mhs1.hobi[1] = "desain";
    mhs1.kps.namaKampus = "UPN 'Veteran' Jawa Timur";
    mhs1.kps.TB = 2022;

    tampilkanInformasiMahasiswa(mhs1); // Memanggil fungsi dengan parameter Mahasiswa

    return 0;
}



