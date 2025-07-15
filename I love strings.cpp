#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        string r="";
        if(s.size()>=t.size()){
        for(int i=0;i<t.size();i++){
            r+=s[i];
            r+=t[i];
        }
        for(int i=t.size();i<s.size();i++)
            r+=s[i];
        }
        //2nd phase
        if(t.size()>s.size()){
        for(int i=0;i<s.size();i++){
            r+=s[i];
            r+=t[i];
        }
        for(int i=s.size();i<t.size();i++)
            r+=t[i];
        }

        cout<<r<<endl;

    }
}
