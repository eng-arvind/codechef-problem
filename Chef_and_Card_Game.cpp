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
ll sum_digit(ll p)
{
  ll sm=0;
  while(p>0)
  {
     sm+=(p%10);
    p=p/10;
  }
  return sm;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
      w(t)
      {
        ll n;
        cin>>n;
        ll chef=0,monty=0;
        for(ll i=0;i<n;i++)
        {
          ll a,b;
          cin>>a>>b;
          ll d_sum1,d_sum2;
          d_sum1=sum_digit(a);
          d_sum2=sum_digit(b);
          if(d_sum1==d_sum2)
          {
            chef++;
            monty++;
          }
          else if(d_sum1>d_sum2)
          chef++;
          else
          monty++;
        }
        if(chef>monty)
        cout<<"0"<<" "<<chef<<endl;
        else if(chef<monty)
        cout<<"1"<<" "<<monty<<endl;
        else
        cout<<"2"<<" "<<chef<<endl;
      }
    return 0;
  }
