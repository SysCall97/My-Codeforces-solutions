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
vector<string> inp;
ll mid;

bool bsearch(string str, ll low, ll high) {
    while(low<=high) {
        mid = (low + high) / 2;
        if(inp[mid]==str) return true;
        else if(inp[mid]<str) low = mid+1;
        else high = mid-1;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, k, ans = 0;
    cin>>n>>k;
    string str;
    for(ll i=0; i<n; ++i) {
        cin>>str;
        inp.pb(str);
    }
    sort(all(inp));

    for(ll i=0; i<n-2; ++i) {
        for(ll j=i+1; j<n-1; ++j) {
            str = "";
            for(ll l=0; l<k; ++l) {
                if(inp[i][l]==inp[j][l]) str += inp[i][l];
                else {
                    if((inp[i][l]=='S' && inp[j][l]=='E') || (inp[i][l]=='E' && inp[j][l]=='S'))
                        str += 'T';
                    else if((inp[i][l]=='S' && inp[j][l]=='T') || (inp[i][l]=='T' && inp[j][l]=='S'))
                        str += 'E';
                    else str += 'S';
                }
            }
            if(bsearch(str, j, n-1)) ++ans;
        }
    }
    cout<<ans<<el;
    return 0;
}

