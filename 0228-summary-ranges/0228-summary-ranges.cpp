class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        int first = -1, before;
        vector<string> answer;
        string a;
        
        if(!nums.empty()){
            for(auto num : nums) {
                if(first == -1){
                    first = num;
                    before = first;
                    continue;
                }
                else {
                    if (before == num-1) {
                        before = num;
                        continue;
                    }
                    else {
                        if(first == before)
                            a = to_string(first);
                        else 
                            a = to_string(first) + "->" + to_string(before);
                        answer.push_back(a);
                        first = num;
                        before = num;
                    }
                }
            }

            if(first == before)
                a = to_string(first);
            else 
                a = to_string(first) + "->" + to_string(before);

            answer.push_back(a);
        }
            
        return answer;
        
    }
};