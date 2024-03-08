#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

const int maxn = 1005;

int mch[maxn], vistime[maxn];

vector<int> e[maxn];
vector<int> s[maxn];
bool dfs(const int u, const int tag);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        for(int i=1;i<=maxn;i++)
        {
            e[i].clear();
            s[i].clear();
        }
        memset(mch,0,sizeof(mch));
        memset(vistime,0,sizeof(vistime));
        int n,m;
        cin>>n>>m;
        for(int i = 1;i<=n;i++)
        {
            int p;
            cin>>p;
            while(p--)
            {
                int x;
                cin>>x;
                s[i].push_back(x);
            }
        }
        for(int i=1;i<=m;i++)
        {
            int x;
            cin>>x;
            for(int j=1;j<=n;j++)
            {
                if(find(s[j].begin(),s[j].end(),x)!=s[j].end())
                {
                    e[i].push_back(j);
                }
            }
        }
        int ans = 0;
        for (int i = 1; i <= n; ++i) if (dfs(i, i)) {
            ++ans;
        }
        if (ans==m)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }

}

bool dfs(const int u, const int tag) 
{
    if (vistime[u] == tag) return false;
    vistime[u] = tag;
    for (auto v : e[u]) if ((mch[v] == 0) || dfs(mch[v], tag)) {
        mch[v] = u;
        return true;
    }
    return false;
}