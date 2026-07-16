class Solution {
public:
    vector<string>ans;
    void solve(string curr,int n){
        if(curr.length()==n){
            ans.push_back(curr);
            return;
        }
        if (curr.empty()) {
            // First character choose karo
            solve(curr+'0',n);
            solve(curr+'1',n);
        }
        else if (curr.back() == '0') {
            // Sirf '1' add karo
            solve(curr+'1',n);
        }
        else { // curr.back() == '1'
            // '0' aur '1' dono add kar sakte ho
            solve(curr+'0',n);
            solve(curr+'1',n);
        }
            }
    vector<string> validStrings(int n) {
        solve("",n);
        return ans;
    }
};