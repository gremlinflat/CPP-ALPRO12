#include <iostream>
using namespace std;

int main(){
	int nilai;
	int jumlah=0, i=0;
	float rata; 
	do{
		cin>>nilai;
		jumlah=jumlah+nilai;
		i++;
	}while(nilai!=111);
	rata = jumlah/i;
	cout<<rata
	return 0;
}

