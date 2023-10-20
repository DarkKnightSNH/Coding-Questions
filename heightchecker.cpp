class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        vector <int> expect;
        expect=heights;
        sort(expect.begin(),expect.end());
        int count=0;
        
        for(int i=0;i<heights.size();i++)
        {
            if(heights[i]!=expect[i])
            {
                count++;
            }
        }
        
        return count;
    }
};
