class Solution {
    public static int candy(int[] ratings) {
        int n=ratings.length; 
        int idx=1; 
        int candies=1; 

        while(idx<n) {
            if(ratings[idx]==ratings[idx-1]) {
                candies+=1; 
                idx++;
                continue;
            }

            int up=1; 
            while(idx<n&&ratings[idx]>ratings[idx-1]) {
                up++;
                candies+=up;
                idx++;
            }
            int down=1;
            while(idx<n&&ratings[idx]<ratings[idx-1]) {
                candies+=down;
                down++;
                idx++;
            }
            if(down>up) {
                candies+=down-up;
            }
        }
        return candies;
    }
}