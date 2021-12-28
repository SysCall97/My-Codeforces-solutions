///***************************************************************
// *    Name:  KAZI NUR  ALAM MASHRY                             *
// *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
// *           CSE (14TH BATCH)                                  *
// ***************************************************************/
//#include<bits/stdc++.h>
//#define INF 0x3f3f3f3f
//#define el '\n'
//#define x first
//#define y second
//#define pi acos(-1.0)
//#define pb push_back
//#define mp make_pair
//#define all(v) v.begin(), v.end()
//#define mem(x,y) memset(x , y , sizeof(x))
//using namespace std;
//typedef long long ll;
//typedef pair<ll, ll> PI;
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    ll q;
//    cin>>q;
//    while(q--) {
//        ll n;
//        cin>>n;
//        vector<PI> inp(n),extra(n);
//        vector<ll> ans(n,1);
//        for(ll i=0; i<n; ++i) {
//            cin>>inp[i].x>>inp[i].y;
//            extra[i].x=inp[i].x, extra[i].y=inp[i].y;
//        }
//        sort(all(inp));
//        for(ll i=1; i<n; ++i) {
//            if(((inp[i].x<=inp[i-1].x) && (inp[i].y>=inp[i-1].x)) || ((inp[i].x<=inp[i-1].y) && (inp[i].y>=inp[i-1].y))) {
//                ll indx1, indx2,cnt2=0;
//                for(ll j=0; j<n; ++j) {
//                    if(extra[j].x==inp[i].x && extra[j].y==inp[i].y) {indx1=j; ++cnt2;}
//                    if(extra[j].x==inp[i-1].x && extra[j-1].y==inp[i-1].y) {indx2=j; ++cnt2;}
//                    if(cnt2==2) brak;
//                }
//                ans[indx1]=ans[indx2]=2;
//            }
//        }
//
//        ll cnt=0;
//        for(ll i=0; i<n; ++i) if(ans[i]==1) ++cnt;
//        if(cnt==0) cout<<-1;
//        else {
//            if(cnt==n) {
//                for(ll i=n-1; i>=n/2; --i) ans[i]=2;
//            }
//            for(ll i:ans) cout<<i<<" ";
//        }
//        cout<<el;
//
//    }
//
//    return 0;
//}
//































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
        ll n;cin>>n;
        map<PI> inp(n);
        for(ll i=0; i<n; ++i) cin>>inp[i].x>inp[i].y;
        sort(all(inp));
    }

    return 0;
}
