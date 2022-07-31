#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,a[10000];
    while(cin>>l)
    {
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
        cout<<"Minimum exchange operations"<<" : "<<count<<endl;
    }
    return 0;
}
