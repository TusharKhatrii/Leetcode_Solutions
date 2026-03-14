class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge(nums1.size() + nums2.size(), 0);
        int i = 0, j = 0, k = 0;
        for (; i < nums1.size() && j < nums2.size();) {
            if (nums1[i] > nums2[j]) {
                merge[k++] = nums2[j++];
            } else {
                merge[k++] = nums1[i++];
            }
        }

        while (i < nums1.size()) {
            merge[k++] = nums1[i++];
        }

        while (j < nums2.size()) {
            merge[k++] = nums2[j++];
        }

        int n = merge.size();
        if (n & 1) {
            return double(merge[(n - 1) / 2]);
        } else {
            double mid = merge[(n - 1) / 2] + merge[(n + 1) / 2];
            return (mid / double(2.0));
        }
    }
};