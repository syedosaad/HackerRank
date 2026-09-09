int beautifulDays(int i, int j, int k) {
    int count = 0;
    while(i<=j){
        int rev=0,sum = 0,b = i;
        while(b!=0){
            rev = (rev*10)+(b%10);
            b /= 10;
        }
        if(abs(i-rev)%k == 0){
            count++;
        }
        i++;
    }
    return count;
}
