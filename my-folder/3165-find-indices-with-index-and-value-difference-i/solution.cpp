class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int len = nums.size();
        vector<int> res = {-1, -1};

        for (int i = 0; i < len; i++) {
            for (int j = i + indexDifference; j < len; j++) {
                if (abs(nums[i] - nums[j]) >= valueDifference) {
                    res[0] = i;
                    res[1] = j;
                    return res;
                }
            }
        }

        return res;
    }
};

