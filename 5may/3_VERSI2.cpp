#include <iostream>
using namespace std;

char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char reversealphabet[26] = {'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r', 'q', 'p', 'o', 'n', 'm', 'l', 'k', 'j', 'i', 'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a'};

void encrypt(string message, int lenght, int key){
	int index;
	
	for(int i=0;i<lenght;i++){
		
		//linear searching algo
		for(int j=0;j<26;j++){
			if(message[i]==alphabet[j]){
				index=j;
				break;
			}else{
				index=999;
			}		
		}
		//cetak encrypted
		if(index==999){
			cout<<" ";
		}else{
			index=index+key;
			if(index>=26){
				index=index-26;
			}
			cout<<alphabet[index];	
		}
	}
}
void decrypt(string message, int lenght, int key){
	int index;
	for(int i=0;i<lenght;i++){
		
		//linear searching algo
		for(int j=0;j<26;j++){
			if(message[i]==alphabet[j]){
				index=j;
				break;
			}else{
				index=999;
			}		
		}
		//cetak encrypted
		if(index==999){
			cout<<" ";
		}else{
			index=index-key;
			index=index+1;
			if(index<0){
				index=index*-1;
			}
			cout<<reversealphabet[index];	
		}
	}
}


int main(){
	string mode;
	cin>>mode;
   	
   	int key;
   	cin>>key;
    cin.ignore(100,'\n');
    key=key%26;
	
	char message[100];
     cin.getline (message,100);

     
//counting algo
	int lenght = 0; 
    while (message[lenght]) lenght++; 


	if(mode == "encrypt"){
		encrypt(message, lenght, key);
	}else if(mode == "decrypt"){
		decrypt(message, lenght, key);
	}else{
		cout<<"wrong input";
	}
	return 0;
}

