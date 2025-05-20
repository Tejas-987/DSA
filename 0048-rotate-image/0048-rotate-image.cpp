class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int row=m.size();
        for(int i=0;i<row;i++){
            for(int j=0;j<=i;j++){
                swap(m[i][j],m[j][i]);
            }
        }
        for(int i=0;i<row;i++){
            reverse(m[i].begin(),m[i].end());
        }
       
    }
};