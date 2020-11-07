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
#define ll long long int
using namespace std;
bool Left(vector<char> &v,ll end,ll k,unordered_set<ll> &st)
{

  ll dot=0,j=end+1;
  while(end>=0)
  {
      // cout<<"Left called";
    if(v[end]==':')
    dot++;
     else if(v[end]=='X')
     return false;
     else if(v[end]=='I')
    {
      ll p=k+1-llabs(j-end)-dot;
      if(st.find(end)==st.end() && p>0)
      {
        st.insert(end);
        // cout<<"Index:"<<j<<endl;
        return true;
      }
    }
    end--;
  }
  return false;
}
bool Right(vector<char> &v,ll start,ll end,ll k,unordered_set<ll> &st)
{

  ll dot=0,j=start-1;
  while(start<=end)
  {
    // cout<<"Right called";
    if(v[start]==':')
    dot++;
  else if(v[start]=='X')
    return false;
    else if(v[start]=='I')
    {
      ll p=k+1-llabs(start-j)-dot;
      if(st.find(start)==st.end() && p>0)
      {
        st.insert(start);
        // cout<<"index:"<<j<<endl;
        return true;
      }
    }
    start++;
  }
  return false;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
      ll n,k;
      cin>>n>>k;
      vector<char> v(n);
      for(ll i=0;i<n;i++) cin>>v[i];
      unordered_set<ll> st;
      st.insert(1000000007);
        ll cnt=0;
      for(ll i=0;i<n;i++)
      {
        if(v[i]=='M')
        {
          bool lft=Left(v,i-1,k,st);
          if(lft)
          {
          // cout<<"Left";
          cnt++;
          }
          else
          {
            bool rgt=Right(v,i+1,n-1,k,st);
            if(rgt)
            {
            // cout<<"Right";
            cnt++;
          }
          }
        }
      }
      cout<<cnt<<endl;
    }
    return 0;
  }
