// APPROACH -1: LEFT AND RIGHT
// TC = O(LOGN)

 int i = 0;
        int count_left = 0;
        while(i < n){
            int left = 2 * i + 1;
            count_left++;
            i = left;
        }
        i = 0;
        int count_right = 0;
        while(i < n){
            int right = 2 * i + 2;
            count_right++;
            i = right;
        }
        
        if(count_left >= count_right) return count_left-1;
        return count_right-1;
        

        APPROACH - 2 :- COUNT N/2 TILL N> 1
         int height = 0;
        while(n > 1 ){
            
            height++;
            n = n / 2;
        }
        return height;