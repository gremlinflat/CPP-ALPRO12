#include <iostream>
using namespace std;
float average(float ysum, int n){
	return ysum/n;
}

float lambdax(float d, float y,float l,int m){
	float final;
	final = (d*y);
	final = final/(l*m);
	return final;
}

float ksr(int lambdatheo, float lambdaave){
	float ksr;
	ksr=lambdatheo-lambdaave;
	if(ksr>0){
		ksr=ksr/lambdatheo;
	}else{
		ksr=(ksr*-1)/lambdatheo;
	}
	ksr=ksr*100;
	return ksr;
}

int main(){
	float l,d,y[3],lambda[3];
	int n,m;
	float ysum, lambdasum;
	while(true){
		cout<<"------Intializing--------"<<endl;
		cout<<"L = ";cin>>l;	
		cout<<"n = ";cin>>n;
		cout<<"       Begin"<<endl;
			for(int i=0;i<2;i++){
				cout<<"m =" ;cin>>m;
				cout<<"d =" ;cin>>d;
				ysum=0;
				lambdasum=0;
					for(int j=0;j<3;j++){
						cout<<"y"<<j<<" = ";cin>>y[j];
						ysum += y[j];
						lambda[j]=lambdax(d, y[j], l, m);
						lambdasum += lambda[j];
					}
					cout<<"Y average = "<< average(ysum, 3)<<endl;;
					cout<<"lambda1 = "<< lambda[0]<<endl;
					cout<<"lambda2 = "<< lambda[1]<<endl;
					cout<<"lambda3 = "<< lambda[2]<<endl;
					cout<<"lambda average = "<<average(lambdasum, 3) <<endl;
					float salah = (0.632-average(lambdasum, 3))/0.632;
					cout<<"KSR = "<< salah*100 <<endl;
					cout<<"         End"<<endl;
			}
	cout<<"------Terminating--------"<<endl;				
	}
	return 0;
}

