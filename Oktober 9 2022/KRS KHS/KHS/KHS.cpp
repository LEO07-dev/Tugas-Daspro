/*
judul   : MEMBUAT APLIKASI KHS
Programer   : Azmi Jalaluddin Amron
Modify      : ke 1 pada 10/10/2022 (bulan/tanggal/tahun)
*/

#include <iostream>
using namespace std;

//kamus
    int nt1, nt2, nt3, nt4, nt5, nt6;
    int nts1, nts2, nts3, nts4, nts5, nts6;
    int nas1, nas2, nas3, nas4, nas5, nas6;
    int na1, na2, na3, na4, na5, na6;
    string k1, k2;
    char choice;
    /*
        nt= nilai tugas
		nts= nilai uts
		nas= nilai uas
		na= nilai akhir
		masing masing di atas ada 6
		k1= keterangan ke 1
		k2= keterangan ke 2
    */

//deskripsi
    int main()
    {
        do{
            cout << "KALKULUS 1" << endl;
            cout << "N.TGS	: "; cin >> nt1;
            cout << "N.UTS	: "; cin >> nts1;
            cout << "N.UAS	: "; cin >> nas1;

            cout << "DASAR PEMROGRAMAN" << endl;
            cout << "N.TGS	: "; cin >> nt2;
            cout << "N.UTS	: "; cin >> nts2;
            cout << "N.UAS	: "; cin >> nas2;

            cout << "MATEMATIKA DISKRIT" << endl;
            cout << "N.TGS	: "; cin >> nt3;
            cout << "N.UTS	: "; cin >> nts3;
            cout << "N.UAS	: "; cin >> nas3;

            cout << "PEMROGRAMAN BERBASIS WEB" << endl;
            cout << "N.TGS	: "; cin >> nt4;
            cout << "N.UTS	: "; cin >> nts4;
            cout << "N.UAS	: "; cin >> nas4;

            cout << "ORGANISASI DAN ARSITEKTUR KOMPUTER" << endl;
            cout << "N.TGS	: "; cin >> nt5;
            cout << "N.UTS	: "; cin >> nts5;
            cout << "N.UAS	: "; cin >> nas5;

            cout << "DASAR DASAR KOMPUTASI" << endl;
            cout << "N.TGS	: "; cin >> nt6;
            cout << "N.UTS	: "; cin >> nts6;
            cout << "N.UAS	: "; cin >> nas6;

            na1 = (nt1*40/100) + (nts1*30/100 + (nas1*30/100));
            na2 = (nt2*40/100) + (nts2*30/100 + (nas2*30/100));
            na3 = (nt3*40/100) + (nts3*30/100 + (nas3*30/100));
            na4 = (nt4*40/100) + (nts4*30/100 + (nas4*30/100));
            na5 = (nt5*40/100) + (nts5*30/100 + (nas5*30/100));
            na6 = (nt6*40/100) + (nts6*30/100 + (nas6*30/100));

            if ((nt1 + nts1) / 2 > 80 || (nt2 + nts2) / 2 > 80 || (nt3 + nts3) / 2 > 80 || (nt4 + nts4) / 2 > 80 || (nt5 + nts5) / 2 > 80 || (nt6 + nts6) / 2 > 80)
            {
                k1="YES";
            }
            else
            {
                k1="NO";
            }

            if ( (nt1 + nts1 + nas1 + na1) / 4 > 80 || (nt2 + nts2 + nas2 + na2) / 4 > 80 || (nt3 + nts3 + nas3 + na3) / 4 > 80 || (nt4 + nts4 + nas4 + na4) / 4 > 80 || (nt5 + nts5 + nas5 + na5) / 4 > 80 || (nt6 + nts6 + nas6 + na6) / 4 > 80 )
            {
                k2="GOOD";
            }
            else
            {
                k2="PRETTY CLOSE";
            }

            cout << " KHS \n";
            cout << "				     	           NAMA MATA\n";
            cout << "NO2	DOSEN			 KDMK		KULLIAH	    SKS	    KLPK	STS     N.TGS  N.UTS   KET      N.UAS   N.AKHIR KET" << endl;
            cout << "1	    USMAN	     A11.54101     KALKULUS 1	4(T)	A11.4109	B \t" << nt1 <<"\t"<< nts1 <<"\t"<< k1 <<"\t"<< nas1 <<"\t"<< na1 <<"\t"<< k2 << endl;
            cout << "	    SUDIBYO,\n";
            cout << "	    SSi.,M.KOM\n";
            cout << "2	    IFAN RIZQA,	 A11.54105     DASAR		4	    A11.4109	B \t" << nt2 <<"\t"<< nts2 <<"\t"<< k1 <<"\t"<< nas2 <<"\t"<< na2 <<"\t"<< k2 << endl;
            cout << "	    M.Kom				       PEMROGRAMAN  (TP)\n";
            cout << "3	    ERWIN YUDI	 A11.54302     MATEMATIKA	3(T)	A11.4109	B \t" << nt3 <<"\t"<< nts3 <<"\t"<< k1 <<"\t"<< nas3 <<"\t"<< na3 <<"\t"<< k2 << endl;
            cout << "	    HIDAYAT,			       DISKRIT\n";
            cout << "	    S.Kom,M.CS\n";
            cout << "4	    ABU SALAM,	 A11.54314     PEMROGRAMAN	3(T)	A11.4109	B \t" << nt4 <<"\t"<< nts4 <<"\t"<< k1 <<"\t"<< nas4 <<"\t"<< na4 <<"\t"<< k2 << endl;
            cout << "	    M.Kom				       BERBASIS WEB\n";
            cout << "5	    Dr.SENDI	 A11.54403     ORGANISASI	3(T)	A11.4109	B \t" << nt5 <<"\t"<< nts5 <<"\t"<< k1 <<"\t"<< nas5 <<"\t"<< na5 <<"\t"<< k2 << endl;
            cout << "	    NOVIANTO,			       DAN\n";
            cout << "	    S.Kom,M.T			       ARSITEKTUR\n";
            cout << "					               KOMPUTER\n";
            cout << "6	    CAHAYA	     AF201704      DASAR DASAR	2(P)	A11.4109	B \t" << nt6 <<"\t"<< nts6 <<"\t"<< k1 <<"\t"<< nas5 <<"\t"<< na5 <<"\t"<< k2 << endl;
            cout << "	    JATMOKO,			       KOMPUTASI\n";
            cout << "	    M.Kom\n";
            cout << "7	    ,		     U201704	   PENGANTAR	2(T)	A11.4MATR B               -		 -|-		   -|-	  -|-" << endl;
            cout << "					               TEKNOLOGI\n";
            cout << "					               INFORMASI\n";
            cout << endl;
            cout << "										   IPS=0,00	MAX.SKS=18\n\n\n";

            cout << "\t\t\tMau coba lagi?\n";
            cout << "\t\t\t"; cin >> choice;

        }while(choice=='Y' || choice=='y');

        cout << "Terima Kasih Udah Bayar SKS dan lainnya." << endl;

        return 0;
    }
