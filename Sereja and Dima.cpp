#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
int s=0,d=0;
  int l=0, r= n-1;
  bool turn =true;
  while(l<=r){
    int choice;
    if(v[l]>v[r]){
        choice=v[l];
        l++;
    }
    else{
        choice=v[r];
        r--;
    }
    if(turn)
        s+=choice;
    else
        d+=choice;
    turn = !turn;

  }
   if(s>d)
    cout<<s<<' '<<d<<endl;
   else
    cout<<d<<' '<<s<<
    endl;
}
