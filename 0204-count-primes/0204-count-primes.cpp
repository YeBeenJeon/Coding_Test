class Solution {
public:

    int countPrimes(int n) {
        
        int cnt = 0;
        
        bool sieve[n+1];
        
        sieve[0] = true;
        if(n!=0) sieve[1] = true;
        
        for(int i=2; i<n; i++)
            sieve[i] = false;
        
        for(int i=2; i<n; i++) {
            if(sieve[i]) continue;
            for(int j=2*i; j<n; j+=i){
                sieve[j] = true;
            }
        }
        
        for(int i=2; i<n; i++) {
            if(!sieve[i]) cnt++;
        }
        
        return cnt;
    }
};