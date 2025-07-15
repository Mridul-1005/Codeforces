#include<bits/stdc++.h>
using namespace std;
int main()
{

  string s;
  cin>>s;
  int len = s.size();
  string s2="";
  for(int i=len-1;i>=0;i--){
    s2+=s[i];
  }
  if(s==s2)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;


}
