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

ll func(vector<ll>& v) {
    if(v.size()==0) return INF;
    sort(all(v));
    if(v.size()==1) return 2;
    else if(v.size()==2) {
        if(v[0]==v[1] || v[1]-v[0]==1 || v[1]-v[0]==2) return 1;
        else return 2;
    } else if(v.size()==3) {
        if(v[0]==v[1] && v[1]==v[2]) return 0;
        else if(v[2]-v[1]==1 && v[1]-v[0]==1) return 0;
        else {
            if(v[0]==v[1] || v[1]==v[2]) return 1;
            else if(v[2]-v[1]==1 || v[1]-v[0]==1 || v[2]-v[1]==2 || v[1]-v[0]==2) return 1;
            else return 2;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string x[3];
    vector<ll> m, p, s;

    cin>>x[0]>>x[1]>>x[2];
    for(ll i=0; i<3; ++i){
        if(x[i][1]=='m') m.pb(x[i][0]-'0');
        if(x[i][1]=='p') p.pb(x[i][0]-'0');
        if(x[i][1]=='s') s.pb(x[i][0]-'0');
    }

    cout<<min(func(m), min(func(p), func(s)))<<el;

    return 0;
}


