/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define el '\n'
#define x first
#define y second
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, m;
    cin>>n;
    vector<ll> cnt(6);
    for(ll i=0; i<6; ++i) cnt[i] = 0;
    for(ll i=0; i<n; ++i) {
        cin>>m;
        if(m==4) {
            ++cnt[0];
        } else if(m==8) {
            cnt[1] = min(cnt[0], cnt[1]+1);
        } else if(m==15) {
            cnt[2] = min(cnt[1], cnt[2]+1);
        } else if(m==16) {
            cnt[3] = min(cnt[2], cnt[3]+1);
        } else if(m==23) {
            cnt[4] = min(cnt[3], cnt[4]+1);
        } else if(m==42) {
            cnt[5] = min(cnt[4], cnt[5]+1);
        }
    }

    cout<<n-6*cnt[5]<<el;
    return 0;
}


