#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n ,k=0,f;
    cin>>n;
    long long c[n],min =9999999999999999;
    for(int i =0; i<n ; i++){
        cin>>c[i];
        if(c[i]<min){
            min = c[i];
        }
    }
    for(int i =0; i<n ; i++){
        if(c[i]==min){
            k++;
            f=i+1;}
    }
    if(k>1){cout<<"Still Rozdil";return 0;}
    else if(k==1){cout<<f;}
}
