class Solution {
public:
    int minSwaps(string s) {
        int im=0;
        for(int i=0;i<s.size();i++){
   if(s[i]=='[') im++;
   else if(im>0) im--;
        }
        return (im+1)/2;
    }
};