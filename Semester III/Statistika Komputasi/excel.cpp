#include <iostream>
#include <cmath>     //operasi matematika
#include <algorithm> //sorting data
#include <libxl.h>
using namespace libxl;
using namespace std;

int main()
{

    Excel* excel=xlCreateExcel();
    if (excel){
        if (excel->load(D:\KULIAH\SEMESTER 3\STATISTIK KOMPUTASI\Tugas 1)){
            // input jumlah data
    int x;
    cout << " Masukkan jumlah data : ";
    cin >> x;

    // input data
    int data[x];
    for (int i = 0; i < x; i++)
    {
        cout << " Masukkan data ke-" << i + 1 << ": ";
        cin >> data[i];
    }

    // mean
    double jumlah = 0;
    for (int i = 0; i < x; i++)
    {
        jumlah += data[i];
    }
    double mean = jumlah / x;
    cout << "Mean: " << mean << endl;

    //median
    sort (data, data+x);
    double median;
    if (x % 2 == 0) {
        median = (data[x/2-1] + data[x/2-1]) / 2.0;
    } else {
        median = data[x/2-1];
    }
    cout << "Median: " << median << endl;

    //modus
    int modus = data[0];
    int hitung = 1;
    int max_hitung = 1;
    for (int i = 1; i < x; i++){
        if (data[1] == data[i-1]){
        hitung++;
    } else {
        if (hitung > max_hitung){
            max_hitung = hitung;
            modus = data[i-1];
            }
        hitung = 1;
        }
    }
    if (hitung > max_hitung){
        max_hitung = hitung;
        modus = data[x-1];
    }

    cout << "Modus: " << modus << endl;

    //standar deviasi
    double variasi = 0;
    for (int i = 0; i < x; i++){
        variasi += pow(data[i] - mean, 2);
    }
    variasi /= x;
    double standar_deviasi = sqrt(variasi);
    cout << "Standar Deviasi: " << standar_deviasi << endl;

    //varian
    double varian = variasi;
    cout << "Varian: " << varian << endl;
        }
        book->release();
    }

    return 0;
}