class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1, j=n-1, k=m+n-1; // i len of nums1, j len of nums2, k len of final output which is nums1
        while(i>=0 && j>=0){ // until lengths becomes zero
            if(nums1[i] >= nums2[j]) // if rightmost of nums1 is bigger then rightmost of j
                nums1[k--]=nums1[i--]; //then insert it at the rightmost of output
            else 
                nums1[k--]=nums2[j--]; // or else insert j's rightmost to output's right and decrease j's index
        }
        while(i>=0) nums1[k--]=nums1[i--]; // if any of the condition is not satisfied, means the other one already has iterated to fullest, and it's now empty, so just simply copy another array one by one.
        while(j>=0) nums1[k--]=nums2[j--];
    }

};