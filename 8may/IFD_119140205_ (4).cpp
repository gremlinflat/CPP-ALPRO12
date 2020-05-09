#include <iostream> 
using namespace std;
void tuker(int *a, int *b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
} 

int main() { 
    int N;
    cin>>N;

    int daftar[N];
    for(int i=0;i<N;i++){
        cin>>daftar[i];
    } 
    for(int i=0;i<N;i++){
		    for(int j=N-1;j>i;j--){
			    if(daftar[j]<daftar[j-1]){
				    tuker(&daftar[j-1],&daftar[j]);
			    }
        }
    }

    for(int i=0;i<N/2;i++){
        cout<<daftar[i]<<" ";
        cout<<daftar[N-1-i]<<" ";
    }
    if(N%2==1){
      cout<<daftar[(N/2)];
    }

  return 0; 
} 
