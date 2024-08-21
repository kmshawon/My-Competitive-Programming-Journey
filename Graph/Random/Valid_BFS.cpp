#include <bits/stdc++.h>
using namespace std;

vector<int> position;

bool compare(int a, int b) {
    return position[a] < position[b];
}

bool isValidBFS(int n, vector<pair<int, int>>& edges, vector<int>& sequence) {
    vector<vector<int>> adj(n + 1);
    for (auto& edge : edges) {
        adj[edge.first].push_back(edge.second);
        adj[edge.second].push_back(edge.first);
    }

    position.resize(n + 1);
    for (int i = 0; i < n; ++i) {
        position[sequence[i]] = i;
    }

    for (int i = 1; i <= n; ++i) {
        sort(adj[i].begin(), adj[i].end(), compare);
    }

    queue<int> q;
    vector<bool> visited(n + 1, false);
    q.push(1);
    visited[1] = true;

    int index = 0;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        if (sequence[index++] != v) {
            return false;
        }
        for (int u : adj[v]) {
            if (!visited[u]) {
                visited[u] = true;
                q.push(u);
            }
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> edges(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        cin >> edges[i].first >> edges[i].second;
    }
    vector<int> sequence(n);
    for (int i = 0; i < n; ++i) {
        cin >> sequence[i];
    }

    if (isValidBFS(n, edges, sequence)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
