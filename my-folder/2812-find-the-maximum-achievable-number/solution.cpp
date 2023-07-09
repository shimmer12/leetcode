class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
         
        // 3 2  if we do like 3+2=5  3-2=1  5+2  
        // 4 1 4-1 = 3  4+1 =5  5+1 6      4+1=5   4-1=3     5,3      6-1,2+1,
        //  3,2     3+2 3-2  5,1  7  
                                                                                //Accepted  // int n1 = num+t;
                                                                                            //     int n2=num-t;
                                                                                            // int ans1= n1+t;
                                                                                            // return ans1;
return (num+2*t);
        
    }
};
