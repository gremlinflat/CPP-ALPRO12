#include <iostream>
using namespace std;
int old(int c, int a){
	if(c>a){
		return c;
	}else{
		return a;
	}
}

int main(){
	int N,ketua;
	float sum=0;
	cin>>N;
	int muda[N];
	for(int i=0;i<N;i++){
		cin>>muda[i];
		if(i==0){
			ketua=muda[i];
		}else{
			ketua=old(ketua, muda[i]);
		}
		sum=sum+muda[i];
	}
	cout<<ketua<<endl;
	cout<<sum/N;
	return 0;
}

