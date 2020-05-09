#include <iostream>
using namespace std;

int main(){
	int i,j;
	int M[3][4];
	int MTranspose[4][3];
	cout<<"Masukan Matriks 3x4 "<<endl;
	for(i=0;i<3;i++){
		for (j=0;j<4;j++){
			cin>>M[i][j];
		}
	}for(i=0;i<3;i++){
		for (j=0;j<4;j++){
			MTranspose[i][j]=M[j][i];
		}
	}for(i=0;i<3;i++){
		for (j=0;j<4;j++){
			cout<<MTranspose[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}

