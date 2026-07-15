class Solution {
public:
    int strStr(string haystack, string needle) {
        //haystack.find(needle);
         int index = haystack.find(needle);

    if (index == string::npos)   return -1;
    else return index;
    }
};