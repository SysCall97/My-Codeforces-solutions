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
    vector<ll> v(3);
    cin>>v[0]>>v[1]>>v[2];
    sort(all(v));
    ll ans = (v[0]>0) ? max(v[0]%3, max(v[1]%3, v[2]%3)):0;
    ans+=((v[0]-ans)/3)+((v[1]-ans)/3)+((v[2]-ans)/3);

    ll ans1=(v[0]/3)+(v[1]/3)+(v[2]/3);
    if(v[0]%3 && v[1]%3 && v[2]%3) ans1+=min(v[0]%3, min(v[1]%3, v[2]%3));
    cout<<max(ans, ans1)<<el;
    return 0;
}
