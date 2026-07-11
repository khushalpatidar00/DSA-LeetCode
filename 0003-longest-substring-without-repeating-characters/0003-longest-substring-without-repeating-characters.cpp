class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int first=0; int second=0;
        unordered_map<char,int>mp;
        int leng=0;
        while(s[second]){
            while(mp[s[second]]){
                
                mp[s[first]]=0;
                first++;
            }
            mp[s[second]]++;
            leng=max(leng,second-first+1);
            second++;
        }
        return leng;
    }
};