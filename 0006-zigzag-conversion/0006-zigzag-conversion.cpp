class Solution {
public:
    string convert(string s, int numRows) {
                if (numRows <= 1) return s;

        int d=-1,j=0;
        vector<string> u(numRows);
        for(int i=0;i<s.length();i++){
            if(j==0 || j==numRows-1) d*=(-1);
            u[j]+=s[i];
            if(d==1) j++;
            else j--;
        }
        string h="";
        for(auto i:u){
            h=h+i;
        }
        return h;

    }
};