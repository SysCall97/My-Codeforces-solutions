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
string inp1, inp2;

string func(string& ans, vector<ll>& v, ll pos, ll sz, ll n) {
    if(pos==n) return ans;
    if(pos>1) {
        string curr=ans[pos-1]+ans[pos-2];
        if(curr==inp1 || curr==inp2) return ans;
    }
    string a;
    if(a.size()!=n && v[0]<n) {
        a=(ans+"a", v, pos+1, sz, n);
        ++v[0];
    }
    if(a.size()!=n && v[1]<n) {
        a.pop_back();
        --v[0], ++v[1];
        a=(ans+"b", v, pos+1, sz, n);
    }
    if(a.size()!=n && v[2]<n) {
        a.pop_back();
        --v[1], ++v[2];
        a=(ans+"c", v, pos+1, sz, n);
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, mp[3]= {0}, m=1;
    vector<ll> v(3, 0);
    v[0]=1;
    string ans="a";
    cin>>n>>inp1>>inp2;
    ll sz=3*n;
    string a=func(ans, v, 1, sz, n);
    if(a.size()<sz) cout<<"NO\n";
    else cout<<"YES\n"<<a<<el;
    return 0;
}

