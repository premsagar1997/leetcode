class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int n = people.size();

        int i = 0;
        int j = n - 1;

        int mBoat = 0;

        while (i <= j) {
            if ((people[i] + people[j]) <= limit) {
                mBoat++;
                i++;
                j--;
            } else {
                mBoat++;
                j--;
            }
        }

        return mBoat;
    }
};
