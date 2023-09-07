class Solution {
public:
    bool isPowerOfFour(int n) {
        /*
        a) There is only one bit set in the binary representation of n (or n is a power of 2) 
        b) The bits don’t AND(&) any part of the pattern 0xAAAAAAAA
        */
        
        if(n<0) return false;
        
        return (n!=0) && ((n&(n-1))==0) && !(n & 0xAAAAAAAA);
        
    }
};