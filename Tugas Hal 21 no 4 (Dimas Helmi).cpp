 #include <stdio.h>
 #include <conio.h>
 #include <iostream>
 
using namespace std;
int main()
{
    //deklarasi variabel
    double TB, BB;
    cout<<"Masukkan data TB : "; cin>>TB;
    
    //Proses perhitungan
    BB = TB - 100 - (0.1 * (TB - 100));
    
    //menampilkan hasil perhitungan
    cout<<BB<< " BB ";
    
    return 0;
}
