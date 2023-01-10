/*
judul
Perhitungan Aritmatika
Programer   : Azmi Jalaluddin Amron
Modify      : 24 September 2022
*/

#include <iostream>
using namespace std;

//kamus

    int bil11, bil12, hasil1, bil21, bil22, hasil2, bil31, bil32, hasil3, bil41, bil42, hasil4;

//deskripsi
    int main()
    {
        cout << "               Perhitungan Aritmatika          " << endl << endl;
        cout << "A. Perkalian" << endl;
        cout << "Masukkan angka pertama : "; cin >> bil11;
        cout << "Masukkan angka kedua : "; cin >> bil21;
        hasil1 = bil11 * bil21;
        cout << "Maka hasil perkaliannya adalah " << hasil1 << endl << endl;

        cout << "B. Pembagian" << endl;
        cout << "Masukkan angka pertama : "; cin >> bil21;
        cout << "Masukkan angka kedua :"; cin >> bil22;
        hasil2 = bil21 / bil22;
        cout << "Maka hasil pembagiannya adalah " << hasil2 << endl << endl;

        cout << "C. Pengurangan" << endl;
        cout << "Masukkan angka pertama : "; cin >> bil31;
        cout << "Masukkan angka kedua : "; cin >> bil32;
        hasil3 = bil31 - bil32;
        cout << "Maka hasil pengurangannya adalah " << hasil3 << endl << endl;

        cout << "D. Penjumlahan" << endl;
        cout << "Masukkan angka pertama : "; cin >> bil41;
        cout << "Masukkan angka kedua : "; cin >> bil42;
        hasil4 = bil41 + bil42;
        cout << "Maka hasil penjumalahannya adalah " << hasil4 << endl;

        if (hasil4%2 == 0)
        {
            cout << "Hasil penjumlahan termasuk bilangan bulat genap.";
        }
        else
        {
            cout << "Hasil penjumlahan termasuk bilangan bulat ganjil.";
        }
    }
