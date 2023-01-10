/*
Judul
Menghitung waktu
Programer   : Azmi Jalaluddin Amron
Modify      : 17 September 2022
*/
#include <iostream>
using namespace std;

 //Kamus
    int j1, j2, m1, m2, d1, d2, h1, h2, h3, j0, m0, d0;
    /*
    j1 = jam awal
    j2 = jam akhir
    m1 = menit awal
    m2 = menit akhir
    d1 = detik awal
    d2 = detik akhir
    h1 = hasil detik untuk jam belajar awal
    h2 = hasil detik untuk jam belajar akhir
    h3 = mengurangi h2 dengan h1
    j0 = jumlah jam yang dihabiskan selama belajar
    m0 = jumlah menit yang dihabiskan selama belajar
    d0 = jumlah detik yang dihasbiskan selama belajar
    */
    int jam_detik   = 3600;
    int menit_detik = 60;
    int jam_menit   = 60;

 //Diskripsi
    int main ()
    {
        cout << "Salvados mulai belajar pada jam 20:16:34 dan selesai belajar pada jam 22:30:40." << endl;
		cout << "Berapa lama waktu yang dibutuhkan oleh Salvados untuk menyelesaikan belajarnya?" << endl;
		j1 = 20;
		m1 = 16;
		d1 = 34;
		h1 = j1 * jam_detik + m1 * menit_detik + d1;
		cout << "Maka jumlah detik pada jam mulai belajar adalah " << h1 << " detik." << endl;
		j2 = 22;
		m2 = 30;
		d2 = 40;
		h2 = j2 *jam_detik + m2 * menit_detik + d2;
		cout << "Maka jumlah detik pada jam selesai belajar adalah = " << h2 << " detik." << endl;
		cout << "Setelah itu kita kurangi jumlah detik selesai belajar dengan jumlah detik mulai belajar." << endl;
		h3 = h2 - h1;
		cout << "Hasilnya adalah = " << h3 << " detik." << endl;
		cout << "Mari kita bagi dengan 3600 untuk menentukan ada berapa jam." << endl;
		j0 = h3 / jam_detik;
		cout << "Hasilnya adalah adalah = " << j0 << " jam." << endl;
		cout << "Selanjutnya kita bagi sisa dari pembagian tadi dengan 60 untuk mencari menit." << endl;
		m0 = (h3 % jam_detik) / jam_menit; //% di sini maksudnya adalah mod(sisa pembagian bilangan bulat.
		cout << "Jumlah menit adalah " << m0 << " menit." << endl;
		cout << "Terakhir kita cari detik." << endl;
		d0 = (h3 % jam_detik) % menit_detik;
		cout << "Jumlah detik adalah = " << d0 << " detik." << endl;
		cout << "Maka lama waktu belajar si Salvados adalah " << j0 << " jam, " << m0 << " menit, " << d0 << " detik.";


		return 0;

    }

