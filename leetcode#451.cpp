bool compare(int x, int y) {
    return (x/256) > (y/256);
}

class Solution {
public:
    string frequencySort(string s) {
        int hash[256];
        
        for (int i = 0; i < 256; i++)
            hash[i] = i;
        
        for (int i = 0, n = s.length(); i < n; i++)
            hash[s[i]] += 256;
        
        sort(hash, hash+256, compare);
        
        string res = "";
        
        for (int i = 0; i < 256; i++) {
            int freq = hash[i]/256;
            int count = hash[i]%256;
            while (freq > 0) {
                res += count;
                freq--;
            }
        }
        
        return res;
    }
};
