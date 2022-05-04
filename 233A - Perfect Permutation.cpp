#include <iostream>
#include <string>
using namespace std;
 
int main()
{    int p,z;
cin>>p;
if(p%2!=0){
    cout<<-1; return 0;
}
else{
    for(int i = 1 ; i<=p;i++){
        if(i%2!=0){
            z=i+1;
        }
        else{
            z=i-1;
        }
        if(z<=p){
            cout<<z<<" ";
        }
    }
}
 
    return 0;
}