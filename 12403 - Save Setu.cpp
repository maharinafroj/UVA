#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    string s;
    cin>>t;int ans=0;
    while(t--)
    {
    cin>>s;
    if(s=="donate")
    {
        cin>>n;
      ans+=n;
    }
    if(s=="report")
    {
        cout<<ans<<endl;
    }

    }
    return 0;
}
