#include<bits/stdc++.h>
//#include<boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;
typedef long long ll;
#define debug(x) cerr<<"-"<<#x<<":"<<x<<endl;
#define debugs(x,y) cerr<<"-"<<#x<<":"<<x<<" "<<#y<<":"<<y<<endl;
#define sesh_to return 0;
#define HA cout << "YES\n";
#define Ha cout<<"Yes\n";
#define ha cout<<"yes\n";
#define NA cout << "NO\n";
#define Na cout<<"No\n";
#define na cout<<"no\n";
#define PI 2*acos(0.0)
using namespace std;
#define optimise() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool is_prime(ll n)
{
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;

        }
    }
     return true ;
}
bool palindrome(string s)
{
    for(ll i=0,j=s.size()-1; i<j; i++,j--)
    {
        if(s[i]!=s[j])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    optimise();
    ll  n;
    ll t=1;
    while(t)
    {
    cin>>n;if(n==-1)
    {
        break;
    }
    vector<ll>v;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                v.push_back(i);
                n/=i;
            }
        }
    }
    if(n>1)
    {
        v.push_back(n);
    }
    sort(v.begin(),v.end());
    for(auto x:v)
    {
        cout<<"    "<<x<<endl;
    }
            cout<<"\n";
    }

    sesh_to
}
