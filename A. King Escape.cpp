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
    ll n,ax,ay,bx,by,cx,cy;
    cin>>n>>ax>>ay>>bx>>by>>cx>>cy;
    if(((bx<ax && cx<ax) || (bx>ax && cx>ax)) && ((by<ay && cy<ay) || (by>ay && cy>ay))) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}


