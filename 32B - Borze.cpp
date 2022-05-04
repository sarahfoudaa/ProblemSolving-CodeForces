#include <iostream>
 
using namespace std;
 
int main()
{
    char s[2000];
    string r="";
    cin>>s;
    for(int i = 0 ;i<200; i++ ){
        if(s[i]=='-'&&s[i+1]=='.'){
                cout<<"1";
                i++;
        }
        else if(s[i]=='-'&&s[i+1]=='-'){
           cout<<"2";
                i++;
        }
        else if(s[i]=='.'){
            cout<<"0";
        }
    }
}