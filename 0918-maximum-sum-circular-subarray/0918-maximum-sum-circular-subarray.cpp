class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
         int maxi=INT_MIN; int totalsum=0;       
        int sum=0;
        for(int i=0; i<nums.size();i++){
            totalsum+=nums[i];
            sum+=nums[i];
            maxi=max(maxi,sum);
             if(sum<0){
            sum=0;
        }
        }
        int mini= INT_MAX;
        int sumi=0;
        for(int i=0; i<nums.size();i++){
        sumi+=nums[i];
        mini=min(mini,sumi);
        if(sumi>0){
            sumi=0;
        }
        }
        if(maxi<0){
            return maxi;
        }
        return max(maxi,totalsum-mini);
    }
};