#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
int parent[110000],child[110000],index[11000];
string str[1000005];

int findParent(int u) {
    if(parent[u]==u) return u;
    parent[u]=findParent(parent[u]);
    return parent[u];
}

void Union(int u, int v) {
    int a = findParent(u);
    int b = findParent(v);
    if(a!=b) {
        parent[b] = a;
        child[a] = v;
    }
}

int main() {
    std::map<std::string,int> Map;
    int n,cnt=0;
    string u,v;
    scanf("%d",&n);
    for(int i=0; i<=2*n; ++i) parent[i] = i;
    ignore;
    while(n--) {
        cin>>u>>v;
        if(Map.find(u)==Map.end()) {
            Map[u] = ++cnt;
            str[cnt] = u;
        }
        if(Map.find(v)==Map.end()) {
            Map[v] = ++cnt;
            str[cnt] = v;
        }
        Union(Map[u],Map[v]);
    }

    int _cnt=0;
    for(int i=1; i<=cnt; ++i) if(parent[i]==i) {
        index[_cnt] = i;
        ++_cnt;
    }

    cout << _cnt <<endl;
    for(int i=0; i<_cnt; ++i) {
        cout << str[index[i]] << " " << str[child[index[i]]] << '\n';
    }

    return 0;
}
