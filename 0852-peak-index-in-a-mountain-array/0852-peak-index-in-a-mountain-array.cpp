class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
       int i=0; int j=nums.size()-1;
     
       while(i<=j){
        int mid=(i+j)/2;
        if(i==j)  return i;
       else if(nums[mid] < nums[mid + 1]) {
    // Increasing slope
        i = mid + 1;
    } else {
    // Decreasing slope or at peak
             j = mid;
           }
       }
       return j;
    }
};