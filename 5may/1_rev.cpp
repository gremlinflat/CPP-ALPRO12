#include <iostream>
using namespace std;
void swap(int *a, int *b){
    int *temp;
    *temp = *a;
    *a = *b;
    *b = *temp;
}
int main(){
    int N;
    cin>>N;
    int a[N];
    int b[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    for(int i=0;i<N;i++){
        cin>>b[i];
    }
    int swapping;
    cin>>swapping;
    char p,q;
    int x,y;
    for(int j=0;j<swapping;j++){
        cin>>p;cin>>x;cin>>q;cin>>y;
        if(p=='A'&& q=='B'){
            swap(a[x-1],b[y-1]);
        }if(p=='A'&&q=='A'){
            swap(a[x-1],a[y-1]);
        }if(p=='B'&&q=='B'){
            swap(b[x-1],b[y-1]);
        }if(p=='B'&& q=='A'){
            swap(b[x-1],a[y-1]);
		}
    }
    for(int i=0;i<N;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<N;i++){
        cout<<b[i]<<" ";
    }
	return 0;
}
