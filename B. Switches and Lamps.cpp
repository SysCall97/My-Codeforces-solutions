#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define ignore getchar()
int main()
{
    int n,m;
    while(cin>>n>>m) {
        ignore;
        string inp[n];
        int i,j,b=0,cnt,tnt;
        vector <int> counter(m+1,0);
        for(i=0; i<n; ++i) {
            getline(cin, inp[i]);
            for(j=0; j<m; ++j)
                if(inp[i][j]=='1') counter[j]+=1;
        }

        for(i=0; i<n && !b; ++i) {
            cnt=tnt=0;
            for(j=0; j<m; ++j)
                if(inp[i][j]=='1') {
                    ++tnt;
                    if(counter[j]>1)
                        ++cnt;
                }
            if(cnt==tnt) b=1;
        }
        if(b) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
