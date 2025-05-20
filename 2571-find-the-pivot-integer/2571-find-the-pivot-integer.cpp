class Solution {
public:
    int pivotInteger(int n) {
        int s1=0,s2=0;
        for(int i=n; i>=1; i--)
        {
            s1=(i*(i+1))/2;
            s2+=i;
            if(s1==s2)
                return i;
        }
        return -1;        
    }
};