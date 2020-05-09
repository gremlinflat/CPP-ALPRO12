#include <iostream>
using namespace std;
string message;
string rahasia;

void encrypt(string message, int lenght, int key){
	int encrypted[lenght];
    int o=0;
	for(int i=0;i<lenght;i++){
		if(int(message[i])==32){
			encrypted[o]=32;
            o++;
		}else{
			encrypted[o]=int(message[i])+key;
			if(encrypted[o]>=122){
				encrypted[o]-=26;
			}
			o++;	
		}
		rahasia+=char(encrypted[i]);
	}	
}
void decrypt(string message, int lenght, int key){
	int encrypted[lenght];
    int o=0;
	for(int i=0;i<lenght;i++){
		if(int(message[i])==32){
			encrypted[o]=32;
            o++;
		}else{
			encrypted[o]=int(message[i])-key;
			if(encrypted[o]<97){
				encrypted[o]+=26;
			}
			o++;	
		}
		rahasia+=char(encrypted[i]);
	}	
}
int main(){
	string mode;
	cin>>mode;
   	
   	int key;
   	cin>>key;
    cin.ignore(100,'\n');
    key=key%26;

    getline (cin, message);

	if(mode == "encrypt"){
		encrypt(message, message.length(), key);
	}else if(mode == "decrypt"){
		decrypt(message, message.length(), key);
	}else{
		cout<<"wrong input";
	}
	string *lokasi;
	lokasi = &rahasia;
	cout<<*lokasi;
	return 0;
}

