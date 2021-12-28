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
    vector<ll> v(4);
    for(ll i=0; i<4; ++i) cin>>v[i];
    sort(all(v));
    if((v[0]+v[1]>v[2]) || (v[1]+v[2]>v[3])) cout<<"TRIANGLE\n";
    else if((v[0]+v[1]==v[2]) || (v[1]+v[2]==v[3])) cout<<"SEGMENT\n";
    else cout<<"IMPOSSIBLE\n";
    return 0;
}

