#include <iostream> 
using namespace std;
void tuker(string *a, string *b){
	string tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
} 

int main() { 
    int N;
    cin>>N;
    string daftar[N];
    string angka[N];
    for(int i=0;i<N;i++){
        cin>>daftar[i];
        cin>>angka[i];
    } 
    for(int i=0;i<N;i++){
		for(int j=N-1;j>i;j--){
			if(angka[j]<angka[j-1]){
				tuker(&angka[j-1],&angka[j]);
				tuker(&daftar[j-1],&daftar[j]);
			}
        }
    }
    for(int i=0;i<N;i++){
        cout<<daftar[i]<<" ";
    }
  return 0; 
} 
