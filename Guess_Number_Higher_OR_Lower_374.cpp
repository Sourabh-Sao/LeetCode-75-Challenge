int guessNumber(int n) {
    int s=1 , e = n ;

    while(1){
        int mid = s + (e - s) /2;
        int pick = guess(mid);

        if(pick == 0){
            return mid;
        }

        else if(pick == 1){
            s = mid + 1;
        }
        else{

            e = mid - 1;
        }
       
    }
}