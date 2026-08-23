class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        vector<int>v(nums.size(),'_');
        int j=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=val){
                v[j]=nums[i];
                count+=1;
                j++;
            }
        }
        nums=v;
        return count;
    }
};