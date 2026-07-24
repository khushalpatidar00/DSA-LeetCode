class Solution {
public:
    string reversePrefix(string word, char ch) {
      string s ="";
      int i;
      for( i=0; i<word.size();i++){
        s+=word[i];
        if(word[i]==ch) break;
      }
      if (i == word.size())   // ch not found
            return word;
        reverse(s.begin(),s.end());
        s.append(word.begin()+i+1,word.end());
        return s;
    }
};