#include <iostream>
using namespace std;

int main(){
	int n=7;
	int max=0;
	int nilai;
	for(int i=0;i<7;i++){
		cin>>nilai;
		if(nilai>max){
			max=nilai;
		}
	}
	cout<<max;
	return 0;
}

