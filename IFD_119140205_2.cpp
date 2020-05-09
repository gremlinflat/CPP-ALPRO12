#include <iostream>
using namespace std;

struct data{
	string merek;
	string tipe;
	int tahunterbit;
	string warna;
	float harga;
};
int main(){
	int N;
	cin>>N;
	
	data mobil[N];
	for(int i=0;i<N;i++){
		cin>>mobil[i].merek;
		cin>>mobil[i].tipe;
		cin>>mobil[i].tahunterbit;
		cin>>mobil[i].warna;
		cin>>mobil[i].harga;
	}
	
	for(int i=0;i<N;i++){
		cout<<"Merek mobil : "<<mobil[i].merek<<endl;
		cout<<"Tipe mobil : "<<mobil[i].tipe<<endl;
		cout<<"Tahun terbit : "<<mobil[i].tahunterbit<<endl;
		cout<<"Warna : "<<mobil[i].warna<<endl;
		cout<<"Harga :"<<mobil[i].harga<<" juta"<<endl;
		cout<<endl;
	}

	return 0;
}

