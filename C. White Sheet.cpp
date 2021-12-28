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
ll x1, x2, y1, y2;
ll x3, x4, y3, y4;
ll x5, x6, y5, y6;

void input() {
    cin>>x1>>y1>>x2>>y2;
    cin>>x3>>y3>>x4>>y4;
    cin>>x5>>y5>>x6>>y6;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    input();
    if((x3<=x1 && x4>=x2)&&(y3<=y1 && y4>=y2)) {
        cout<<"NO\n";
        return 0;
    } else if((x5<=x1 && x6>=x2) && (y5<=y1 && y6>=y2)) {
        cout<<"NO\n";
        return 0;
    } else {
        if((x3<=x1 && x4>=x5 && (x6>=x2 || x4>=x2)) && (y3<=y1 &&  y5<=y1 && y4>=y2 && y6>=y2)) {
            cout<<"NO\n";
            return 0;
        } else if((x5<=x1 && x6>=x3 && (x6>=x2 || x4>=x2)) && (y3<=y1 &&  y5<=y1 && y4>=y2 && y6>=y2)) {
            cout<<"NO\n";
            return 0;
        } else if((y3<=y1 && y4>=y5 && (y6>=y2 || y4>=y2)) && (x3<=x1 &&  x5<=x1 && x4>=x2 && x6>=x2)) {
            cout<<"NO\n";
            return 0;
        } else if((y5<=y1 && y6>=y3 && (y6>=y2 || y4>=y2)) && (x3<=x1 &&  x5<=x1 && x4>=x2 && x6>=x2)) {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}
