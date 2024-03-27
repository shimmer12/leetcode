#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#define ll long long
#define endl "\n"
#define show(arr) for (auto i: arr) {cout << i << ' ';} cout << "\n"
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define debug(x) cout << #x << " = " << (x) << endl;

auto initialize = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        long n = nums.size(), r = 0, l = 0;
        long long prod = 1;
        int ans = 0;
        for (; r < n; ++r) {
            prod *= nums[r];
            for(; prod >= k && l <= r; ++l) {
                prod /= nums[l];
            }
            ans += (r - l + 1);
        }
        return ans;
    }
};
