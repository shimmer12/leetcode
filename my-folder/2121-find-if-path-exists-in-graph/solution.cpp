class Solution {
    vector<int> leader;
    vector<int> size;
public:
    int find(int u) {
        while (u != leader[u])
            u = leader[u];
        return u;
    }
    void combine(int u, int v) {
        u = find(u);
        v = find(v);
        if (u==v)
            return;
        if (size[u]>size[v])
            swap(u, v);
        leader[u] = v;
        size[v] += size[u];
    }
    bool validPath(const int n, const vector<vector<int>>& edges, const int source, const int destination) {
        ios::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        leader = vector<int>(n);
        size = vector<int>(n, 1);
        for (int i=0; i<n; i++)
            leader[i] = i;
        for (const auto& edge : edges)
            combine(edge[0], edge[1]);
        return find(source)==find(destination);
    }
};
