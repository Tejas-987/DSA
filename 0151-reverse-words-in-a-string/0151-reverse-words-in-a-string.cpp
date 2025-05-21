class Solution {
public:
    string reverseWords(string s) {
        
        int n=s.size();
        int left=0,right=n-1;
        while(s[left]==' ') left++;
        while(s[right]==' ')right--;

        string word,ans;
         while(right>=left){
            if(s[right]!=' ')word=word+s[right];
            else if(!word.empty()){
                    if(!ans.empty()) ans+=' ';
                    reverse(word.begin(), word.end());
                    ans+=word;
                    word.clear();
                }
                right--;
            }
            if(!word.empty()){
                
                reverse(word.begin(), word.end());
                if(!ans.empty()) ans+=' ';
                ans+=word;
            }
            return ans;
         }
    
};