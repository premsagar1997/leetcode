 /**In order to find the complement of an integer,
 * we have to flip all the 0's to 1's and all the 1's to 0's.
 * We know that XOR means one or the other is true but not both.
 * So if we XOR our input with a mask 11111..., flipping will happen and we will get our the desired result
 */

class Solution {
public:
    int bitwiseComplement(int n) {
        int mask = 1;
        while (mask < n)
            mask = (mask<<1) + 1;
        
        return n^mask;
    }
};
