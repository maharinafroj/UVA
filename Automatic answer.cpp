#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,k;
    cin>>t;
    while(t--)
    {
    cin>>n;
    int ans=((((((n*567)/9)+7492)*235)/47)-498);
     ans=ans/10;
    ans=ans%10;


    //ans=ans/10;
    cout<<abs(ans)<<endl;
    }
    return 0;
}
