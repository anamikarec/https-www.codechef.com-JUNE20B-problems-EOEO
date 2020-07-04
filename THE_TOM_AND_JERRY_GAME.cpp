#include<bits/stdc++.h>
using namespace std;
long long mf(long long n,long long &cnt);

int main()
{
 long long test;
 cin >> test;
 while(test--)
 {
  long long M,S,count=0;
  cin>>M;
  if(M%2==1)
  {
    cout<<abs(M/2)<<"\n";
  }
  else if(M%2==0)
  {
   mf(M,count);
   S=pow(2,count+1);
   cout<<abs(M/S)<<"\n";
  }  
 }
}

long long mf(long long m,long long &SUM)
{
 while(!(m%2==1))
 {
   m/=2;
  SUM++;
 }
 return SUM;
}