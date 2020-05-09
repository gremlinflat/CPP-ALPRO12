#include <iostream>
#include<string>
using namespace std;
char hayyuk(int i, string z){
    char L;
    L=z[i];
    return L;
}
int main(){
	int a, b, c;
	
	cin>>a;
	cin>>b;
	c =a+b;
	if(a>0 || b>0){
		string z = to_string(c);

    	for(int i=z.size();i>=0;i--){
        	cout<<hayyuk(i, z);
    	}
	}
	return 0;
}

