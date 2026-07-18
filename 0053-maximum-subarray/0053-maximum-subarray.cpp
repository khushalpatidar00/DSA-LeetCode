class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int prefixsum=0;
        // int maxi=INT_MIN;
        // for(int i=0; i<nums.size();i++){
        //     prefixsum+=nums[i];
        //     maxi=max(maxi,prefixsum);
        //     if(prefixsum<0){
        //         prefixsum=0;
        //     }

        // }
        // return maxi;


        int prefixsum=0;
        int maxi= INT_MIN;
        for(int i=0; i<nums.size();i++){
            prefixsum+=nums[i];
            maxi = max(maxi,prefixsum);
            if(prefixsum<0){
                prefixsum=0;
            }
        }
        return maxi;
    }
};