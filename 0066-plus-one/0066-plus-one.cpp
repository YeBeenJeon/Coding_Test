class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        vector<int> result;
        vector<int> zeros;
        
        int tmp=0;
        
        while(true) {
            tmp = digits.back();
            digits.pop_back();
            tmp++;
            if(tmp>=10){
                if(!digits.empty()) {
                    zeros.push_back(0);
                }
                else {
                    digits.push_back(1);
                    zeros.push_back(0);
                    break;
                }
            }
            else {
                digits.push_back(tmp);
                break;
            }
        }
        
        for(auto i: zeros) {
            digits.push_back(i);
        }
        
        return digits;
        
    }
};