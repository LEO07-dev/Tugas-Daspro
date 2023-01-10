//judul : latihan loop dalam loop (inner loop)
//while deret angka seperti matrik
//author : Aam 2 Okt 2022

//kamus
#include <iostream>
using namespace std;
    int angkaloncat;
    int loncatangka;

//deskripsi
    int main()
    {
        angkaloncat=10;
        while (angkaloncat>=6)
        {
            //-------inner loop----------
            loncatangka=1;
            do
            {
                    cout << loncatangka;
                    cout << "-";
            }while(loncatangka<10);
            //----------------------

            angkaloncat=angkaloncat-1;
            cout << endl;


        }


        return 0;
    }
