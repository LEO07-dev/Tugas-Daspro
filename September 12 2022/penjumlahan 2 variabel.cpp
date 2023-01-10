//Judul
//Latihan penjumlahan 2 variabel
//Programer : Azmi Jalaluddin Amron
//Modify    : 14 Sept 2022

#include <iostream>
using namespace std;

//Kamus
    int x1, x2, x3, x4, y1, y2, y3, y4, h1, h2, h3, h4, a, b; //variabel ada dua yaitu x dan y dan untuk h adalah hasil dari penjumlahan x dan y untuk angka 1234 adalah untuk menunjukkan itu adalah variabel ke berapa
                                                             //variabel a dan b untuk tambahan pada permasalahan 3
//Diskripsi
   int main ()
    {
                cout << "Latihan penjumlahan" << endl;
                cout << "Permasalahan 1" << endl;
                cout << "Budi pinjam 1 pensil dan 1 penghapus dari Nita. A few moments later," << endl;
                cout << "Budi akan mengembalikan barang yang dipinjam-nya dari si Nita." << endl;
                cout <<  "Berapa banyak barang yang harus dikembalikan oleh si Budi?" << endl;
                cout << "Jawabannya adalah = " << endl;
                x1 = 1; //x1 merupakan pensil
                y1 = 1; //y1 merupakan penghapus
                h1 = x1 + y1; //h1 adalah hasil dari penjumlahan 2 variabel
		        cout << "Budi pertama-tama meminjam " << x1 << " pensil dan " << y1 << " penghapus, maka barang" << endl;
		        cout << "yang harus dikembalikan oleh Budi adalah " << h1 << " yaitu : " << x1 << " pensil dan " << y1 << endl;
		        cout << "penghapus" << endl;

		        cout << "Permasalahan 2" << endl;
		        cout << "imas mempunyai 2 buah gantungan HP sama persis (couple), dia memberikan 1" << endl;
		        cout << "kepada pacarnya. Berapa banyak gantungan" << endl;
			    cout << "HP yang masih di miliki oleh Dimas?" << endl;
			    cout << "Mari mencari hasilnya bersama" << endl;
			    cout << "Banyaknya gantungan HP Dimas sebelumnya adalah "; cin >> x2;
			    cout << "Jumlah gantungan yang diberikan Dimas kepada pacarnya adalah "; cin >> y2;
			    h2 = x2 - y2;
 			    cout << "Maka sisa gantungan HP yang dimiliki Dimas adalah " << h2 << " buah" << endl;

 			    if (h2 == 1)
                {
                    cout << "Wah... Kamu jago ngitungnya. Aishiteru......... <3<3<3" << endl;
                }
                else
                {
                    cout << "Ayo dong! Hitung yang bener......" << endl;
                }

                cout << "Permasalahan 3" << endl;
                cout << "Raja ingin membeli 2 bungkus cilok yang dimana harga satu bungkus adalah Rp5.000,00" << endl;
		        cout << "dan membeli 1 jus mangga seharga Rp5.000,00 . Raja membawa uang Rp20.000,00 , berapa" << endl;
		        cout << "sisa uang yang dimiliki oleh Raja setelah membeli yang diinginkannya tadi?" << endl;
		        cout << "Untuk mencari tahu pertama kita cari tahu berapa total harga barang yang dibeli oleh raja" << endl;
		        cout << "Pertama cari tahu berapa banyak cilok yang dibeli oleh Raja?"; cin >> a;
		        x3 = a * 5.000;
		        cout << "Jadi total harga cilok adalah banyak bungkus cilok dikali harga per-bungkus = Rp" << x3 << ",00" << endl;
		        cout << "Kemudian berapa banyak jus mangga yang dibeli oleh Raja?"; cin >> b;
		        y3 = b * 5.000;
		        cout << "Jadi total harga jus mangga adalah = Rp" << y3 << ",00" << endl;
		        h3 = 20.000 - (x3 + y3);
		        cout << "Karena uang total Raja adalah Rp20.000,00 maka kembaliannya adalah Rp" << h3 << ".000,00" << endl;;

		        if (h3 == 5.000)
                {
                    cout << "Benar";
                }
                else
                {
                    cout << "Salah";
                }

                cout << "Permasalahan 4" << endl;
                cout << "Sophia mempunyai 4 teman wanita yang merupakan sahabat, pada pesta teh dengan keempat sahabatnya" << endl;
		        cout << "dia membawa 10 kue strawberi. Bagaiman cara Sophia membagi kue-kue tersebut agar dia dan para" << endl;
		        cout << "sahabatnya mendapatkan jumlah kue yang sama?" << endl;
		        cout << "Ayo bantu Sophia dalam membagi kue-kuenya!" << endl;
		        cout << "Berapa jumlah kue yang dibawa oleh Sophia? "; cin >> x4; cout << " kue";
		        cout << "Berapa jumlah orang yang akan menerima dan memakan kue dari Sophia termasuk Sophia sendiri? "; cin >> y4; cout << "gadis";
		        h4 = x4 / y4;
		        cout << "Maka kita bagi jumlah kue dengan jumlah orang dan hasilnya adalah = " << h4 << " per orang" << endl;

		        if (h4 == 2)
                {
                    cout << "Terimakasih telah membantu Sophia dalam membagi kue-kuenya";
                }
                else
                {
                    cout << "Tolong hitung lagi dong, Sophia gak mau kalau ada yang sampai dapat kurang";
                }

        return 0;

    }
