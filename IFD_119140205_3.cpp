#include <iostream>
using namespace std;
struct data{
	string jenis;
	string tipe;
	int ram;
	int storage;
	int kamera;
	int baterai;
};

int main(){
	data hp;
	cin>>hp.jenis;
	cin>>hp.tipe;
	cin>>hp.ram;
	cin>>hp.storage;
	cin>>hp.kamera;
	cin>>hp.baterai;

	cout<<"Handphone terbaru "<< hp.jenis <<" "<< hp.tipe <<", dengan spesifikasi Ram "<< hp.ram<<" Gb, Storage "<<hp.storage <<" Gb, kamera "<< hp.kamera<<" Mb, dan batrai "<< hp.baterai<<" Mah.";

	return 0;
}

