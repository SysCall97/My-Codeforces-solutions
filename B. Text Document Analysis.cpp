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
const ll MOD = 1000000007;
const int MAX = 2003;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string inp,str="";
    stack<char> stk;
    ll n,maxi=0,counter=0;
    cin>>n;
    cin.ignore();
    getline(cin,inp);
    for(ll i=0; i<n; ++i) {
        if(inp[i]=='_') {
            if(!stk.empty() && str.size()) ++counter;
            else if(maxi<str.size()) maxi=str.size();
            str="";
        } else {
            if(inp[i]=='(') {
                stk.push(inp[i]);
                if(maxi<str.size()) maxi=str.size();
                str="";
            } else if(inp[i]==')') {
                stk.pop();
                if(str.size())++counter;
                str="";
            } else str=str+inp[i];
        }
    }
    if(maxi<str.size()) maxi=str.size();
    cout<<maxi<<" "<<counter<<el;
    return 0;
}


