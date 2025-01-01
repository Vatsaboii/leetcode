class Solution {
public:
    bool isPalindrome(long long x) {
        if(x<0){
            return 0;
        }
        else{
            long long temp = x;
            long long rev = 0;
        while(x!=0){
            int d = x%10;
            rev = rev*10+d;
            x = x/10;
        }
        if(temp == rev)
        {
            return true;
        }
        else{
            return false;
        }
        }
    }
};