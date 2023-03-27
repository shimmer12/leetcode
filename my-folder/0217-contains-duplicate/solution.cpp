class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       vector<int>a;
        for(int i=0;i<nums.size();i++){
            a.push_back(nums[i]);
        }
        sort(a.begin(),a.end());
        for(int i=0;i<nums.size()-1;i++){
        if(a[i]==a[i+1])

        return true;
        }
        return false;
        
    }
};
