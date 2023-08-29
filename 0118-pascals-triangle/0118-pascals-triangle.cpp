class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pt;

        int** m = new int*[numRows];

        int i, j;

        for(i=0; i<numRows; i++) {
            m[i] = new int[numRows];
            for(j=0; j<numRows; j++){
                m[i][j] = 0;
            }
        }

        int rows=0;

        while(rows<numRows) {
            vector<int> tmp;
            for(i=rows, j=0; i>=0&&j<=rows; i--, j++){
                if(i-1 < 0 || j-1 < 0)
                    m[i][j] = 1;
                else {
                    m[i][j] = m[i-1][j] + m[i][j-1];
                }
                tmp.push_back(m[i][j]);
            }
            rows++;
            pt.push_back(tmp);
        }

        return pt;
    }
};