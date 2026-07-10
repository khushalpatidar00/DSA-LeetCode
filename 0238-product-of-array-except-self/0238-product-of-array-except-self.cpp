class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //vector<int>v(nums.size());
        vector<int>ps(nums.size(),1);
       // vector<int>s(nums.size());
        
        for(int i=1; i<nums.size();i++){
            ps[i]=ps[i-1]*nums[i-1];
        }
        int mul=1;
       
        for(int i=nums.size()-2; i>=0;i--){
            mul*=nums[i+1];
            ps[i]*=mul;
        }
        
        
        return ps;
        
    }
};