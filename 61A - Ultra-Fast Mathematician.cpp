#include <iostream>
#include <string>
using namespace std;
 
int main()
{    string x,y;
     cin>>x;
     cin>>y;
     for(int i = 0 ; i < x.length() ;i++ ){
        if(x[i]+y[i]==98){
            cout<<"0";
        }
        else if(x[i]+y[i]==97){
            cout<<"1";
        }
        else if(x[i]+y[i]==97){
            cout<<"1";
        }
       else if(x[i]+y[i]==96){
            cout<<"0";
        }
     }
    return 0;
}