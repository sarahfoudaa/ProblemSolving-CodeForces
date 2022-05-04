#include<iostream>
using namespace std;
int main() {
    int y,z;
    cin>>y;
 
    while(1){
             y++;
    z=y;
    int yy[4];
    for(int i = 0 ; i < 4 ; i ++){
        int x = z%10;
        z=z/10;
        yy[i]=x;
    }
            if(yy[0]==yy[1]||yy[0]==yy[2]||yy[0]==yy[3] || yy[1]==yy[2]||yy[1]==yy[3]|| yy[2]==yy[3]){
 
           }
           else{
            cout<<y;
            break;
           }
    }
 
 
 
}