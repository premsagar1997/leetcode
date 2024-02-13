class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> res = new ArrayList<>();

        //no element -> return empty list
        if (numRows == 0) return res;

        //for only one element
        List<Integer> firstRow = new ArrayList<>();
        firstRow.add(1);
        res.add(firstRow);
        if (numRows == 1) return res;

        //for n number of rows
        for (int i = 1; i < numRows; i++) {
            List<Integer> prevList = res.get(i-1);

            List<Integer> row = new ArrayList<>();
            
            //start element
            row.add(1);

            for (int j = 0; j < i-1; j++) {
                row.add(prevList.get(j) + prevList.get(j+1));
            }

            //end element
            row.add(1);

            res.add(row);
        }

        return res;
    }
}

//time comlexity - O(N^2)
//space complexity - O(N^2)
