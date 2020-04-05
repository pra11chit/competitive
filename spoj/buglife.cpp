#include <bits/stdc++.h>
using namespace std;

void makeGraph(vector<int> graph[], int u, int v) {
    graph[u - 1].push_back(v - 1);
    graph[v - 1].push_back(u - 1);
}

void solve() {
    /* input */
    int noBugs, noInt;
    scanf("%d%d", &noBugs, &noInt);

    /* constructing graph */
    vector<int> graph[noBugs];
    // -1 : not visited
    // 0  : visited female
    // 1  : visited male
    int u, v;
    for (int i = 0; i < noInt; i++) {
        scanf("%d%d", &u, &v);
        makeGraph(graph, u, v);
    }

    /* print graph */
    //for (int i =0; i<noBugs; i++) {
    //    printf("vertex %d: ", i);
    //    for (int j =0; j<graph[i].size(); j++) {
    //        printf("%d ", graph[i][j]);
    //    }
    //    printf("\n");
    //}

    vector<int> isVisited(noBugs, -1);
    /* bfs */
    for (int a = 0; a<noBugs; a++) {
    queue<int> q;
    q.push(a);
    int marker = 0;
    while (q.empty() == false) {
        /* push vertex connected to given vertex to q */
        int curr = q.front();
        q.pop();
        if (isVisited[curr] == -1) {
            for (int i = 0; i<(graph[curr]).size(); i++) {
                q.push(graph[curr][i]);
                isVisited[curr] = marker;
                if (marker == 0) {
                    marker = 1;
                    isVisited[graph[curr][i]] = marker;
                    marker = 0;
                }
                else {
                    marker = 0;
                    isVisited[graph[curr][i]] = marker;
                    marker = 1;
                }
            }
        }
    }
    }

    /* solution */
    for (int i=0; i<noBugs; i++) {
        for (int j=0; j<graph[i].size(); j++) {
            if (isVisited[i] == isVisited[graph[i][j]]) {
                printf("Suspicious bugs found!\n");
                return;
            }
        }
    }
    
    printf("No suspicious bugs found!\n");
}

int main() {
    int t;
    scanf("%d", &t);

    int i = 1;

    while(t--) {
        printf("Scenario #%d:\n", i);
        i++;
        solve();
    }
    return 0;
}
