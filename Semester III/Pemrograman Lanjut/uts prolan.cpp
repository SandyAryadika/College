#include <iostream>
#include <string>

using namespace std;

// Definisi struktur DataResponden
struct DataResponden {
    string idResponden;
    int skorPengetahuan;
    string KategoriPengetahuan;
};

// Fungsi untuk menentukan kategori pengetahuan berdasarkan nilai
string KategoriPengetahuan(int nilai) {
    if (nilai > 79) {
        return "Tinggi";
    } else if (nilai >= 56) {
        return "Sedang";
    } else {
        return "Rendah";
    }
}

// Fungsi untuk mencari ID dengan skor pengetahuan terendah
string mencariIDTerendah(DataResponden dataResponden[], int jumlahData) {
    int skorMinimal = dataResponden[0].skorPengetahuan;
    string idTerendah = dataResponden[0].idResponden;

    for (int i = 1; i < jumlahData; i++) {
        if (dataResponden[i].skorPengetahuan < skorMinimal) {
            skorMinimal = dataResponden[i].skorPengetahuan;
            idTerendah = dataResponden[i].idResponden;
        }
    }
    return idTerendah;
}

// Fungsi untuk mencari ID dengan skor pengetahuan tertinggi
string mencariIDTertinggi(DataResponden dataResponden[], int jumlahData) {
    int skorMaksimal = dataResponden[0].skorPengetahuan;
    string idTertinggi = dataResponden[0].idResponden;

    for (int i = 1; i < jumlahData; i++) {
        if (dataResponden[i].skorPengetahuan > skorMaksimal) {
            skorMaksimal = dataResponden[i].skorPengetahuan;
            idTertinggi = dataResponden[i].idResponden;
        }
    }
    return idTertinggi;
}

// Fungsi untuk menampilkan ID responden dengan kategori pengetahuan tinggi
void tampilkanIDPengetahuanTinggi(DataResponden dataResponden[], int jumlahData) {
    cout << "ID responden dengan kategori pengetahuan TINGGI adalah:" << endl;
    for (int i = 0; i < jumlahData; i++) {
        if (KategoriPengetahuan(dataResponden[i].skorPengetahuan) == "Tinggi") {
            cout << dataResponden[i].idResponden << endl;
        }
    }
}

// Fungsi untuk menampilkan ID responden dengan skor lebih tinggi dari nilai X
void tampilkanIDLebihTinggiDariX(DataResponden dataResponden[], int jumlahData, int X) {
    cout << "ID responden dengan skor di atas " << X << " adalah:" << endl;
    for (int i = 0; i < jumlahData; i++) {
        if (dataResponden[i].skorPengetahuan > X) {
            cout << dataResponden[i].idResponden << endl;
        }
    }
}

int main() {
    // Membuat array dari struct DataResponden
    DataResponden dataResponden[10];

    // Mengisi data ke dalam array struct
    dataResponden[0] = {"Aminah", 80, KategoriPengetahuan(80)};
    dataResponden[1] = {"Badu", 34, KategoriPengetahuan(34)};
    dataResponden[2] = {"Culun", 56, KategoriPengetahuan(56)};
    dataResponden[3] = {"Dedi", 78, KategoriPengetahuan(78)};
    dataResponden[4] = {"Endah", 59, KategoriPengetahuan(59)};
    dataResponden[5] = {"Fuji", 69, KategoriPengetahuan(69)};
    dataResponden[6] = {"Genta", 47, KategoriPengetahuan(47)};
    dataResponden[7] = {"Hamidah", 75, KategoriPengetahuan(75)};
    dataResponden[8] = {"Indie", 40, KategoriPengetahuan(40)};
    dataResponden[9] = {"Jony", 90, KategoriPengetahuan(90)};

    cout << "---------------------------------------------------------" << endl;
    cout << "| ID Responden \t| Skor Pengetahuan | Kategori Pengetahuan |\n";
    cout << "| \t\t| \t\t   | \tTinggi > 79\t|\n";
    cout << "| \t\t| \t\t   | Sedang 56 - 79\t|\n";
    cout << "| \t\t| \t\t   | \tRendah < 56\t| " << endl;
    cout << "---------------------------------------------------------" << endl;

    for (int i = 0; i < 10; i++) {
        cout << "|\t" << dataResponden[i].idResponden << "\t| \t" << dataResponden[i].skorPengetahuan << "\t|";
        cout << "\t" << dataResponden[i].KategoriPengetahuan << "\t\t|" << endl;
    }

    cout << "---------------------------------------------------------" << endl;

    cout << "ID responden dengan nilai terendah: " << mencariIDTerendah(dataResponden, 10) << endl;
    cout << "ID responden dengan nilai tertinggi: " << mencariIDTertinggi(dataResponden, 10) << endl;

    cout << "---------------------------------------------------------" << endl;

    // Menampilkan ID responden dengan kategori pengetahuan tinggi
    tampilkanIDPengetahuanTinggi(dataResponden, 10);

    cout << "---------------------------------------------------------" << endl;

    // Menampilkan ID responden dengan skor lebih tinggi dari nilai X (misalnya 70)
    tampilkanIDLebihTinggiDariX(dataResponden, 10, 70);

    cout << "---------------------------------------------------------" << endl;

    return 0;
}

