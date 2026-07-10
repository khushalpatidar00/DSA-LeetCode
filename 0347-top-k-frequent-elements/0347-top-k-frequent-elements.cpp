class comp {
public:
    bool operator()(pair<int,int> &a, pair<int,int> &b){

        if(a.first == b.first)
            return a.second > b.second;

        return a.first > b.first;
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        
        unordered_map<int,int>mp;
        for(int i=0; i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,comp>pq;
        for(auto it:mp){
            pq.push({it.second,it.first});
            if(pq.size()>k){
                pq.pop();
            }
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
        
    }
};