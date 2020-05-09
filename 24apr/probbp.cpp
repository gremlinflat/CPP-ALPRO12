#include <iostream>
#include <string>
using namespace std;

void reverseorder(string z, int n){
	if(n>=0){
		cout << z[n];
		n--;
		return reverseorder(z, n);
 	}else{
 	    return ;
 	}
}

int main(){
	int a, b, c;
	cin >> a;
	cin >> b;
	c = a+b;
	string z = to_string(c);
	reverseorder(z, z.length());
 
 return 0;
}
