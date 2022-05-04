#include <iostream>
#include <string>
using namespace std;
 
int main()
{
   int a,b,c,d,r=0;
   cin>>a>>b>>c>>d;
   if(a==b){r++; }
   else if(a==c){r++; }
   else if(a==d){r++; }
   if(b==c){r++; }
   else if(b==d){r++; }
   if(c==d){r++; }
 
 
    cout<<r;
    return 0;
}