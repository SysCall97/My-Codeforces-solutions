/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define el '\n'
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<ll> ans;
    ll n,k,i=0;
    cin>>n>>k;
    ll N=n;
    while(N) {
        if(N%2) ans.pb(pow(2,i));
        i+=1;
        N/=2;
    }
    if(ans.size()>k || n<k) cout<<"NO\n";
    else {
        ll counter2=ans.size();

        while(1) {
            cout<<counter2<<el;
            ll mx=ans[counter2-1]/2, i=1;
            ans.pop_back();
            --counter2;

            while(mx && counter2+i<=k) {
                ans.pb(mx);
                mx/=2;
                ++i;
            }

            sort(all(ans));
            counter2=ans.size();
            if(counter2>=k) break;
        }

        if(ans.size()!=k) cout<<"NO\n";
        else {
            cout<<"YES\n";
            for(ll i:ans) cout<<i<<" ";
            cout<<el;
        }
    }

    return 0;
}


