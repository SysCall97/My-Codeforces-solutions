/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
using namespace std;
#define el '\n'
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<ll> vec[4];
    ll n,m;
    cin>>n;
    for(ll i=1; i<=n; ++i) {
        cin>>m;
        vec[m].push_back(i);
    }
    ll sz1=vec[1].size(),sz2=vec[2].size(),sz3=vec[3].size(),w=sz1;
    if(w>sz2) w=sz2;
    if(w>sz3) w=sz3;
    cout<<w<<el;
    while(w--) {
        cout<<vec[1][w]<<" "<<vec[2][w]<<" "<<vec[3][w]<<el;
    }

    return 0;
}


