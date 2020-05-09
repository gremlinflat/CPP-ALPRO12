#include <iostream>
using namespace std;
const float pi = 3.14;
int ceil(float L){
	int a=L;
	if(a==L){
		return a;
	}else{
		return a+1;
	}
}
void Trapesium(int a, int b, int t){
	float L;
	L=a+b;
	L=(L/2)*t;
	L=ceil(L);
	cout<<L;
}
void BelahKetupat(int d1, int d2){
	float L;
	L=(d1*d2);
	L=L/2;
	L=ceil(L);
	cout<<L;
}
void Lingkaran(int r){
	float L;
	L=r*r;
	L=L*pi;
	L=ceil(L);
	cout<<L;
}
int main(){
	string bd;
	cin>>bd;
	
	if(bd=="Trapesium"){
		float a,b,t;
		cin>>a;cin>>b;cin>>t;
		Trapesium(a, b, t);
	}
	if(bd=="BelahKetupat"){
		float d1, d2;
		cin>>d1;cin>>d2;
		BelahKetupat(d1, d2);
	}
	if(bd=="Lingkaran"){
		float r;
		cin>>r;
		Lingkaran(r);
	}

	return 0;
}

