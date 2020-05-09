#include <iostream>
using namespace std;

struct yee{
	string nama;
	string kerja;
	int umur;
	int mahar;
};

int main(){
	yee jodoh[5];
	jodoh[0].nama="Radtya Diki"; 
	jodoh[1].nama="Atta Gledek"; 
	jodoh[2].nama="Roy Ricis"; 
	jodoh[3].nama="Dilan Da Musibah";
	jodoh[0].kerja="Komika";jodoh[1].kerja="Youtuber";jodoh[2].kerja="Pengusaha";jodoh[3].kerja="Artis";
	jodoh[0].umur=35;jodoh[1].umur=25;jodoh[2].umur=23;jodoh[3].umur=21;
	jodoh[0].mahar=1000000000;jodoh[1].mahar=1546780000;jodoh[2].mahar=987130000;jodoh[3].mahar=1800000000;
	
	cin>>jodoh[4].nama;
	cin>>jodoh[4].kerja;
	cin>>jodoh[4].umur;
	cin>>jodoh[4].mahar;
	int x, y;
	cin>>x;cin>>y;
	int indexjodoh[5]={-1,-1,-1,-1,-1};
	int count=0;
	if(jodoh[4].umur>x && jodoh[4].umur<y){
		indexjodoh[count]=4;
		count++;
	}
	for(int i=0;i<4;i++){
		if(jodoh[i].umur>=x && jodoh[i].umur<y){
		indexjodoh[count]=i;
		count++;
		}
	}
	cout<<count;
	int win;
	if(count==0){
		cout<<"Selamat mencoba lagi";
	}else{
		for(int i=0;i<4;i++){
			if(i==0){
				win=indexjodoh[0];
				cout<<"yeet";
				cout<<win;
			}else if(jodoh[indexjodoh[i]].mahar>win){
				win=indexjodoh[i];
				cout<<"yoou";
				cout<<win;
			}
		}
		cout<<win;
		cout<<"Jodoh anda adalah"<<endl;
		cout<<"Nama : "<<jodoh[win].nama<<endl;
		cout<<"Pekerjaan : "<<jodoh[win].kerja<<endl;
		cout<<"Umur : "<<jodoh[win].umur<<endl;
		cout<<"Melamarmu dengan mahar : "<<jodoh[win].mahar<<endl;
	}
	

	
	return 0;
}

