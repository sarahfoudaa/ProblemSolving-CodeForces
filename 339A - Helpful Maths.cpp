#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string equation;
    cin>>equation;
    int one=0,two=0,three=0,p=0;
    for(int i=0;i<equation.length();i++){
        if(equation[i]=='1'){one++;}
        else if(equation[i]=='2'){two++;}
        else if(equation[i]=='3'){three++;}
        else if(equation[i]=='+'){p++;}
    }
    for(int i=0;i<one;i++){
            if(i==one-1 && two==0 && three==0){
                 cout<<1;
                return 0;
            }
        cout<<1<<"+";
    }
    for(int i=0;i<two;i++){
            if(i==two-1 && three==0){
                 cout<<2;
                return 0;
            }
        cout<<2<<"+";
    }
    for(int i=0;i<three;i++){
            if(i==three-1){
                cout<<3;
                return 0;
            }
        cout<<3<<"+";
    }
    cout<<one<<" "<<two<<" "<<three<<" "<<p;
    return 0;
}