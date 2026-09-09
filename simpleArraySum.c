int simpleArraySum(int ar_count, int* ar) {
    int sum = 0;
    while(ar_count != 0){
        sum += *ar;
        ar++;
        ar_count--;
    }
    return sum;
}
