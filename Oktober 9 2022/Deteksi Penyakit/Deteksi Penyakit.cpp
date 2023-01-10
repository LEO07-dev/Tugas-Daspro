/*
judul : membuat program untuk mendeteksi penyakit
Programer   : Azmi Jalaluddin Amron
Modify      : ke 1 pada 10/9/2022 (bulan/tanggal/tahun)
*/

#include <iostream>
using namespace std;

//kamus
    char choice;
    string nama, alamat, ttl;
    int g1, g2, g3, g4, g5, g6, g7, g8, g9, g10;

//deskripsi
    int main()
    {
        cout << "\tMendeteksi Penyakit\n";
        cout << "Macam-Macam Gejala\n";
        cout << "====" << endl;
        cout << "|| 1  = Demam 38°C.\n";
        cout << "|| 2  = Batuk kering.\n";
        cout << "|| 3  = Sesak napas.\n";
        cout << "|| 4  = Nyeri tiba-tiba dan intensif pada daerah bagian atas dari abdomen (perut).\n";
        cout << "|| 5  = Nyeri tiba-tiba dan intensif pada bagian tengah dari abdomen (perut), di bawah tulang dada.\n";
        cout << "|| 6  = Nyeri punggung di antara tulang belikat.\n";
        cout << "|| 7  = Nyeri pada bahu kanan.\n";
        cout << "|| 8  = Mual dan muntah.\n";
        cout << "|| 9  = Kolik empedu.\n";
        cout << "|| 10 = Demam tinggi dan menggigil.\n";
        cout << "|| 11 = Warna kulit dan bagian putih pada mata menjadi kuning.\n";
        cout << "|| 12 = Nyeri pada bagian punggung, perut, atau area selangkangan.\n";
        cout << "|| 13 = Dysuria.\n";
        cout << "|| 14 = Haematuria.\n";
        cout << "|| 15 = Warna urine yang cenderung merah atau kecokelatan.\n";
        cout << "|| 16 = Frekuensi berkemih yang meningkat.\n";
        cout << "|| 17 = Berkemih dalam jumlah yang lebih sedikit.\n";
        cout << "|| 18 = Rasa berkemih yang tidak dapat ditahan.\n";
        cout << "|| 19 = Diare.\n";
        cout << "|| 20 = Kelelahan yang hebat.\n";
        cout << "|| 21 = Demam dan menggigil jika terjadi infeksi.\n";
        cout << "|| 22 = Suhu tubuh yang naik turun.\n";
        cout << "|| 23 = Sakit kepala.\n";
        cout << "|| 24 = Berkeringat dingin.\n";
        cout << "|| 25 = Nyeri otot.\n";
        cout << "|| 26 = Kelelahan mata.\n";
        cout << "|| 27 = Buram saat melihat jauh.\n";
        cout << "|| 28 = Sakit kepala.\n";
        cout << "|| 29 = Menyipitkan mata saat melihat jauh untuk melihat lebih jelas.\n";
        cout << "|| 30 = Sulit melihat benda-benda yang jauh dan akan lebih jelas melihat dalam posisi yang lebih dekat.\n";
        cout << "|| 31 = Ketegangan pada mata.\n";
        cout << "|| 32 = Lebih sering memicingkan mata untuk memperjelas penglihatan.\n";
        cout << "|| 33 = Penglihatan kabut saat melihat dari dekat.\n";
        cout << "|| 34 = Mata sensitif terhadap cahaya.\n";
        cout << "|| 0  = Tidak Ada.\n";
        cout << endl << endl << endl;

        cout << "Nama                   :   "; getline(cin, nama);
        cout << "Alamat                 :   "; getline(cin, alamat);
        cout << "Tempat, Tanggal Lahir  :   "; getline(cin, ttl);

        do{
            cout << "Masukkan kode gejala sesuai gejala yang anda alami!\n";
            cout << "Masukkan gejala ke 1   : "; cin >> g1;
            cout << "Masukkan gejala ke 2   : "; cin >> g2;
            cout << "Masukkan gejala ke 3   : "; cin >> g3;
            cout << "Masukkan gejala ke 4   : "; cin >> g4;
            cout << "Masukkan gejala ke 5   : "; cin >> g5;
            cout << "Masukkan gejala ke 6   : "; cin >> g6;
            cout << "Masukkan gejala ke 7   : "; cin >> g7;
            cout << "Masukkan gejala ke 8   : "; cin >> g8;
            cout << "Masukkan gejala ke 9   : "; cin >> g9;
            cout << "Masukkan gejala ke 10  : "; cin >> g10;

            if (g1==1 && g2==2 && g3==3)
            {
                cout << "Anda menderita penyakit COVID-19, PASRAH SAJA." << endl;
            }
            else if (g1==4 && g2==5 && g3==6 && g4==7 && g5==8 && g6==9 && g7==10 && g8==11)
            {
                cout << "Anda menderita Batu Empedu (Gallstone).\n";
                cout << "Solusinya adalah cholecystectomy dan ursodeoxycholic acid.\n";
            }
            else if (g1==12 && g2==13 && g3==14 && g4==15 && g5==16 && g6==17 && g7==18 && g8==8 && g9==20 && g10==21)
            {
                cout << "Anda menderita Batu Ginjal (Kidney Stone)." << endl;
                cout << "Solusi : " << endl;
                cout << "1. Batu ginjal berukuran kecil akan keluar dengan sendirinya melalui saluran urine dalam waktu 48 jam jika asupan cairan yang masuk ke dalam tubuh cukup." << endl;
                cout << "2. Jika batu ginjal yang terbentuk berukuran besar, dokter dapat merekomendasikan lithotripsy." << endl;
            }
            else if (g1==22 && g2==23 && g3==24 && g4==8 && g5==25 && g6==19)
            {
                cout << "Anda menderita Malaria." << endl;
                cout << "WHO merekomendasikan Artemisinin-based combination therapy (ACT) setidaknya selama 3 hari, yaitu : " << endl;
                cout << "1. Kombinasi artemether dan lumefantrine." << endl;
                cout << "2. Kombinasi artesunate dan amodiaquine." << endl;
                cout << "3. Kombinasi artesunate dan mefloquine." << endl;
                cout << "4. Kombinasi dihydroartemisinin dan piperaquine." << endl;
                cout << "5. Kombinasi artesunate + sulfadoxine + pyrimethamine." << endl;
            }
            else if (g1==26 && g2==27 && g3==28 && g4==29 && g5==30)
            {
                cout << "Anda menderita Rabun Jauh (Miopia).\n";
                cout << "Solusi paling umum adalah menggunakan kacamata atau lensa kontak.\n";
                cout << "Jika kamu kaya kamu bisa mencoba operasi LASIK.\n";
            }
            else if (g1==31 && g2==32 && g3==33 && g4==34)
            {
                cout << "Anda menderita Rabun Dekat (Hipermetropia).\n";
                cout << "Hipermetropia bisa dikoreksi dengan kacamata, lensa kontak, atau pembedahan.\n";
                cout << "Kacamata adalah cara termudah dan teraman untuk memperbaiki hipermetropia.\n";
                cout << "Cara lain adalah lensa kontak yang harus dikonsultasika kepada tenaga kesehatan.\n";
                cout << "Untuk pembedahan adalah bedah refraksi yang mana harus didiskusikan dengan tenaga ahli profesional untuk mata.\n\n\n\n";
            }

            cout << "Mau mencoba lagi?(Y/N)" << endl;
            cin >> choice;
        }while (choice=='Y' || choice=='y');

        cout << endl << endl;
        cout << "Makasih udah mau nyoba.\n";
        
        return 0;
    }
