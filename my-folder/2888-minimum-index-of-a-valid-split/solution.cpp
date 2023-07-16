class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        long long  index = -1;
        int i=0;
        map<int, int> naksha;
        int n = nums.size();
        long long splitty = 0;
        
        while(i!=n) {
            naksha[nums[i]]++;
            if (naksha[nums[i]] > (n / 2)) {
                index = nums[i];
                splitty = naksha[nums[i]];
            }
        i++;}
        
        int gino = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == index) {
                gino++;
            }
            if (gino * 2 > (i + 1) && (splitty - gino) * 2 > (n - (i + 1))) {
                return i;
            }
        }
        return -1;
    }
};

