#include <iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#define ll unsigned long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
      string s;
      cin>>s;
      ll count=1;
      for(ll i=0;i<s.length();i++)
      {
        int c = s[i]-'0';
        switch(c)
        {
          case 2:count *= 3;
                 break;
          case 3:count *= 3;
                   break;
          case 4:count *= 3;
                   break;
          case 5:count *= 3;
                  break;
          case 6:count *= 3;
                  break;
          case 7:count *= 4;
                 break;
          case 8:count *= 3;
                  break;
          case 9:count *= 4;
                 break;
        }
      }
      cout<<count%1000000007<<endl;
    }
    return 0;
  }
