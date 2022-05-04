#include <iostream>
#include <cmath>
using namespace std;
 
int main (){
    int l,w,h,x,y,z;
    cin>>l>>w>>h;
    x=sqrt((l*w)/h);
    y=sqrt((l*h)/w);
    z=sqrt((h*w)/l);
    cout<<4*(x+y+z);
}