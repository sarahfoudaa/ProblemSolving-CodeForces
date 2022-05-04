#include <iostream>
#include <cmath>
#include <numeric>
using namespace std;
int main(){
    int n=10,m=0,last=0,maxx=0,index=0;
    cin>>n;
    cin>>m;
    double ch[100];
    ch[n];
    for(int i =0; i<n ;i++){
        cin>>ch[i];
        ch[i]=ceil(ch[i]/m);
       // cout<<ch[i]<<" ";
        if(ch[i]>=maxx){
            maxx=ch[i];
            last=i+1;
        }
    }
    cout<<last;
}