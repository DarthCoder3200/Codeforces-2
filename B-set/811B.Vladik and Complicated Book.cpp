/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");

#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m;
    ll l,r,x;

    scanf("%I64d%I64d",&n,&m);
    ll a[n];

    for(i=0;i<n;i++)
        scanf("%I64d",&a[i]);

    bool f;
    ll sm,bg,ele,pos;

    for(i=0;i<m;i++)
    {
        scanf("%I64d%I64d%I64d",&l,&r,&x);

        ele=a[x-1];
        sm=0;
        for(j=l-1;j<r;j++)
        {
            if(a[j]<ele)
                sm++;
        }

        pos=l+sm;

        if(pos==x)
            printf("Yes\n");
        else
            printf("No\n");

    }

    return 0;
}
