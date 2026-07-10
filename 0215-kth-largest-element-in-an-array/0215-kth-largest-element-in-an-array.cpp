class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       // khushals solution
        // priority_queue<int>pq;
        // for(int i=0; i<nums.size();i++){
        //     pq.push(nums[i]);
        // }
        // int largestelem;
        // for(int j=0; j<k;j++){
        //     largestelem=pq.top();
        //     pq.pop();
        // }
        // return largestelem;



        // optimized sol using mean hip
        priority_queue<int, vector<int>, greater<int>>pq;

        for(int x : nums){
            pq.push(x);         
            if(pq.size() > k){
                pq.pop();
            }
        }
        return pq.top();


    }
};