#include<bits/stdc++.h>
//#include<boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;
typedef long long ll;
#define si 10004
#define sesh_to return 0;
#define HA cout << "YES\n";
#define Ha cout<<"Yes\n";
#define ha cout<<"yes\n";
#define NA cout << "NO\n";
#define Na cout<<"No\n";
#define na cout<<"no\n";
using namespace std;
#define optimise() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool isprime(ll n)
{
     for(ll i = 2; i*i <= n ; i++)
     {
        if(n%i == 0) return false;

     }

     return true;
}
bool palindrome(string s)
{
    for(ll i=0,j=s.size()-1;i<j;i++,j--)
    {
        if(s[i]!=s[j])
        {
            return false;
        }
    }
    return true;
}

vector<int>v[si];
bool vis[si];
void dfsvis(int n)
{
  vis[n]=true;
  for(int i=0;i<v[n].size();i++)
    {
      int x=v[n][i];
      if(vis[x]==false)
      {
        dfsvis(x);
      }
      
    }
}
int main()
{
  optimise();
 ll t,n,m,l,x,n1,n2,count=0;
  cin>>t;
  while(t--)
  
    {
      cin>>n>>m>>l;
      for(int i=0;i<n+1;++i)
        {
          vis[i]=false;
          v[i].clear();
          
        }
        for(int i=0;i<m;++i)
          {
            cin>>n1>>n2;
            v[n1].push_back(n2);
          }
      for(int i=0;i<l;i++)
        {
          cin>>x;
          dfsvis(x);
        }
    count=0;
      for(int i=0;i<n+1;i++)
        {
          if(vis[i])
          {
            ++count;
          }
          
          }
          cout<<count<<endl;
        
    }

   sesh_to
  }

