// // class Solution {
// // public:
// //     bool isAnagram(string s, string t) {
// //          if (s.length() != t.length()) return false;

// //         // Step 2: Frequency array for lowercase letters
// //         int freq[26] = {0};

// //         // Step 3: Count letters in s
// //         for (char c : s) {
// //             freq[c - 'a']++;
// //         }

// //         // Step 4: Match letters with t
// //         for (char c : t) {
// //             freq[c - 'a']--;
// //             if (freq[c - 'a'] < 0) return false;  // extra letter in t   agar koi alag letter aa jaye jese ram {111} ran{00-1} -1 is liye hua kyunli uski frequncy initially 0 thi aur wo -1 ho gayi freq[]-- karne par
// //         }

// //         // Step 5: All letters perfectly matched → anagram
// //         return true;
// //     }
//     //     map<char, int> freq;
//     //      map<char, int> freq1;

//     // for(int i=0;i<s.length(); i++) {
//     //     if(isalpha(s[i])) 
//     //         freq[s[i]]++;
//     // }
//     //  for(char c1 : t) {
//     //     if(isalpha(c1)) 
//     //         freq1[c1]++;
//     // }
//     //     if (freq==freq1)  return true;
//     //     else return false;
//     // }
//     class Solution {
// public:
//     bool isAnagram(string s, string t) {
//    if(s.length()!= t.length())  return false;
//    int freq[26]={0};

//    for(char c:s){
//     freq[c-'a']++;
//    }
//     for(char c:t){
//     freq[c-'a']--;
//     if(freq[c-'a']<0){
//         return false;
//     }
//    }
//    return true;
//     }
// };
   class Solution {
    public:
    bool isAnagram(string s, string t) {
         if(s.length()!= t.length())  return false;
        int freq[256]={0};
        for(char c:s){
            freq[c-'a']++;
        }
         for(char c:t){
            freq[c-'a']--;
        if(freq[c-'a']<0)   return false;

        }
        return true;
    }
   };

