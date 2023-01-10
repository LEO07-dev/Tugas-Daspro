/*
judul : Membuat program yang menampilkan bilangan kelipatan 6
Programer   : Azmi Jalaluddin Amron
Modify      : ke 1 pada 3 Oktober 2022
*/

#include <iostream>
using namespace std;

//kamus
    int h, x; //variabel yang dipakai
    int t;

//deskripsi
    int main()
    {
    	//nilai awal dari varibel
    	x=1;
        h=6;
        t=0;
        while (h=6 && h<100)
        {
            cout << "Kelipatan ke " << x << " adalah : \t"<< h << " \n";
            h=h+6;//ini buat nampilin berapa aja nilai bilangan yang berkelipatan 6
            t=t+h-(h>h);//ini buat menghitung keseluruhan nilai bilangan
            x=x+1;//Jadi x ini untuk nunjukin itu adalah kelipatan ke berapa dari kellipatan 6
			
        }

            cout << endl;
            cout << "Jumlah nilai bilangan kelipatan 6 kurang dari 100 adalah " << t; //Ini adalah jumlah nilai dari seluruh bilangan berkelipatan 6

        return 0;
    }
