class Solution {
public:
    bool checkStraightLine( vector<vector<int>>& coordinates ) {        
	int dY = coordinates[1][1] - coordinates[0][1];
	int dX = coordinates[1][0] - coordinates[0][0];     
	for( int i=2; i < coordinates.size(); i++ ) {
		auto p = coordinates[i];
		if( dX*(p[1] - coordinates[0][1]) != dY*(p[0] - coordinates[0][0]) )
			return false;
	}
	return true;
}
};
