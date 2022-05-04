#include <iostream>
 
using namespace std;
 
int main()
{
    int n=0,x=0,y=0,z=0,xx=0,yy=0,zz=0;
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>x;
        xx=xx+x;
        cin>>y;
        yy=yy+y;
        cin>>z;
        zz=zz+z;
    }
    if(xx==0 && yy==0 && zz==0){
        cout<<"YES";
    }
    else{
       cout<<"NO"; 
    }
 
    return 0;
}