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
    int N,i,a;
    while(1)
    {
        cin>>N;
        if(!N)
            break;
        vector<int>v;
        v.resize(N);
        for(i=0; i<N; i++)
        {
            // cin>>a;
            // v.push_back(a);
            cin>>v[i];
        }
        ll sum=0,ans=0;
        for(i=0; i<N; ++i)
        {
            sum+=v[i];
            ans=max(ans,sum);
//debugs(ans,sum);
            if(sum<0)
            {
                sum=0;
            }
        }
        if(ans)
        {
            cout<<"The maximum winning streak is "<<ans<<".\n";
        }
        else
        {
            cout<<"Losing streak.\n";
        }
    }

    sesh_to
}


