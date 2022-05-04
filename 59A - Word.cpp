#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string word;
    cin>>word;
     int l=0 ,u=0;
   for(int i = 0 ; i <word.length() ; i++){
         if(islower(word[i])){
            l++;
        }
        else if(isupper(word[i])){
                u++;
        }
   }
   if(l>=u){
        for(int i = 0 ; i <word.length() ; i++){
            char z=tolower(word[i]);
            cout<<z;
        }
   }
   else if (u>l){
        for(int i = 0 ; i <word.length() ; i++){
            char z=toupper(word[i]);
            cout<<z;
        }
 
   }
    return 0;
}