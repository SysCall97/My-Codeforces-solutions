#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
#define pb push_back
int parent[110],cnt=0;

int findParent(int u)
{
    if(parent[u]==u) return u;
    parent[u]=findParent(parent[u]);
    return parent[u];
}

void Union(int u, int v)
{
    int a = findParent(u);
    int b = findParent(v);
    if(a!=b) {
        parent[a>b?a:b] = a>b?b:a;
    }
}

int main()
{
    vector<int> languageNumber[110];
    for(int i=0; i<110; ++i) parent[i] = i;
    int n,m,k,l,counter=0;
    scanf("%d%d",&n,&m);
    int ans = 0;
    for(int i=1; i<=n; ++i) {
        scanf("%d",&k);
        if(k==0) ++counter;
        for(int j=0; j<k; ++j) {
            scanf("%d",&l);
            languageNumber[l].pb(i);
        }
    }
    if(counter==n) printf("%d\n",n);
    else {
        for(int i=1; i<=m; ++i) {
            for(int j=1; j<languageNumber[i].size(); ++j) {
                int u=languageNumber[i][j-1];
                int v=languageNumber[i][j];
                Union(u,v);
            }
        }
        for(int i=1; i<=n; ++i) {
            if(parent[i]==i)
                ++cnt;
        }
        printf("%d\n",cnt-1);
    }

    return 0;
}

