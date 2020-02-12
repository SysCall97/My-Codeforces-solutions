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
    ll t1, t2, m1, m2, n;
    cin>>t1>>t2>>m1>>m2>>n;
    ll ans1, ans2;
    ans1=n-(t1*(m1-1))-(t2*(m2-1));
    if(ans1<=0) ans1=0;
    if(m1>=m2) {
        ans2=n/m2;
        if(ans2>t2) ans2=t2;
        n-=(t2*m2);
        if(n>0) {
            ll g=(n/m1);
            if(g>t1) g=t1;
            ans2+=g;
        }
    } else {
        ans2=n/m1;
        if(ans2>t1) ans2=t1;
        n-=(t1*m1);
        if(n>0) {
            ll g=(n/m2);
            if(g>t2) g=t2;
            ans2+=g;
        }
    }
    cout<<ans1<<" "<<ans2<<el;
    return 0;
}

