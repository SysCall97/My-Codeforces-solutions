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
    string inp1,inp2,inp3;
    getline(cin,inp1);
    getline(cin,inp2);
    getline(cin,inp3);
    int arr[29];

    for(int i=0; inp1[i]; ++i) arr[inp1[i]-'a']=i;

    for(int i=0; inp3[i]; ++i) {
        if(inp3[i]>='0' && inp3[i]<='9') cout<<inp3[i];
        else {
            int in=inp3[i];
            char ch;
            if(inp3[i]>='A' && inp3[i]<='Z') in=in-'A';
            else in=in-'a';
            int indx=arr[in];
            if(inp3[i]>='a' && inp3[i]<='z') ch=inp2[indx];
            else ch=inp2[indx]-'a'+'A';
            cout<<ch;
        }
    }

    cout<<el;
    return 0;
}


