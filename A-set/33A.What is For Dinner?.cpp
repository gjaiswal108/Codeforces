/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 1500
#define inf 100000000
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back

using namespace std;

int a[N];
int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    int r,c;

    cin>>n>>m>>k;

    fill(a,a+N,inf);
    for(i=0;i<n;i++)
    {
        cin>>r>>c;
        a[r]=min(a[r],c);
    }

    ll ans=0;
    for(i=1;i<=m;i++)
    {
        if(a[i]!=inf)
            ans+=a[i];
       // cout<<i<<" "<<a[i]<<endl;
    }

    cout<<min(ans,(ll)k);

    return 0;
}
