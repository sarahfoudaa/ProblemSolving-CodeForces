Copy
#include <iostream>
 
using namespace std;
 
int main()
{
   int n,x,y,lo=0,lc=0,ro=0,rc=0,minl,minr;
   cin>>n;
   for(int i =0;i<n;i++ ){
       cin>>x;
       cin>>y;
       if(x==1){lo++;}
       else{lc++;}
       if(y==1){ro++;}
       else{rc++;}
    }
    minl=min(lo,lc);
    minr=min(ro,rc);
 
   cout<<minl+minr;
 
    return 0;
}