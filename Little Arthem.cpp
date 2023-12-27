#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int paint[n][m];
        memset(paint,0,sizeof(paint));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i+j)%2==0){
                    paint[i][j]=1;
                }
            }
        }
        if((n*m)%2==0){
            paint[0][1]=1;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(paint[i][j]==0)
                    cout<<"W";
                else
                cout<<"B";

            }
            cout<<"\n";
        }

    }
    return 0;
}
