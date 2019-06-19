#include<iostream>
using namespace std;int I[102][102]={0},N,i,j,t,x,a;
int main(){cin>>t;while(t--){cin>>N;a=0;for(i=1;i<=N;i++)for(j=1;j<=i;j++){cin>>x;I[i][j]=x+(max(I[i-1][j],I[i-1][j-1]));a=max(a,I[i][j]);}cout<<a<<endl;}return 0;}
