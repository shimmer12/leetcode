class Solution {
public:
    long distanceTraveled(long mainTank, long additionalTank) {
        long distance = calculateDistance(mainTank, additionalTank);
        return distance;
    }

private:
    long calculateDistance(long mainTank, long additionalTank) {
        long distance = 0;
        long currentTank = 1;
        
        while (currentTank <= mainTank) {
            distance += 10;
            
            if (currentTank % 5 == 0 && additionalTank > 0) {
                mainTank++;
                additionalTank--;
            }
            
            currentTank++;
        }
        
        return distance;
    }
};

