class Solution {
public:
    bool isAnagram(string s, string t) {
        for(int i=0; i<s.size(); i++){int j=0;
        if(s[i]!=t[j]){
            j++;
        }
       if(s[i]==t[j]){
        i++;

       }
       if(j==s.size()-1){
        return true;
      }
return false;}
    }
};
