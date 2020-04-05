#include <bits/stdc++.h>
using namespace std;

int ans = 0;

void makeGraph(vector<int> graph[], int u, int v) {
    graph[u-1].push_back(v-1);
    graph[v-1].push_back(u-1);
}

int maxDist(vector<int> graph[], vector<int> &visited, int curr) {
    int max = -1;
    for (int i = 0; i<graph[curr].size(); i++) {
        if (visited[graph[curr][i]] >= max) {
            max = visited[graph[curr][i]];
        }
    }
    return max;
}

int dfs(int &source, vector<int> graph[], int n) {
    vector<int> visited(n, -1);
    // -1 : not visited
    // anything other than -1 distance from source
    stack<int> sta;
    int dist = 0;
    sta.push(source);
    while(sta.empty() == false) {
        int curr = sta.top();
        sta.pop();
        if (visited[curr] == -1) {
            visited[curr] = maxDist(graph, visited, curr) + 1;
            for (int i = 0; i<graph[curr].size(); i++) {
                sta.push(graph[curr][i]);
            }
        }
    }

    /* dist */
    int max = 0;
    int maxIndex;
    for (int i = 0; i<n; i++) {
        if (visited[i] >= max) {
            max = visited[i];
            maxIndex = i;
        }
    }
    source = maxIndex;
    return max;
}

int main() {
    /* input */
    int n;
    scanf("%d", &n);
    int u, v;
    vector<int> graph[n];
    for (int l= 0; l<n; l++) {
        cin >> u;
        cin >> v;
        makeGraph(graph, u, v);
    }
    
    /* dfs */
    int source = 0;
    dfs(source, graph, n);
    cout << dfs(source, graph, n) << endl;
    return 0;
}
