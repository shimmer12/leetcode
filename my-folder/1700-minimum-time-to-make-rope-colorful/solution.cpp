/*class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
    }
};*/
class Solution {
    public:
int minCost(string s, vector<int>& cost) {
    int res = cost[0], max_cost = cost[0];
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] != s[i - 1]) {
            res -= max_cost;
            max_cost = 0;
        }
        res += cost[i];
        max_cost = max(max_cost, cost[i]);
    }
    return res - max_cost;
}
};
