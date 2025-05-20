class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        if(n%groupSize!=0){

            return false;
        }
        else{
            map<int,int> card;
            for(auto i: hand){
                card[i]++;
            }
           while(!card.empty()){
            int cardc=card.begin()->first;
            for(int i=0;i<groupSize;i++){
                if(card[cardc + i]==0){
                    return false;
                }
                card[cardc+i]--;
                if(card[cardc + i]<1){
                    card.erase(cardc+i);
                }
            }
           }
        }
        return true;
    }
};