class Solution {
public:
    int maxScore(string s) {
        int lf =0;
        int ro =0;
        int maxi =0;
        int score = 0;

        for(char c : s){
            if(c == '1'){
                ro++;
            }
        }

        for(int i =0; i <s.length()-1;++i){
            if(s[i] == '0'){
                lf++;
            }
            else{
                ro--;
            }
            score = lf + ro;
            maxi = max(score, maxi);
        }
        return maxi; 
    }
};