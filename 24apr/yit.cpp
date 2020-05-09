#include <iostream>

using namespace std;

void balik(int a, int n){
 if(a>0){
  n = (n*10)+(a%10);
  a = a/10;
  cout << n;
  return balik(a, 0);
 }
}

int main(){
 int a, b, c;
 
 cin >> a;
 cin >> b;
 
 c = a+b;
 
 balik(c, 0);
 
 return 0;
}
