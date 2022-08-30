class Solution {
public:
    string addBinary(string a, string b) {
        int l1 = a.length() - 1;
        int l2 = b.length() - 1;
        
        int carry = 0;
        string res = "";
        while (l1 >= 0 || l2 >= 0) {
            int sum = 0;
            if (l1 >= 0 && a[l1] == '1')
                sum++;
            
            if (l2 >= 0 && b[l2] == '1')
                sum++;
            
            sum += carry;
            res = sum % 2 == 0 ? ("0" + res) : ("1" + res);
            carry = sum > 1 ? 1 : 0;
            
            l1--;
            l2--;
        }
        
        if (carry == 1)
            res = "1" + res;
        
        return res;
    }
};
