//judul : latihan looping rada rumit
//untuk urusan Meneh po Rak ? dengan huruf y sebahai kuncinya
//cermati kasus berikkut tidak cuma type nya char
//tapi char ..[??] artinya bukan karakter tapi string
//huruf y nya di apit dengan tanda petik dua ""
//author : Aam 2 Okt 2022

//kamus
#include <iostream>
using namespace std;

    char ulangi[2];
    int counter;

//deskripsi
    int main()
    {
        strcpy(ulangi,"Y"); //ini digunakan karena tidak bisa untuk ulangi="y"
        counter=0;
        do{
            cout << "Apakah kamu mau mengulang?\n" << endl;
            cout << "Jawab(y/t): ";
            cin >> ulangi;

            counter=counter+1;

        }while(strcmp(ulangi,"y")==0);
        //karena y nya adalah string yang ditandai dengan ""
        //maka tidak bisa while(ulangi="y";
        //string harus menggunakan strcmp tentunya dengan menyertakan header string.h

        cout << "---------" << endl;
        cout << "Perulangan Berakhir...!\n" << endl;
        cout << "Kamu mengulang sebanyak " << counter << endl;


        return 0;
    }
