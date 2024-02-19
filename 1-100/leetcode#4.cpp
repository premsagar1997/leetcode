class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int n = n1 + n2;

        // initialize a new array
        vector<int>v(n, 0);

        int i = 0, j = 0, k = 0;
        while (i < n1 && j < n2) {
            if (nums1[i] < nums2[j]) {
                v[k] = nums1[i];
                i++;
            } else {
                v[k] = nums2[j];
                j++;
            }
            k++;
        }

        //copy remaining elements
        while (i < n1) {
            v[k] = nums1[i];
            i++;
            k++;
        }

        //copy remaining elements
        while (j < n2) {
            v[k] = nums2[j];
            j++;
            k++;
        }

        return n % 2 == 0 ? (v[n/2] + v[n/2 - 1]) / 2.0 : v[n/2];
    }
};
