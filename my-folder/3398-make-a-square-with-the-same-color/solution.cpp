class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {

    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[i].size();j++){
            int b=0;
            int w=0;
            for(int k=i;k<i+2 and k<grid.size();k++){
                for(int l=j;l<j+2 and l<grid[0].size();l++){
                    if(grid[k][l]=='B'){
                        b++;
                    }else{
                        w++;
                    }
                }
            }
            if(b>=3 or w>=3){
                return true;
            }
        }
    }
return false;
    }
};



