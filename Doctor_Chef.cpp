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
#define vi vector<ll>
#define mii map<int,int>
#define setbits(x) __builtin_popcountll(x)
#define mod 1000000007
#define ps(x,y) fixed<<setprecision(y)<<x
#define w(t) int t; cin>>t; while(t--)
#define ll long long int
using namespace std;
ll day=0;
void fun(ll num,ll *x)
{
  ll temp;
  temp=*x;
  while(temp<num)
  {
    temp=temp*2;
    day++;
  }
  day++;
  *x=2*num;
  //cout<<*x<<endl;
  return;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
      w(t)
      {
        ll n,x;
        cin>>n>>x;
        vi v;
        for(ll i=0;i<n;i++)
        {
          ll a;
          cin>>a;
          v.pb(a);
        }
      //  ll day=0;
        sort(v.begin(),v.end());
        vector<ll>::iterator itr = lower_bound(v.begin(),v.end(),x);
        ll gb=itr-v.begin();
        for(ll i=gb;i<n;i++)
        {
          if(v[i]>x)
          {
            while(v[i]>x)
            {
              x=2*x;
              day++;
            }
            day++;
          }
          else
          day++;
          x=2*v[i];
        }
        ll tt=gb+day;
        if(gb!=0)
        {
          day=0;
          gb--;
          for(ll i=gb;i<n;i++)
          {
            if(v[i]>x)
            {
              while(v[i]>x)
              {
                x=2*x;
                day++;
              }
              day++;
            }
            else
            day++;
            x=2*v[i];
          }
          cout<<min(day+gb,tt)<<endl;
        }
        else
        cout<<tt<<endl;
        day=0;
    }
    return 0;
  }
