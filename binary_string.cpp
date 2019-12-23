#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
  int t,count;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s;
     count=0;
    for(int i=0;i<s.length()-3;i++)
    {
      string sb=s.substr(i,4);
      if(sb=="0101" || sb=="1010")
      {
        count++;
      }
    }
    cout<<count<<endl;
  }
  return 0;
}
