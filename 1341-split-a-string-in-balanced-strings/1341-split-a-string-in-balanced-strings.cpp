class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0;
        int r=0,l=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='L') l++;
             if(s[i]=='R') r++;
             if(l==r) {
                ans++;
                l=0;r=0;

        }
        }
        return ans;
    }
};