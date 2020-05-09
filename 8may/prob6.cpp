#include <iostream> 
using namespace std;
void tuker(string *a, string *b){
	string tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
} 
void tukerint(int *a, int *b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
} 
struct prob6{
    string nama;
    int harga;
};

int main() { 
    int N;
    cin>>N;
    prob6 kost[N];
    for(int i=0;i<N;i++){
    cin.ignore(100,'\n');
        getline(cin, kost[i].nama);
        cin>>kost[i].harga;
    } 
    for(int i=0;i<N;i++){
		for(int j=N-1;j>i;j--){
			if(kost[j].harga<kost[j-1].harga){
				tukerint(&kost[j-1].harga,&kost[j].harga);
				tuker(&kost[j-1].nama,&kost[j].nama);
			}
        }
    }
    for(int i=0;i<N;i++){
        cout<<kost[i].nama<<endl;
    }
    cout<<"Juki akan ngekos di "<<kost[0].nama;
  return 0; 
} 
