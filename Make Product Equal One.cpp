#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a;
    cin>>a;
    ll arr[a];
    ll neg=0;
    ll zero=0;
    for(int i=0;i<a;i++){
        cin>>arr[i];
        if(arr[i]<0){
            neg++;
        }
        if(arr[i]==0)zero++;
    }
    ll cnt=0;
     sort(arr,arr+a);
    if(neg%2==0){
        for(int i=0;i<a;i++){
            if(arr[i]<0)cnt+=abs(arr[i]+1);
            else cnt+=abs(arr[i]-1);
        }
        cout<<cnt<<endl;
    }
   else{
         cnt+=abs(arr[0]-1);
         for(int i=1;i<a;i++){
            if(arr[i]<0)cnt+=abs(arr[i]+1);
            else cnt+=abs(arr[i]-1);
         }
         if(zero>0)
         cout<<cnt-2<<endl;
         else
            cout<<cnt<<endl;
    }

}
