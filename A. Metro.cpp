/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define el '\n'
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
bool a[1010], b[1010];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,s,i;
    bool m;
    cin>>n>>s;
    for(i=0; i<n; ++i) cin>>a[i];
    for(i=0; i<n; ++i) cin>>b[i];
    --s;
    if(a[0] && a[s]) cout<<"YES"<<el;
    else if(a[0] && b[s]) {
        for(i=s+1; i<n; ++i) if(a[i] && b[i]) {
                cout<<"YES"<<el;
                break;
            }
        if(i==n) cout<<"NO"<<el;

    } else cout<<"NO"<<el;

    return 0;
}
