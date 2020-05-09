#include <iostream>
#include <stdlib.h>
using namespace std;
#include < >
void maksmin(int N){
	
}
int main(){
	char ulang;
	do{
		system("cls");
		cout<<"----------- TUGAS BESAR PKS 2-----------"<<endl;
		cout<<"-------- Kalkulator Bangun Datar -------"<<endl<<endl;
			char opsi;
			cout<<"--------------------------------------"<<endl;
			cout<<"1. Persegi"<<endl;
			cout<<"2. Segitiga"<<endl;
			cout<<"3. Lingkaran"<<endl;
			cout<<"4. Belah ketupat"<<endl;
			cout<<"--------------------------------------"<<endl;
			cout<<"Pilihan (1,2,3) : ";cin>>opsi;
			
			switch(opsi){
				case '1' : 	cout<<"------- Menghitung Luas Persegi -------"<<endl;
							float persegisisi;
							cout<<"Sisi = ";cin>>persegisisi;
							cout<<"---------------------------------------"<<endl;
							cout<<"Luas = "<<persegisisi*persegisisi<<endl;
							cout<<"--------------------------------------"<<endl;
							break;
				case '2' : 	cout<<"------- Menghitung Luas Segitiga -------"<<endl;
							float segitiga[3];
							cout<<"Alas = ";cin>>segitiga[0];
							cout<<"Tinggi = ";cin>>segitiga[1];
							segitiga[2]=(segitiga[0]*segitiga[1])/2;
							cout<<"---------------------------------------"<<endl;
							cout<<"Luas = "<<segitiga[2]<<endl;
							cout<<"--------------------------------------"<<endl;
							break;
				case '3' : 	cout<<"------- Menghitung Luas Lingkaran -------"<<endl;
							float lingkaran[2];
							cout<<"Jari-jari = ";cin>>lingkaran[0];
							lingkaran[1]=3.14*lingkaran[0]*lingkaran[0];
							cout<<"---------------------------------------"<<endl;
							cout<<"Luas = "<<lingkaran[1]<<endl;
							cout<<"--------------------------------------"<<endl;
							break;
				case '4' : 	cout<<"------- Menghitung Luas Belah Ketupat -------"<<endl;
							float belket[3];
							cout<<"Diagonal 1 = ";cin>>belket[0];
							cout<<"Diagonal 2 = ";cin>>belket[1];
							belket[2]=(belket[0]*belket[1])/2;
							cout<<"---------------------------------------"<<endl;
							cout<<"Luas = "<<belket[2]<<endl;
							cout<<"--------------------------------------"<<endl;
							break;
			}
			cout<<"kembali ke menu utama? ";cin>>ulang;
	}while(ulang=='Y'||ulang=='y');
	return 0;
}

