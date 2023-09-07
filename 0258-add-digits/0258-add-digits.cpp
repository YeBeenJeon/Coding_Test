class Solution {
public:
    int addDigits(int num) {
        
        // Digital Root
        int dr;
        // 자신보다 작은 수 중, 가장 큰 9의 배수에서 몇 번째인지
        dr = num - 9 * floor((num-1)/9);
                
        return dr;
        
    }
};