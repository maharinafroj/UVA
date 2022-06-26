#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,a;
    long int i,l,rem;
    int s[1000];

while(scanf("%ld",&a)==1)
{
    if(a<0)
    {
    break;
    }
    n=a;
    l=0;

while(a>0)
{
rem=a%3;
l=l+1;
a=a/3;
}
//i++;
for(i=0;i<l;i++)
{
rem=n%3;
s[i]=rem;
n=n/3;

}
if(l==0)
{
   cout<<"0";
}

for(i=l-1;i>=0;i--)
 printf("%d", s[i]);
    printf("\n");
}

return 0;
}
