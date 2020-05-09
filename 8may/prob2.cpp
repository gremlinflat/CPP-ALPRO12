#include <iostream>

using namespace std;

void gedein(string &cok) {
	for (int i = 0; i < cok.length(); i++){
		if (cok[i] >= 'a' and cok[i] <= 'z'){
            cok[i] = cok[i] - 32;
        }else{
            cok[i] = cok[i];
        }	  
    }
}

    
int main() { 
    int N;
    cin>>N;
    string kalimat[N+1];
    string gede[N+1];

    for(int i=0;i<=N;i++){
        getline(cin, kalimat[i]);
        gede[i]=kalimat[i];
        gedein(gede[i]);
    }

    string keyword;
    getline(cin, keyword);
    gedein(keyword);

    int validate=0, a=0;
    for(int i=0;i<=N;i++){
        int validate=0, a=0;
        string dummy=gede[i];
        for(int j=0;j<dummy.length();j++){
            if(dummy[j]==keyword[a]){
                validate++;
                a++;
            }
        }
        if(validate==keyword.length()){
            cout<<kalimat[i]<<endl;
        }
    }
  return 0; 

}
    