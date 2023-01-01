class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int s=0;
         sort(nums.begin(),nums.end());
        for(int i=0; i<=nums.size()-1; i++ ){
            
              if(nums[i]==nums[i+1]){
             s= nums[i];
            break;}
            else{
                s=s;
            }
            }return s;
            
        }
    
};

