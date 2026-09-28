class Solution {
public:
    int scoreOfString(string s) {int total =0;
        for(int i=1; i<s.size(); i++){
             total=total+ abs(s[i]-s[i-1]);
        }
        return total;
    }
};