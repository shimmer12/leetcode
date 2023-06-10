class Solution {
public:
bool isFascinating(int n) {
            string coco = to_string(n) + to_string(2 * n) + to_string(3 * n);

         vector<char>vec;
        for(long long i = 0; i < coco.size(); i++){
            if(coco[i]-'0' == 0) return false;
            
            vec.push_back(coco[i]);
        }
       unordered_map<char,int>mapp;
        for(long long i = 0; i < vec.size(); i++){
            mapp[vec[i]]++;
        }
        for(auto it : mapp){
            if(it.second > 1) return false;
        }
        return true;
    }
};

// n is of 3 digits 
//n fascinates if  it has set 1 to 9 -0
// Concatenate n with the numbers 2 * n and 3 * n.
// eg: 121 and 371 is 121371. // 192  384 576
