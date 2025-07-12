#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   for(int i=2;i<=n;i++){
        int isPrime = 1;
   for(int j=2;j<i;j++){
    if(i%j==0){
        isPrime=0;
    }
   }
   if(isPrime==1)
    cout<<i<<" is Prime"<<endl;
   else
    cout<<i<<" is not Prime"<<endl;

   }

}
