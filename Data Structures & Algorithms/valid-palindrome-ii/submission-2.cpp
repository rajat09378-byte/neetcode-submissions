class Solution {
public:
     bool check(string s, int i ,int j){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
     }
    bool validPalindrome(string s) {   int i=0;
    int j=s.size()-1;
       while(i<j){
        if(s[i]!=s[j]){
            if(check(s,i+1,j)){
            return true;}
    
            if(check(s,i,j-1)){;
            return true;   } 
        
       
            return false;}
            i++;
            j--;  
        
        
    }    return true;}
};