#include <iostream> 
using namespace std;
void tuker(string *a, string *b){
	string tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
} void tukerint(int *a, int *b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
} void tukerfloat(float *a, float *b){
	float tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
} 
struct prob3
{
    string nama;
    int nim;
    float nilai;
};

int main() { 
    int N;
    cin>>N;
    prob3 daftar[N];
    int found=-1;
    for(int i=0;i<N;i++){
        cin>>daftar[i].nama>>daftar[i].nim>>daftar[i].nilai;
    } 
    for(int i=0;i<N;i++){
		for(int j=N-1;j>i;j--){
			if(daftar[j].nilai>daftar[j-1].nilai){
				tuker(&daftar[j-1].nama,&daftar[j].nama);
				tukerint(&daftar[j-1].nim,&daftar[j].nim);
				tukerfloat(&daftar[j-1].nilai,&daftar[j].nilai);
			}
        }
    }
    int cari;
    cin>>cari;

    for(int i=0;i<N;i++){
        if(daftar[i].nim==cari){
            found=i;
            cout<<daftar[found].nama<<endl<<found+1;
            break;
        }
    }
  return 0; 
} 
