/*
judul
Menyimpulkan sebuah penyakit dan obatnya
Programer   : Azmi Jalaluddin Amron
ModifY      : 1 Oktober 2022
*/

#include <iostream>
using namespace std;

//kamus
    char nama[50], kelamin[30], choice;
    int umur;
    char gejala1;
    char gejala2;
    char gejala3;
    char gejala4;
    char gejala5;


//deskripsi
    int main ()
    {
        cout << "Masukkan nama anda : "; cin.getline(nama, 50);
        cout << "Masukkan jenis kelamin anda : "; cin.getline(kelamin, 30);
        cout << "Masukkan umur anda : "; cin >> umur;
        cout << endl << endl;

        cout << "MASUKKAN GEJALA SESUAI YANG ADA DI DAFTAR" << endl;
        cout << "===================================================" << endl;
        cout << "A=PENURUNAN KESADARAN\n";
        cout << "B=MULUT PEROT\n";
        cout << "C=BATUK TERUS-MENERUS\n";
        cout << "D=RIWAYAT PAPARAN ALERGEN\n";
        cout << "E=PERTAMA KALI CACAR AIR\n";
        cout << "F=MUNTAH SEMBURAN\n";
        cout << "H=SESAK NAPAS TERUS MENERUS\n";
        cout << "I=BATUK HILANG TIMBUL\n";
        cout << "J=RUAM KEMERAHAN\n";
        cout << "K=KELKUMPUHAN SEPARUH TUBUH\n";
        cout << "L=RIWAYAT PAPARAN ROKOK PULUHAN TAHUN\n";
        cout << "M=SESAK NAPAS HILANG TIMBUL\n";
        cout << "N=LOKASI DI SELURUH TUBUH\n";
        cout << "O=TIDAK MUNTAH SEMPROTAN\n";
        cout << "P=RIWAYAT HIPERTENSI\n";
        cout << "Q=TIDAK MENGALAMI PENURUNAN KESADARAN\n";
        cout << "Z=TIDAK ADA\n";
        cout << "===================================================" << endl << endl << endl;

        /*
        kode penyakit :
        AFBGZ
        BGKOQ
        CHLZZ
        DIMZZ
        EJNZZ
        */
        /*
        Jika tidak terdeteksi kemungkinan tidak terdaftar pada gejala atau urutan kode salah atau lainnya
        */
        /*
        jika gejala tidak ada tekan saja "z"
        */



        do{
                cout << "Masukkan gejala sesuai kode yang telah disediakan\n";
                cout << "Ada 5 gejala untuk menyimpulkan penyakit\n";
                cout << "Khusus untuk program ini tentunya, jadi jika tidak ada silahkan ketik Z. " << endl;
                cout << "!PASTIKAN MASUKKAN KODE DENGAN HURUF KAPITAL!" << endl;
                cout << endl << endl << endl;
                cout << "Masukkan gejala pertama :";
                cin >> gejala1;

                switch (toupper(gejala1))
                {
                case 'A' :
                    {
                        cout << "Masukkan gejala kedua : ";
                        cin >> gejala2;
                        switch (toupper(gejala2))
                        {
                            case 'F' :
                                {
                                    cout << "Masukkan gejala ketiga : ";
                                    cin >> gejala3;
                                    switch (toupper(gejala3))
                                    {
                                        case 'B' :
                                        {
                                            cout << "Masukkan gejala keempat : ";
                                            cin >> gejala4;
                                            switch (toupper(gejala4))
                                            {
                                                case 'G' :
                                                    {
                                                        cout << "Masukkan gejala kelima : ";
                                                        cin >> gejala5;
                                                        switch (toupper(gejala5))
                                                        {
                                                            case 'Z' :
                                                                {
                                                                    cout << "Anda terkena penyakit Stroke Hemorragi\n";
                                                                    cout << "Obat-nya adalah Antihipertensi(ex:Propanolol)\n";
                                                                    break;
                                                                }
                                                            default  :
                                                                {
                                                                    cout << "Maaf ada kesalahan\n";
                                                                    break;
                                                                }
                                                        }
                                                        break;
                                                    }
                                                default  :
                                                    {
                                                        cout << "Maaf ada kesalahan\n";
                                                        break;
                                                    }
                                            }

                                            break;
                                        }
                                    default  :
                                        {
                                            cout << "Maaf ada kesalahan\n";
                                            break;
                                        }
                                    }
                                    break;
                                }

                            default  :
                                {
                                    cout << "Maaf ada kesalahan\n";
                                    break;
                                }
                        }
                        break;
                    }
                case 'B' :
                    {
                        cout << "Masukkan gejala kedua : ";
                        cin >> gejala2;
                        switch (toupper(gejala2))
                        {
                            case 'G' :
                                {
                                    cout << "Masukkan gejala ketiga : ";
                                    cin >> gejala3;
                                    switch (toupper(gejala3))
                                    {
                                        case 'K' :
                                        {
                                            cout << "Masukkan gejala keempat : ";
                                            cin >> gejala4;
                                            switch (toupper(gejala4))
                                            {
                                                case 'O' :
                                                    {
                                                        cout << "Masukkan gejala kelima : ";
                                                        cin >> gejala5;
                                                        switch (toupper(gejala5))
                                                        {
                                                            case 'Q' :
                                                                {
                                                                    cout << "Anda terkena penyakit Stroke Iskemik\n";
                                                                    cout << "Obat-nya adalah Antiplatelet(ex:Warfarin)\n";
                                                                    break;
                                                                }
                                                            default  :
                                                                {
                                                                    cout << "Maaf ada kesalahan\n";
                                                                    break;
                                                                }
                                                        }
                                                        break;
                                                    }
                                                default  :
                                                    {
                                                        cout << "Maaf ada kesalahan\n";
                                                        break;
                                                    }
                                            }

                                            break;
                                        }
                                    default  :
                                        {
                                            cout << "Maaf ada kesalahan\n";
                                            break;
                                        }
                                    }
                                    break;
                                }

                            default  :
                                {
                                    cout << "Maaf ada kesalahan\n";
                                    break;
                                }
                        }
                        break;
                    }
                case 'C' :
                    {
                        cout << "Masukkan gejala kedua : ";
                        cin >> gejala2;
                        switch (toupper(gejala2))
                        {
                            case 'H' :
                                {
                                    cout << "Masukkan gejala ketiga : ";
                                    cin >> gejala3;
                                    switch (toupper(gejala3))
                                    {
                                        case 'L' :
                                        {
                                            cout << "Masukkan gejala keempat : ";
                                            cin >> gejala4;
                                            switch (toupper(gejala4))
                                            {
                                                case 'Z' :
                                                    {
                                                        cout << "Masukkan gejala kelima : ";
                                                        cin >> gejala5;
                                                        switch (toupper(gejala5))
                                                        {
                                                            case 'Z' :
                                                                {
                                                                    cout << "Anda terkena penyakit PPOK(Penyakit Paru Obstruktif)\n";
                                                                    cout << "Obat-nya adalah Inhaled Corticosteroid Dosis Disesuaikan\n";
                                                                    break;
                                                                }
                                                            default  :
                                                                {
                                                                    cout << "Maaf ada kesalahan\n";
                                                                    break;
                                                                }
                                                        }
                                                        break;
                                                    }
                                                default  :
                                                    {
                                                        cout << "Maaf ada kesalahan\n";
                                                        break;
                                                    }
                                            }

                                            break;
                                        }
                                    default  :
                                        {
                                            cout << "Maaf ada kesalahan\n";
                                            break;
                                        }
                                    }
                                    break;
                                }

                            default  :
                                {
                                    cout << "Maaf ada kesalahan\n";
                                    break;
                                }
                        }
                        break;
                    }
                case 'D' :
                    {
                        cout << "Masukkan gejala kedua : ";
                        cin >> gejala2;
                        switch (toupper(gejala2))
                        {
                            case 'I' :
                                {
                                    cout << "Masukkan gejala ketiga : ";
                                    cin >> gejala3;
                                    switch (toupper(gejala3))
                                    {
                                        case 'M' :
                                        {
                                            cout << "Masukkan gejala keempat : ";
                                            cin >> gejala4;
                                            switch (toupper(gejala4))
                                            {
                                                case 'Z' :
                                                    {
                                                        cout << "Masukkan gejala kelima : ";
                                                        cin >> gejala5;
                                                        switch (toupper(gejala5))
                                                        {
                                                            case 'Z' :
                                                                {
                                                                    cout << "Anda terkena penyakit Asthma\n";
                                                                    cout << "Obat-nya adalah Salbutanol\n";
                                                                    break;
                                                                }
                                                            default  :
                                                                {
                                                                    cout << "Maaf ada kesalahan\n";
                                                                    break;
                                                                }
                                                        }
                                                        break;
                                                    }
                                                default  :
                                                    {
                                                        cout << "Maaf ada kesalahan\n";
                                                        break;
                                                    }
                                            }

                                            break;
                                        }
                                    default  :
                                        {
                                            cout << "Maaf ada kesalahan\n";
                                            break;
                                        }
                                    }
                                    break;
                                }

                            default  :
                                {
                                    cout << "Maaf ada kesalahan\n";
                                    break;
                                }
                        }
                        break;
                    }
                case 'E' :
                    {
                        cout << "Masukkan gejala kedua : ";
                        cin >> gejala2;
                        switch (toupper(gejala2))
                        {
                            case 'J' :
                                {
                                    cout << "Masukkan gejala ketiga : ";
                                    cin >> gejala3;
                                    switch (toupper(gejala3))
                                    {
                                        case 'N' :
                                        {
                                            cout << "Masukkan gejala keempat : ";
                                            cin >> gejala4;
                                            switch (toupper(gejala4))
                                            {
                                                case 'Z' :
                                                    {
                                                        cout << "Masukkan gejala kelima : ";
                                                        cin >> gejala5;
                                                        switch (toupper(gejala5))
                                                        {
                                                            case 'Z' :
                                                                {
                                                                    cout << "Anda terkena penyakit Varicella\n";
                                                                    cout << "Obat-nya adalah Antivirus(ex:Asiklovir)\n";
                                                                    break;
                                                                }
                                                            default  :
                                                                {
                                                                    cout << "Maaf ada kesalahan\n";
                                                                    break;
                                                                }
                                                     }
                                                    break;
                                                    }
                                                default  :
                                                    {
                                                        cout << "Maaf ada kesalahan\n";
                                                        break;
                                                    }
                                            }

                                            break;
                                        }
                                    default  :
                                        {
                                            cout << "Maaf ada kesalahan\n";
                                            break;
                                        }
                                    }
                                    break;
                                }

                            default  :
                                {
                                    cout << "Maaf ada kesalahan\n";
                                    break;
                                }
                        }
                        break;
                    }
                default  :
                    {
                        cout << "Maaf ada kesalahan\n";
                        break;
                    }



                }

            cout << "Wanna try again?\n";
            cout << "You can choice Y or N" << endl;
            cout << "So, your answer is : "; cin >> choice;


        }while (choice=='Y' || choice=='y');

            cout << "Terimakasih telah mencoba" << endl;




        return 0;
    }
