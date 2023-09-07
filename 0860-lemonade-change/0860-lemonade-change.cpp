class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        // $5, $10, $20
        int budget = 0, change=0;
        map<int, int> m;
        
        for(auto bill : bills) {
            m[bill]++;
            change = bill - 5;
            if(change == 5){
                if(m[5] > 0)
                    m[5]--;
                else
                    return false;
            }
            else if(change == 15){
                if(m[5] >= 1 && m[10] >= 1){
                    m[5]--;
                    m[10]--;
                }
                else if(m[5] >=3) {
                    m[5] -= 3;
                }
                else
                    return false;
            }
        }
        
        return true;
        
    }
};