class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        else:
            n = x;
            res = 0;
            while n != 0:
                r = int(n % 10)
                n = int(n /10)
                res = (res * 10) + r
            
            if res == x:
                return True
            else:
                return False
        
