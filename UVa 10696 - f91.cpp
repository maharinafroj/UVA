#include<bits/stdc++.h>
typedef long long ll;
#define sesh_to return 0;
using namespace std;
#define optimise() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

  int f91(int n)
  {
    if(n>=101)
    {
      return n-10;
      }
    if(n<=100)
    {
      return f91(f91(n+11));
      } 
  }
  int main()
  {
    
  optimise();
    int n;
    while(cin>>n)
      {
cout<<"f91("<<n<<") = "<<f91(n)<<endl;
      
  /**  if(n>=101)
    { 
      cout<<n-10<<endl;
    }
    else 
    {
      cout<<"91"<<endl;
    }
        */
        }
    
  
   sesh_to
  }
