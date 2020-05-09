#include <iostream>
#include <stdlib.h>
using namespace std;
void quartile(int N){
	
}
void tuker(float *a, float *b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main(){
	char ulang, ulangdata;
	float min, max, sum=0;
	do{
		system("cls");
		cout<<"----------- TUGAS BESAR PKS 2-----------"<<endl;
		cout<<"---------Nama  : Fahri Novaldi ---------"<<endl;
		cout<<"---------NIM   : 119140205     ---------"<<endl;
		cout<<"---------Kelas : TPB 42        ---------"<<endl<<endl;
	
		cout<<"-------PENGOLAHAN DATA STATISTIKA-------"<<endl<<endl;
		int N;
		cout<<"Masukan jumlah data = ";cin>>N;
		float data[N];
		cout<<"   Masukan Data Mentah   "<<endl;
		cout<<"(dipisahkan dengan spasi)"<<endl<<endl;
		
		for(int i=0;i<N;i++){
			cin>>data[i];
			sum+=data[i];
		}
		do{
			char opsi;
			cout<<"--------------------------------------"<<endl;
			cout<<"1. Nilai Maksimum & Minimum"<<endl;
			cout<<"2. Rata-rata"<<endl;
			cout<<"3. Quartil"<<endl;
			cout<<"--------------------------------------"<<endl;
			cout<<"Pilihan (1,2,3) : ";cin>>opsi;
			
			switch(opsi){
				case '1' : for(int i=0;i<N;i++){
								if(i==0){
									min=data[i];
									max=data[i];
								}	
								if(data[i]<min){
									min=data[i];
								}
								if(data[i]>max){
									max=data[i];
								}
							}
							cout<<"------- NILAI MAKSIMUM-MINIMUM -------"<<endl;
							cout<<"Maksimum = "<<max<<endl;
							cout<<"Minimum = "<<min<<endl;
							cout<<"--------------------------------------"<<endl;
							break;
				case '2' : 	cout<<"---------- NILAI RATA-RATA -----------"<<endl;
							cout<<"Nilai rata-rata = "<<sum/N<<endl;
							cout<<"--------------------------------------"<<endl;
							break;
				case '3' :  cout<<"-------------- QUARTILE ---------------"<<endl;
							//sorting data
								for(int i=0;i<N;i++){
									for(int j=N-1;j>i;j--){
										if(data[j]<data[j-1]){
											tuker(&data[j-1],&data[j]);
										}
									}
								}
								
							//inisialisasi	
							float Q1,Q2,Q3;
							Q1=0.25*(N+1);
							int q1= Q1;
							cout<<Q1<<endl;
							Q2=0.5*(N+1);
							int q2=Q2;
							cout<<Q2<<endl;
							Q3=0.75*(N+1);
							cout<<Q3<<endl;
							int q3=Q3;
							
							if(Q1!=q1){
								Q1=(data[q1-1]+data[q1])/2;
							}else{
								Q1=data[q1-1];
							}
							if(Q2!=q2){
								Q2=(data[q2-1]+data[q2])/2;
							}else{
								Q2=data[q2-1];
							}
							if(Q3!=q3){
								Q3=(data[q3-1]+data[q3])/2;
							}else{
								Q3=data[q3-1];
							}
							cout<<"Nilai Quartil 1 = "<<Q1<<endl;
							cout<<"Nilai Quartil 2 = "<<Q2<<endl;
							cout<<"Nilai Quartil 3 = "<<Q3<<endl;
							cout<<"--------------------------------------"<<endl;
							break;
							
			}
			cout<<"Data statistik Lainnya? ";cin>>ulang;
		}while(ulang=='Y'||ulang=='y');
		cout<<"Kembali ke awal (Input data)? ";cin>>ulangdata;
	}while(ulangdata=='y'||ulangdata=='Y');
	return 0;
}