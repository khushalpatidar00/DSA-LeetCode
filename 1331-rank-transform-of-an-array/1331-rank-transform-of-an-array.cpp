class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.size()==0) return{};
         if(arr.size()==1) return{1};
        vector<int>v(arr.size());
        vector<int>ans;
        v=arr;
        unordered_map<int,int>mp;
       int count=1;
        sort(v.begin(),v.end());
        mp[v[0]]=count;

        //ans.push_back(count);
        for(int i=1; i<v.size();i++){
            if(v[i]==v[i-1]){
                mp[v[i]]=count;
                //ans.push_back(count);
            }else {
                count++;
                mp[v[i]]=count;
               // ans.push_back(count);

            }
        }
        for(int i=0; i<arr.size();i++){
            ans.push_back(mp[arr[i]]);
        }
        return ans;
    }
};