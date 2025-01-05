class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int> d(n + 1, 0); 
        for (const auto& shift : shifts) {
            int start = shift[0];
            int end = shift[1];
            int direction = shift[2];
            int value = (direction == 1) ? 1 : -1; 
            d[start] += value;
            d[end + 1] -= value; 
        }
        int netShift = 0;
        for (int i = 0; i < n; ++i) {
            netShift += d[i];
            int shiftValue = (netShift % 26 + 26) % 26;
            s[i] = 'a' + (s[i] - 'a' + shiftValue) % 26;
        }
        
        return s;
    }
};