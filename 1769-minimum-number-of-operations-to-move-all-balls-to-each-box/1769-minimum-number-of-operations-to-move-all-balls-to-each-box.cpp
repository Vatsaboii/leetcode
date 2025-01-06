class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int>left(n+1,0);      
        vector<int>right(n+1,0);
        int x=0;
        for(int i=n-1;i>=0;i--){
            left[i]=left[i+1]+x;
            if(boxes[i]=='1'){
                x++;
            }
        }
        x=0;
        for(int i=0;i<n;i++){
            right[i+1]=right[i]+x;
            if(boxes[i]=='1'){
                x++;
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(left[i]+right[i+1]);
        }
        return ans;
    }
};