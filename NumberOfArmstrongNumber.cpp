#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    for(int n=1;n<=x;n++){
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
    cout<<n<<" is an Armstrong Number"<<endl;


}
}
