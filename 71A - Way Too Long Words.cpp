#include <iostream>
#include <string>
using namespace std;
 
int main()
{
  int n;
  cin>>n;
  string x,r="";
  for(int i=0;i<n;i++){
    cin>>x;
     if(x.length()>10){
            std::string s = std::to_string(x.length()-2);
   r=r+x[0]+s+x[x.length()-1]+" ";}
   else r=r+x+" ";
     }
 
for(int i=0;i<r.length();i++){
    if(r[i]==' '){
    cout<<endl;}
else{
   cout<<r[i];}
}
    return 0;
}