#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,a[50];
    cin>>n;
    while(n--)
    {
        cin>>l;
        int i,j,count=0,tmp;
        for(i=0;i<l;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<l;i++)
        {
            for(j=l-1;j>i;j--)
            {
                if(a[j]<a[j-1])
                {
                    tmp=a[j];
                    a[j]=a[j-1];
                    a[j-1]=tmp;
                    count++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<count<<"swaps."<<endl;
    }
}
