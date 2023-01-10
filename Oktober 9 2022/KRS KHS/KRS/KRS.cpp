/*
judul   : membuat aplikasi KRS
Programer   : Azmi Jalaluddin Amron
Modify      : ke 1 pada 10/09/2022  (bulan/tanggal/tahun)
*/

#include <iostream>
using namespace std;

//kamus
    char choice;

//deskripsi
    int main()
    {
        do{
            cout << "\tTahun Ajaran 2022-2023\n";
            cout << "														\tJADWAL 1				\tJADWAL 2				\tJADWAL 3			" << endl;
            cout << "NO	KDMK			NAMA MATA KULIAH			        SKS	KLPK		STS		HARI, JAM		    RUANG		HARI, JAM			RUANG		HARI, JAM	RUANG   ABSEN   " << endl;
            cout << "1.	A11.5101	\tKALKULUS					            4	A11.4109	B	    SENIN  08.40-10.20	H.4.7		RABU   08.40-10.20	Kulino	    -			-       35%     " << endl;
            cout << "2.	A11.5101	\tDASAR PEMROGRAMAN				        4	A11.4109	B	    KAMIS  10.20-12.00	H.4.8		SENIN  08.40-10.20	D.2.H		-			-       35%     " << endl;
            cout << "3.	A11.5101	\tMATEMATIKA DISKRIT			        3	A11.4109	B	    JUMAT  09.30-12.00	H.4.2		-				    -		    -			-       35%     " << endl;
            cout << "4.	A11.5101	\tPEMROGRAMAN BERBASIS WEB		        2	A11.4109	B	    SELASA 12.30-14.10	D.3.M		-				    -		    -		    -	    35%     " << endl;
            cout << "5.	A11.5101	\tORGANISASI DAN ARSITEKTUR KOMPUTER	3	A11.4109	B	    JUMAT  09.30-12.00	H.4.3		-				    -		    -		    -	    35%     " << endl;
            cout << "6.	A11.5101	\tDASAR DASAR KOMPUTASI			        2	A11.4109	B	    KAMIS  07.00-08.40	D.2.G		-				    -		    -		    -	    35%     " << endl;
            cout << "7.	A11.5101	\tPENGANTAR TEKNOLOGI INFORMATIKA	    2	A11.4MATR	B	    -				    -		    -				    -		    -		    -	    35%     " << endl;
            cout << endl << endl << endl;
            cout << "Mau lihat KRS lagi?\n";
            cin >> choice;
        }while (choice=='Y' || choice=='y');

        return 0;
    }
