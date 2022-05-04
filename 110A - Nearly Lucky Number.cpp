#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string word;
    cin>>word;
     int l=0 ,u=0;
   for(int i = 0 ; i <word.length() ; i++){
         if(word[i]=='4'||word[i]=='7'){
            l++;
        }
        else {
                u++;
        }
   }
   if(l==4 || l==7){
       cout<<"YES";
   }
   else{
    cout<<"NO";
   }
    return 0;
}