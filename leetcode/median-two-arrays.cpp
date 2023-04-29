double median( const vector<int> &V )
{
   int N = V.size();
   return 0.5 * ( V[(N-1)/2] + V[N/2] );
}
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(
            nums1.end(),
            nums2.begin(),
            nums2.end()
        );
        sort(nums1.begin(), nums1.end());
        return median(nums1); 
    }
};
