class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
          int n=nums.size();int idx=-1;
         if(n==1){return 0;}
         int i=1;
         while(i<n-1){
            
            if(nums[i]>nums[i+1] && nums[i]>nums[i-1]){idx=i;break;}
            i++;
         }
         
        if(nums[0]>nums[1]){idx=0;}
        return (idx>=0) ? idx:n-1;
    }
};