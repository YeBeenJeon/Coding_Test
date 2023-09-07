class Solution {
public:
    int addDigits(int num) {
        
        int dr;
        
        dr = num - 9 * floor((num-1)/9);
        
        cout << dr << "\n";
        
        return dr;
        
    }
};