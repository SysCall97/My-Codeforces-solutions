/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define el '\n'
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
ll maxi=-1,mini=100100,dp[100000]={0};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll q,m,n;
    vector<ll> a;
    cin>>n;
    for(ll i=0; i<n; ++i) {
        cin>>q;
        a.pb(q);
        dp[q]+=1;
        if(maxi<q) maxi=q;
        if(mini>q) mini=q;
    }
    for(ll i=0; i<maxi; ++i) dp[i]+=dp[i-1];
    cin>>q;
    for(ll i=0; i<q; ++i) {
        cin>>m;
        if(m<mini) cout<<"0\n";
        else if(m>=maxi) cout<<n<<el;
        else cout<<dp[m]<<el;
    }

    return 0;
}

