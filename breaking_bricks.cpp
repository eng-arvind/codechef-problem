#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int s,w1,w2,w3;
    cin>>s>>w3>>w2>>w1;
     int sum=w1+w2+w3;
     int count=0;
     if(s<sum)
     {
      if(s>=w1+w2 || s>=w2+w3)
      cout<<2<<endl;
      else
      cout<<3<<endl;
     }
     else
     cout<<1<<endl;
  }
  return 0;
}
