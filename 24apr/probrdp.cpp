#include <iostream>
using namespace std;
int deret(int n){
	if(n==1){
		return 1;
	}else{
	return (n+deret(n-1));
	}
}
int pangkat(int a, int b){
	if (b==1){
		return a;
	}else if (b==0){
		return 1;
	}else{
		return a*pangkat(a,b-1);
	}
}
int main(){
	int N;
	cin>>N;
	int a[N],b[N],n[N];
	string op[N];
	int z=0;
	for(int i=0;i<N;i++){
		cin>>op[i];
		if(op[i]=="deret"){
			cin>>n[i];
		}else if(op[i]=="pangkat"){
			cin>>a[i];
			cin>>b[i];
		}
	}
	for(int i=0;i<N;i++){
		if(op[i]=="deret"){
			cout<<deret(n[i]);
		}else if(op[i]=="pangkat"){
			cout<<pangkat(a[i],b[i]);
		}
		cout<<endl;
	}
	return 0;
}

