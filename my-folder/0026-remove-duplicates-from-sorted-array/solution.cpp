class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        for(int j=1;j<n;j++)
        if(nums[i]!=nums[j]){
        i++;
        nums[i]=nums[j]; //to overwrite dup value with unique values

}
        return i+1;
    }
};
