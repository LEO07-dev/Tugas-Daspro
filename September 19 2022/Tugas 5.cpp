/*
judul
Membuat program perkenalan
Programer   :   Azmi Jalaluddin Amron
Modify      :   20 Sept 2022
*/

#include <iostream>
using namespace std;

//kamus
        string N, Asal, JK, P;
        string ff, fd, hobi;
        int U, A;

//deskripsi
    main()
    {
        cout << "Masukkan nama panjang anda                 :"; getline(cin, N);
        cout << "Masukkan nama panggilan anda               :"; getline(cin, P);
        cout << "Masukkan jenis kelamin anda (L/p)          :"; getline(cin, JK);
        cout << "Masukkan asal daerah anda                  :"; getline(cin, Asal);
        cout << "Masukkan hobi anda                         :"; getline(cin, hobi);
        cout << "Masukkan makanan favorit anda              :"; getline(cin,ff);
        cout << "Masukkan minuman favorit anda              :"; getline(cin, fd);
        cout << "Masukkan umur anda                         :"; cin >> U;
        cout << "Masukkan jumlah anggota keluarga anda      :"; cin >> A;
        cout << endl << endl << endl;

        cout << "Halo everyone, I want to introduce myself, nama saya " << N << ", all of you can call me " << P << "." << endl;
        cout << "My gender is " << JK << " and my age is " << U << " years old." << endl;
        cout << "My family members are " << A << " persons." << endl;
        cout << "I'm from " << Asal << "." << endl;
        cout << "My hobby is " << hobi << "." << endl;
        cout << "My favorite food is " << ff << "." << endl;
        cout << "My favorite drink is " << fd << "." << endl;
    }
