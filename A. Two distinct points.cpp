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
    ll q;cin>>q;
    while(q--) {
        ll l1,l2,r1,r2;
        cin>>l1>>r1>>l2>>r2;
        if(l2>l1 && l2<r1) cout<<l2-1<<" "<<l2<<el;
        else if(r2>l1 && r2<r1) cout<<r2+1<<" "<<r2<<el;
        else if(l1>l2 && l1<r2) cout<<l1<<" "<<l1-1<<el;
        else if(r1>l1 && r1<r2) cout<<r1<<" "<<r1+1<<el;
        else if(l1==l2 && r1==r2) cout<<r1<<" "<<r1-1<<el;
    }

    return 0;
}
