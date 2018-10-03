#include <iostream>
#include <conio.h>
using namespace std;
//mendefiniskan struktur waktu
struct {
int jam;
int menit;
int detik;
} masuk, keluar, selisih;

int main()
{
//memasukan data jam masuk
cout <<"Masuk kan waktu pertama" <<endl;
cout <<" Jam   : "; cin >>masuk.jam;
cout <<" Menit : "; cin >>masuk.menit;
cout <<" Detik : "; cin >>masuk.detik;

//membuat jarak baris
cout <<endl <<endl;

//memasukan data jam keluar
cout <<"masukan waktu ke dua" <<endl;
cout <<" Jam   : "; cin >>keluar.jam;
cout <<" Menit : "; cin >>keluar.menit;
cout <<" Detik : "; cin >>keluar.detik;

//menghitung selisih menit
if ((keluar.menit- masuk.menit) < 0) {	
selisih.menit= (60 + keluar.menit) - masuk.menit;
keluar.jam;
selisih.jam = keluar.jam - masuk.jam-1;
}
else {
	
selisih.menit = keluar.menit- masuk.menit;

selisih.jam = keluar.jam - masuk.jam;
}

//memasukan data jam keluar
cout <<"Selisih --------" <<endl;
cout <<" Jam   : " << selisih.jam <<endl;
cout <<" Menit : " << selisih.menit <<endl;
cout <<" Detik : " << selisih.detik <<endl;

getch ();
return 0;
}
