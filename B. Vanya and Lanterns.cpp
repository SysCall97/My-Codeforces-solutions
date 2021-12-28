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
const ll MOD = 1000000007;
const int MAX = 2003;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,l,p,maxi=-1;
    bool b=0;
    cin>>n>>l;
    vector<ll> point,dist;
    for(ll i=0; i<n; ++i) {
        cin>>p;
        point.pb(p);
    }
    sort(all(point));

    for(int i=1; i<n; ++i) if(point[i]-point[i-1]>maxi)
        maxi=point[i]-point[i-1];
    if(maxi%2) b=1;
    maxi/=2;
    if(point[0]!=0 && maxi<point[0]) maxi= point[0],b=0;
    if(point[n-1]!=l && maxi<l-point[n-1]) maxi= l-point[n-1],b=0;
    cout<<maxi;
    if(b) cout<<".5000000000"<<el;
    else cout<<".0000000000"<<el;


    return 0;
}

