class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size() - 1;
        int carry = 1;
        
        do {
            carry += digits[len];
            digits[len--] = carry > 9 ? 0 : carry;
            carry = carry > 9 ? 1 : 0;
        } while (carry != 0 && len >= 0);
        
        if (carry > 0) {
            digits.insert(digits.begin(), carry);
        }
        
        return digits;
    }
};
