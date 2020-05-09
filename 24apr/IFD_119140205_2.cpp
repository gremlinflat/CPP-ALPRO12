#include <iostream>
using namespace std;
struct kok{
	string nama;
	string nim;
	int nilai;
};
int main(){
	int N;
	cin>>N;
	kok mahasiswa[N];
	float rata=0;
	for(int i=0;i<N;i++){
		cin>>mahasiswa[i].nama;
		cin>>mahasiswa[i].nim;
		cin>>mahasiswa[i].nilai;
		rata=rata+mahasiswa[i].nilai;
	}
	rata=rata/N;
	cout<<rata<<endl;
	for(int i=0;i<N;i++){
		if(mahasiswa[i].nilai>rata){
			cout<<mahasiswa[i].nama<<" ("<<mahasiswa[i].nim<<")"<<endl;
		}
	}
	return 0;
}

