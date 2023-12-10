#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Fungsi X
double f(double x)
{
    return x * x - exp(x) + 3;
}

void tabel()
{
    system("cls");
    cout << "---- Metode Tabel ----" << endl;
    double batasBawah, batasAtas;
    cout << "Masukkan batas bawah : ";
    cin >> batasBawah;
    cout << "Masukkan batas atas  : ";
    cin >> batasAtas;

    int n = 10; // Jumlah iterasi atau jumlah interval yang ditingkatkan
    double h, xSebelum, hasil, batasBawahBaru, batasAtasBaru, eror;
    double tolerance = 1e-7; // Toleransi untuk menghentikan iterasi

    do
    {
        h = (batasAtas - batasBawah) / n;
        cout << endl;
        for (int i = 0; i <= n; i++)
        {
            double x = batasBawah + i * h;
            xSebelum = batasBawah + (i - 1) * h;
            double y = f(x);
            cout << x << setprecision(8) << "\t\t" << y << "\t";
            if (f(x) == 0)
            {
                cout << "Akar penyelesaiannya adalah : " << x;
            }
            else if (f(x) * f(xSebelum) < 0)
            {
                if (abs(f(x)) < abs(f(xSebelum)))
                {
                    hasil = x;
                    batasAtasBaru = x;
                    batasBawahBaru = xSebelum;
                    eror = abs(y);
                    cout << " <---Akar";
                }
                else
                {
                    hasil = xSebelum;
                    batasAtasBaru = x;
                    batasBawahBaru = xSebelum;
                    eror = abs(y);
                    cout << "<---Akar";
                }
            }
            cout << endl;
        }
        cout << "Akarnya adalah : " << hasil << endl;
        batasAtas = batasAtasBaru;
        batasBawah = batasBawahBaru;
        n *= 2; // Menambah jumlah iterasi untuk iterasi berikutnya
    } while (eror >= tolerance);
}

void regulaFalsi()
{
    system("cls");
    cout << "---- Metode Regula Falsi ----" << endl;
    double a, b;
    cout << "Masukkan batas bawah (a): ";
    cin >> a;
    cout << "Masukkan batas atas (b): ";
    cin >> b;

    int maxIterations = 50; // Jumlah maksimum iterasi
    double tolerance = 1e-7; // Toleransi untuk menghentikan iterasi

    for (int iteration = 1; iteration <= maxIterations; iteration++)
    {
        double fa = f(a);
        double fb = f(b);
        double x = b - ((fb * (a - b)) / (fa - fb));
        double error = f(x);

        cout << a << "\t" << b << "\t" << fa << "\t" << fb << "\t" << x << "\t" << error << endl;

        if (abs(error) < tolerance)
        {
            cout << "Akar ditemukan: " << x << endl;
            break;
        }

        if (fa * error < 0)
        {
            b = x;
        }
        else
        {
            a = x;
        }
    }
}

int main()
{
    char lanjutkanPilihan;

    do
    {
        system("cls");
        cout << "Metode Numerik Menu" << endl;
        cout << "1. Metode Tabel" << endl;
        cout << "2. Metode Regula Falsi" << endl;
        cout << "3. Keluar/Out" << endl << endl;
        cout << "Pilihan: ";
        cin >> lanjutkanPilihan;

        switch (lanjutkanPilihan)
        {
        case '1':
            tabel();
            break;
        case '2':
            regulaFalsi();
            break;
        case '3':
            break;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }

        if (lanjutkanPilihan != '3')
        {
            cout << "Apakah Anda ingin melanjutkan (y/n)? ";
            cin >> lanjutkanPilihan;
        }
    } while (lanjutkanPilihan == 'y' || lanjutkanPilihan == 'Y');

    return 0;
}

