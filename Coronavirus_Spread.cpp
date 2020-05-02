#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include<bitset>
#include<string>
#include<sstream>
#include <algorithm>
#define pb push_back
#define s second
#define f first
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define mii map<int,int>
#define setbits(x) __builtin_popcountll(x)
#define mod 1000000007
#define ps(x,y) fixed<<setprecision(y)<<x
#define w(t) int t; cin>>t; while(t--)
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
     w(t)
     {
       ll n;
       cin>>n;
       ll a[n];
       for(ll i=0;i<n;i++)
       cin>>a[i];
       ll ps[n-1]={0};
      ll j=0;
       for(ll i=1;i<n;i++)
       {
         ps[j++]=abs(a[i]-a[i-1]);
       }
       ll c_min=INT_MAX,c_max=INT_MIN;
       ll cnt=0;
       bool flag=true;
       for(ll i=0;i<n-1;i++)
       {
         if(ps[i]<=2)
         {
         cnt++;
         c_min=min(c_min,cnt);
        }
        else
        {
        c_min=min(c_min,cnt);
        cnt=0;
        flag=false;
        }
       }
      if(flag)
      c_min=cnt;
       ll cnt1=0;
       bool flag1=true;
       for(ll i=0;i<n-1;i++)
        {
          if(ps[i]<=2)
          {
          cnt1++;
          c_max=max(c_max,cnt1);
           }
         else
         {
         c_max=max(c_max,cnt1);
         cnt1=0;
         flag1=false;
          }
        }
       if(flag1)
       c_max=cnt1;
        cout<<c_min+1<<"  "<<c_max+1<<endl;
     }
    return 0;
  }
