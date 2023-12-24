#include<bits/stdc++.h>
using namespace std;
long long int sum(int x){
int d,pow=1,s=0;
while(x>0){
    d=x%10;
    x/=10;
    if(d!=0){
        s+=d*pow;
        pow*=10;
    }
}
return s;
}
int main()
{
    long long int a,b,c ;
    cin>>a>>b;
    c=a+b;
    if(sum(a)+sum(b)==sum(c)){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
