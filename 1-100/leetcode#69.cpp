class Solution {
public:
    int mySqrt(int x) {
        int low = 0, high = x;
        long long int sqrt = -1;
        
        while (low <= high) {
            long long int mid = low + (high - low) / 2;
            long long int sq = mid * mid;
            if (x == sq)
                return mid;
            
            if (sq < x) {
                low = mid + 1;
                sqrt = mid;
            } else {
                high = mid - 1; 
            }
        }
        
        return sqrt;
    }
};
