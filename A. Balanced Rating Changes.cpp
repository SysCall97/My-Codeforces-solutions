/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF           0x3f3f3f3f
#define el            '\n'
#define x             first
#define y             second
#define pi            acos(-1.0)
#define pb            push_back
#define mp            make_pair
#define all(v)        v.begin(), v.end()
#define allr(v)       v.rbegin(), v.rend()
#define mem(x,y)      memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, sum=0;
    cin>>n;
    ll v[n], f[n];
    for(ll i=0; i<n; ++i) {
        cin>>v[i];
        if(v[i]%2==0) f[i]=0;
        else if(v[i]>0) f[i]=1;
        else f[i]=-1;
        v[i]/=2;
        sum+=v[i];
    }
    if(sum<0) {
        for(ll i=0; i<n; ++i) {
            if(f[i]>0) {
                v[i]+=1;
                ++sum;
                if(sum==0) break;
            }
        }
    } else if(sum>0) {
        for(ll i=0; i<n; ++i) {
            if(f[i]<0) {
                v[i]-=1;
                --sum;
                if(sum==0) break;
            }
        }
    }

    for(ll i=0; i<n; ++i) cout<<v[i]<<el;
    return 0;
}
