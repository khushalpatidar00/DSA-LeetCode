class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char,int>mp;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        //  for(int i=0;i<s.size();i++){
        //     if(mp[s[i]]>0){
        //         cnt++;
        //         mp[s[i]]=0;
        //     }
        // }
        // return cnt;
        return mp.size();
    }
};