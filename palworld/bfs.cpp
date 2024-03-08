#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

const int MAXN = 505;
vector<int> g[MAXN]; // 图的邻接表表示
int match[MAXN];     // 存储匹配信息
bool used[MAXN];     // 标记数组，用于BFS

// 尝试对节点u进行匹配
bool bfs(int u) {
    queue<int> q;
    q.push(u);
    memset(used, 0, sizeof(used));
    used[u] = true;

    while (!q.empty()) {
      
        int v = q.front();
         q.pop();
        if(used[v])
        {
            continue;
        }
        used[v] = true;
        cout<<v<<endl;
       
        for (int i = 0; i < g[v].size(); ++i) {
            int to = g[v][i];
            if (match[to] == -1 || (!used[match[to]] && bfs(match[to]))) {
                match[to] = v;
                return true;
            }
        }
    }
    return false;
}

// 二分图的最大匹配
int bipartiteMatching(int n) {
    int result = 0;
    memset(match, -1, sizeof(match));
    for (int i = 0; i < n; ++i) {
        cout<<i<<endl;
        if (bfs(i)) {
            result++;
        }
    }
    return result;
}

int main() {
    freopen("1","r",stdin);
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        
        // 清空上一次的图
        for (int i = 0; i < MAXN; ++i) g[i].clear();

        for (int i = 0; i < n; ++i) {
            int p;
            cin >> p;
            for (int j = 0; j < p; ++j) {
                int adapt;
                cin >> adapt;
                // 连接帕鲁和任务
                g[i].push_back(n + adapt - 1);  // 为了避免冲突，对适应性进行偏移
            }
        }

        cout << (bipartiteMatching(n) == m ? "Yes" : "No") << endl;
    }

    return 0;
}