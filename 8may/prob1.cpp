#include <iostream> 
using namespace std; 
string kamus(char x) { 
    switch (x) { 
        case 'a': 
         return ".-"; 
       case 'b': 
           return "-..."; 
       case 'c': 
            return "-.-."; 
        case 'd': 
            return "-.."; 
        case 'e': 
           return "."; 
        case 'f': 
            return "..-."; 
        case 'g': 
            return "--."; 
        case 'h': 
            return "...."; 
        case 'i': 
            return ".."; 
        case 'j': 
            return ".---"; 
        case 'k': 
            return "-.-"; 
        case 'l': 
            return ".-.."; 
        case 'm': 
            return "--"; 
        case 'n': 
            return "-."; 
        case 'o': 
            return "---"; 
        case 'p': 
            return ".--."; 
        case 'q': 
            return "--.-"; 
        case 'r': 
            return ".-."; 
        case 's': 
            return "..."; 
        case 't': 
            return "-"; 
        case 'u': 
            return "..-"; 
        case 'v': 
            return "...-"; 
        case 'w': 
            return ".--"; 
        case 'x': 
            return "-..-"; 
        case 'y': 
            return "-.--"; 
        case 'z': 
            return "--.."; 
    }
    return "error"; 
} 
  
void encode(string kalimat) { 
    for (int i = 0; kalimat[i]; i++){ 
        cout << kamus(kalimat[i])<<"/";
    } 
    cout << endl; 
} 
  

int main() { 
    string kalimat;
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>kalimat;
        encode(kalimat);
    } 
  return 0; 
} 