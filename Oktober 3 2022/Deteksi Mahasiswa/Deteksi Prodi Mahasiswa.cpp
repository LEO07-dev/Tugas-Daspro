//judul
/*
Membuat Program Deteksi Mahasiswa
Programe    : Azmi Jalaluddin Amron
Modify      : ke 1 pada 3 Oktober 2022
*/

#include <iostream>
using namespace std;

//kamus
    char NIM[20]; //NIM dengan array agar bisa lebih banyak karakter
    char choice; //saya mau nambahin looping jadi saya buat ini


//deskripsi
    int main()
    {
        //basa-basi dulu
        cout << "Mari kita cari tahu kalian itu Mahasiswa Udinus dari fakultas mana dan program studi apa beserta jenjang kalian.\n";
        cout << "Silahkan masukkan NIM kalian seperti contoh di bawah ini." << endl;
        cout << "Contoh input nim => A11.20xx.xxxxx atau B11.20xx.xxxxx ." << endl; //sekedar contoh penulisan NIM
        cout << endl << endl;

        //awal dari bagian yang akan dilooping
        do
        {
            cout << "Masukkan NIM anda : "; cin >> NIM;

            switch (toupper(NIM[0])) //jadi yang dibaca nanti adalah karakter pertama yang ada di NIM ku
            {
            case 'A' :
                {
                    cout << "Anda adalah mahasiswa FIK." << endl;
                    switch (toupper(NIM[1]))
                    {
                    case '1' :
                        {
                            cout << "Anda berada pada jenjang S1." << endl;
                            switch (toupper(NIM[2]))
                            {
                            case '1' :
                                {
                                    cout << "Anda mengambil prodi Teknik Informatika.\n";
                                    cout << "Jadi anda merupakan mahasiswa FIK dengan jenjang S1 dan mengambil prodi Teknik Informatika.\n";
                                    break;
                                }
                            default :
                                {

                                    break;
                                }
                            }
                            break;
                        }

                    case '2' :
                        {
                            cout << "Anda berada pada jenjang D3." << endl;
                            switch (toupper(NIM[2]))
                            {
                            case '1' :
                                {
                                    cout << "Anda mengambil prodi Manajemen Informatika.\n";
                                    cout << "Jadi anda merupakan mahasiswa FIK dengan jenjang D3 dan mengambil prodi Manajemen Informatika.\n";
                                    break;
                                }
                            default :
                                {
                                    cout << "What are you doing here?\n";
                                    break;
                                }
                            }
                            break;
                        }

                    default :
                        {
                            cout << "Anda yakin gak salah prodi?" << endl;
                            break;
                        }
                    }
                    break;
                }

            case 'B' :
                {
                    cout << "Anda adalah mahasiswa FEB." << endl;
                    switch (toupper(NIM[1]))
                    {
                    case '1' :
                        {
                            cout << "Anda berada pada jenjang S1." << endl;
                            switch (toupper(NIM[2]))
                            {
                            case '1' :
                                {
                                    cout << "Anda mengambil prodi Manajemen.\n";
                                    cout << "Jadi anda merupakan mahasiswa FEB dengan jenjang S1 dan mengambil prodi Manajemen.\n";
                                    break;
                                }

                            default :
                                {
                                    cout << "What are you doing here?\n";
                                    break;
                                }
                            }
                            break;
                        }

                    case '2' :
                        {
                            cout << "Anda berada pada jenjang D3." << endl;
                            switch (toupper(NIM[2]))
                            {
                            case '1' :
                                {
                                    cout << "Anda mengambil prodi Akutansi.\n";
                                    cout << "Jadi anda merupakan mahasiswa FEB dengan jenjang D3 dan mengambil prodi Akutasi.\n";
                                    break;
                                }

                            default :
                                {
                                    cout << "What are you doing here?\n";
                                    break;
                                }
                            }
                            break;
                        }

                    default :
                        {
                            cout << "Anda yakin gak salah prodi?" << endl;
                            break;
                        }
                    }
                    break;
                }

            default :
                {
                    cout << "Munkin anda salah jurusan.";
                    break;
                }
            }

            cout << "Mau mengecek lagi? Kalau begitu silahkan pilih y" << endl;
            cout << "Input di samping sini : "; cin >> choice;

        }while(choice=='Y' || choice=='y');

        cout << "Akhirnya anda tahu tentang kemahasiswaan anda.\n";


        return 0;
    }
