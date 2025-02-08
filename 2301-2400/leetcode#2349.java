class NumberContainers {

    private TreeMap<Integer, Integer> indexToNum;
    private HashMap<Integer, TreeSet<Integer>> numToIndices;

    public NumberContainers() {
        indexToNum = new TreeMap<>();
        numToIndices = new HashMap<>();
    }
    
    public void change(int index, int number) {
        if (indexToNum.containsKey(index)) {
            int num = indexToNum.get(index);
            numToIndices.get(num).remove(index);
            if (numToIndices.get(num).isEmpty()) {
                numToIndices.remove(num);
            }
        }
        indexToNum.put(index, number);
        numToIndices.putIfAbsent(number, new TreeSet<>());
        numToIndices.get(number).add(index);
    }
    
    public int find(int number) {
        if (numToIndices.containsKey(number)) {
           return numToIndices.get(number).first();
        }
        return -1;
    }
}

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers obj = new NumberContainers();
 * obj.change(index,number);
 * int param_2 = obj.find(number);
 */
