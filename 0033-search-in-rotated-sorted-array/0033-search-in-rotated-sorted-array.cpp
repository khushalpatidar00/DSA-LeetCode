    int binarySearch(vector<int>& arr, int target,int low ,int high) {

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0; int j=nums.size()-1;
        while(i<j){
            int mid=(i+j)/2;
           if(nums[mid]>=nums[j]){
            i=mid+1;
           }else{
            j=mid;
           }
        
    }
    //minimum=pivotindex(pivot)
   // int ans;
   int pivot = i;
int n = nums.size();

if (nums[pivot] <= target && target <= nums[n - 1]) {
    return binarySearch(nums, target, pivot, n - 1);
}
else {
    return binarySearch(nums, target, 0, pivot - 1);
}
   
  return -1;
    }
};