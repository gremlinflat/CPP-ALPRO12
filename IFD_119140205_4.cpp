#include<iostream>
using namespace std;

int modul(int a, int b, int c, int d){
	for(int i=1; i<10000000000; i++){
		if(i%a == b && i%c == d){
			return i;
		}
	}
}

int main (){
	int Xn, X, Yn, Y, total, harga=12000;
	
	cin >> Xn;
	cin >> X;
	cin >> Yn;
	cin >> Y;
	
	total=modul(Xn,X,Yn,Y);
	
	cout << total << endl;
	cout << total*harga*2;
	
return 0;
}
