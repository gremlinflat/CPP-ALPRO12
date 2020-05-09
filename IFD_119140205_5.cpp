#include <iostream>
using namespace std;

struct Pasangan {
    string Nama, Pekerjaan;
    int Usia, Mahar;
};

int main () {
    Pasangan Jodoh;
	int Minimum, Maksimum;
    cin >> Jodoh.Nama;
    cin >> Jodoh.Pekerjaan;
    cin >> Jodoh.Usia;
    cin >> Jodoh.Mahar;
    cin >> Minimum;
    cin >> Maksimum;

    if(Jodoh.Usia >= Minimum && Jodoh.Usia <= Maksimum){
    	cout << "Jodoh anda adalah" << endl;
    	cout << "Nama : " << Jodoh.Nama << endl;
    	cout << "Pekerjaan : " << Jodoh.Pekerjaan << endl;
    	cout << "Umur : " << Jodoh.Usia << endl;
    	cout << "Melamarmu dengan mahar : Rp. " << Jodoh.Mahar << " ,-";
    }else {
    	cout << "Selamat mencoba lagi";
    }
}
