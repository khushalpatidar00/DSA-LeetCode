class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            else {
                if (st.empty()) return false;

                char top = st.top();
                st.pop();

                if ((c == ')' && top != '(') ||
                    (c == ']' && top != '[') ||
                    (c == '}' && top != '{')) {
                    return false;
                }
            }
        }
        return st.empty();
    }
};

// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char>st;
//         char ch;
//         for(int i=0; i<s.size();i++){
//             if(s[i]=='('){
//                 st.push(s[i]);
//             }else if(s[i]==')'){
//                  if(!st.empty()){ch= st.top();
//                 if(ch=='(')  st.pop();}
//                 else st.push(s[i]);
//             }else if(s[i]=='['){
//                 st.push(s[i]);
//             }else if(s[i]==']'){
//                if(!st.empty()){ ch=st.top();
//                 if(ch=='[') st.pop();}
//                 else st.push(s[i]);
//             }else if(s[i]=='{'){
//                 st.push(s[i]);
//             }else{
//                 if(!st.empty()){ch=st.top();
//                 if(ch=='{') st.pop();}
//                 else st.push(s[i]);
//             }

//         }
//         if(st.empty()) return true;
//         else return false;
//     }
// };