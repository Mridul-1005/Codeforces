#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
  int m=n;
  int cnt=0;
  int sum=0;
  do{
    m/=10;
    cnt++;
  }
  while(m>0);
  for(int i=n;i>0;i/=10){
    int last_digit = i%10;
    int power =1;
    for(int j=1;j<=cnt;j++){
        power*=last_digit;
    }

    sum+=power;

  }
  if(n==sum)
    cout<<"Armstrong Number"<<endl;
  else
    cout<<"Not an Armstrong number"<<endl;

}
