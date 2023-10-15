class Solution {
public:
   vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
    vector<int> result;
    int n = nums.size();
    int x = nums[0], idx1 = 0, mini = nums[0], idx2 = 0;

    for (int i = indexDifference; i < n; i++) {
        if (nums[i - indexDifference] > x) {
            x = nums[i - indexDifference];
            idx1 = i - indexDifference;
        }

        if (nums[i - indexDifference] < mini) {
            mini = nums[i - indexDifference];
            idx2 = i - indexDifference;
        }

        if (abs(nums[i] - x) >= valueDifference) {
            result = {idx1, i};
            return result;
        }

        if (abs(nums[i] - mini) >= valueDifference) {
            result = {idx2, i};
        }
    }

    if (result.empty()) {
        result = { -1, -1};
    }

    return result;
}

};
