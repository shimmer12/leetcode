class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
         int n= people.size();
         int left=0,right=n-1, boat=0;
        sort(people.begin(),people.end());

       
        while(left<=right)
               if( people[left]+people[right]<=limit){
                    boat++;
                    right--;
                    left++;
               }
                    else {
                        boat++;
                        right--;
                    }
            
            
        return boat;
    }
};
