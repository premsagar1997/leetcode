class Solution {
    public int[] queryResults(int limit, int[][] queries) {
        int n = queries.length;
        int[] result = new int[n];
        HashMap<Integer, Integer> balls = new HashMap<>();
        HashMap<Integer, Integer> colors = new HashMap<>();
        for (int i = 0; i < n; i++) {
            int ball = queries[i][0];
            int color = queries[i][1];
            if (balls.containsKey(ball)) {
                int prevColor = balls.get(ball);
                colors.put(prevColor, colors.get(prevColor) - 1);
                if (colors.get(prevColor) == 0) {
                    colors.remove(prevColor);
                }
            }
            balls.put(ball, color);
            colors.put(color, colors.getOrDefault(color, 0) + 1);
            result[i] = colors.size();
        }
        return result;
    }
}
