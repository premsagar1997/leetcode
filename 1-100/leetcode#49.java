class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
         if (strs == null || strs.length == 0) {
            return new ArrayList<>();
        }
        
        Map<String, List<String>> freqMap = new HashMap<>();
        for (String str: strs) {
            String freq = getFreq(str);
            
            if (freqMap.containsKey(freq)) {
                freqMap.get(freq).add(str);
            } else {
                List<String> newList = new ArrayList<>();
                newList.add(str);
                freqMap.put(freq, newList);
            }
        }
        
        return new ArrayList(freqMap.values());
    }

    public String getFreq(String str) {
        
        int[] freq = new int[26];
        
        for(char c: str.toCharArray()) {
            freq[c - 'a']++;
        }
        
        StringBuilder sb = new StringBuilder(""); 
        char c = 'a';
        for(int i: freq) {
            sb.append(c);
            sb.append(i);
            c++;
        }
        
        return sb.toString();
    }
}
