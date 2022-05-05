#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    cin>>n;
    int h[n];
    int min=10000,minn=10000,p1,p2 ,p3,p4 ;
   
    for(int i =0 ; i< n ;i++){
        cin>>h[i];
    }
     if(n==2){cout<<"1 2";return 0;}
    for(int i = 0 ; i < n ; i++){
      int j=i+1;
        if(abs(h[i]-h[j]) < min ){
            min = abs(h[i]-h[i+1]);
            p1= i+1;
            p2= j+1;
        }
    }
    if(abs(h[0]-h[n-1])< min ){
        minn=abs(h[0]-h[n-1]);
        p1= n;
        p2= 1;
    }
    
    cout<<p1<<" "<<p2;
}