#include <vector>
#include <algorithm>
#include <numeric>
#include <iostream>

using namespace std;
class Solution{
    public:
int candy(vector<int>& ratings) {
    int n = ratings.size();
    if (n == 0) return 0;
    
    vector<int> candies(n, 1);

    // Left to right
    for (int i = 1; i < n; ++i) {
        if (ratings[i] > ratings[i - 1]) {
            candies[i] = candies[i - 1] + 1;
        }
    }

    // Right to left
    for (int i = n - 2; i >= 0; --i) {
        if (ratings[i] > ratings[i + 1]) {
            candies[i] = max(candies[i], candies[i + 1] + 1);
        }
    }

    return accumulate(candies.begin(), candies.end(), 0);
}
};

