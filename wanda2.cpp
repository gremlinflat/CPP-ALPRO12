#include <iostream>
using namespace std;

int main(){
	int i,j;
	int M1[3][4];
	int M2[3][4];
	int hasil[3][4];
	cout<<"Masukan Matriks 1 (3x4)"<<endl;
	for(i=0;i<3;i++){
		for (j=0;j<4;j++){
			cin>>M1[i][j];
		}
	}
	cout<<"Masukan Matriks 2 (3x4)"<<endl;
	for(i=0;i<3;i++){
		for (j=0;j<4;j++){
			cin>>M2[i][j];
		}
	}
	for(i=0;i<3;i++){
		for (j=0;j<4;j++){
			hasil[i][j]=M1[i][j]+M2[i][j];
		}
	}
	cout<<"Hasil"<<endl;
	for(i=0;i<3;i++){
		for (j=0;j<4;j++){
			cout<<hasil[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}

