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
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    string num;
    cin>>n>>num;
    ll sum1=0,sum2;
    for(ll i=0; i<n; ++i) {
        sum1+=(num[i]-'0');
        ll pos=i+1;
        bool ok=1;
        while(pos<n) {
            sum2=0;
            while(pos<n && sum2<sum1) sum2+=(num[pos++]-'0');
            if(sum1!=sum2) ok=0;
        }
        if(sum1!=sum2) ok=0;
        if(ok) {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}

