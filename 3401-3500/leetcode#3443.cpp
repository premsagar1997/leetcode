class Solution {
public:
    int maxDistance(string s, int k) {
        int n = s.length();

        int east = 0;
        int west = 0;
        int north = 0;
        int south = 0;

        int maxMD = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'E') east++;
            else if (s[i] == 'W') west++;
            else if (s[i] == 'N') north++;
            else if (s[i] == 'S') south++;

            int currentMD = abs(east-west) + abs(north-south);
            int steps = i+1;

            int waste = steps - currentMD;
            int extra = 0;
            if (waste > 0) {
                extra = min(2 * k, waste);
            }

            int finalMD = currentMD + extra;

            maxMD = max(maxMD, finalMD);
        }

        return maxMD;
    }
};
