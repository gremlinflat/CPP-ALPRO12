#include <iostream>
#include <math.h>
using namespace std;

struct yeet{
    int x;
    int y;
    float range;
};
float ranger(int x, int y){
    return sqrt((x*x)+(y*y));
}

int main(){
    int N;
    cin>>N;
    yeet rumah[N];
    int near;
    for(int i=0;i<N;i++){
        cin>>rumah[i].x;
        cin>>rumah[i].y;
        rumah[i].range=ranger(rumah[i].x,rumah[i].y);
        if(i==0){
            near=i;
        }
        if(rumah[near].range>rumah[i].range){
            near=i;
        }
    }
    cout<<rumah[near].x<<" "<<rumah[near].y;

	return 0;
}
