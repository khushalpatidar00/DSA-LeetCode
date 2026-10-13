// class Solution {
// public:
//     string reverseWords(string s) {
//         vector<string>v;
//         string s1="";
        
//         for(int i=0; i<s.size(); i++){

//             if(s[i]==' '){
//                if(s1 !=""){ v.push_back(s1);
//                 s1="";}
//             }else{
//                 s1+=s[i];
//             }

//         }
//         if(s1 !=""){ v.push_back(s1);}
//        // reverse(v.begin(),v.end());
//         string ans="";
//         for(int i=v.size()-1; i>=0;i--){
//             ans+=(v[i]+' ');
//         }
//             ans.pop_back();

//         return ans;

    //     vector<string>v;
    //     int i=0;

    //     while(i<s.size()){    //loop 1
    //      while(i < s.size() && s[i] == ' ') i++;   //loop 2
    //     string s1="";
    //    while( i<s.size()&& s[i]!=' '){      //loop 3     
    //         s1+=s[i];            
    //     i++;
    //   }
    //  if(s1!="")    v.push_back(s1);
    // }
   
    // string s2="";
    // for(int i=v.size()-1;i>=0; i--){
    //     s2+=v[i];
    //     s2+=' ';
    // }
    // s2.pop_back();
    // return s2;


    class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        string st="";
        for(int i=0; i<s.size();i++){
            if(s[i]!=' '){
                st+=s[i];
            }else{
                if(st!="") v.push_back(st);
                st="";
            }
        }
        if(st!="") v.push_back(st);
               

               string s2="";
               for(int i=v.size()-1; i>=0;i--){
                s2+=v[i]+' ';
               }
               s2.pop_back();

               return s2;

    }

};