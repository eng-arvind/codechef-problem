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
// ll sheet(ll a,ll b,string s)
// {
//   int sht=0;
//   for(int st=a;st<b;st++)
//         {
//             if(s[st]==':')
//                  sht++;
//         }
//         return sht;
// }
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
      ll n,k;
      cin>>n>>k;
      string s;
      cin>>s;
      ll i=0,j=0,cnt=0,dot=0;
      while(i<n && j<n)
      {
        if(s[i]=='M')
        {
          if(s[j]=='I')
          {
            dot=0;
            if (i < j)
             {
               for (int k = i; k < j; k++)
               {
                 if (s[k] == ':')
                   dot++;
               }
             }
             else if (j < i)
             {
               for (int k = j; k < i; k++)
               {
                 if (s[k] == ':')
                   dot++;
               }
             }
            ll p=k+1-abs(i-j)-dot;
            if(p>0)
            {
              cnt++;
              i++;
              j++;
            }
            else
            {
              if(i>j)
              j++;
             else
              i++;
             }
          }
          else if(s[j]=='X')
            {
              i=j;
              i++;
              j++;
              dot=0;
            }
          //   else if(s[j]==':')
          //   {
          //   dot--;
          //   j++;
          // }

          else
            j++;
          }
        else if(s[i]=='X')
        {
          j=i;
          i++;
          j++;
          dot=0;
        }
        // else if(s[i]==':')
        // {
        //   dot++;
        //   i++;
        // }
        else
        i++;
      }
      cout<<cnt<<endl;
    }
    return 0;
  }
