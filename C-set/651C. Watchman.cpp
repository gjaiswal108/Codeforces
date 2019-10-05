/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010101
#define inf 1e18
#define mod 1000000007

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int, int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, q;
    int x, y;

    map<int, ll> X, Y;
    map<pp, ll> mp;

    sf(n);
    for(i = 0; i < n; i++)
    {
        sff(x, y);

        X[x]++;
        Y[y]++;

        mp[{x, y}]++;
    }

    ll ans = 0;

    auto itr = X.begin();
    while(itr != X.end())
    {
        ans += (itr->second * (itr->second - 1)) / 2;
        itr++;
    }

    itr = Y.begin();
    while(itr != Y.end())
    {
        ans += (itr->second * (itr->second - 1)) / 2;
        itr++;
    }

    auto itr2 = mp.begin();
    while(itr2 != mp.end())
    {
        ans -= (itr2->second * (itr2->second - 1)) / 2;
        itr2++;
    }

    pfl(ans);

    return 0;
}
