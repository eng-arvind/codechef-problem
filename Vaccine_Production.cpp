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

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll d1,v1,d2,v2,p;
    cin>>d1>>v1>>d2>>v2>>p;
    ll cnt=0;
    while(p>0)
    {
      cnt++;
      if(cnt>=d1)
      p=p-v1;
      if(cnt>=d2)
      p=p-v2;
    }
    cout<<cnt<<endl;
    return 0;
  }
