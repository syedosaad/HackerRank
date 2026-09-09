int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
    static int result[2];
    result[0] = 0;
    result[1] = 0;
    while(a_count != 0){
        if(*a>*b){
            result[0]+=1;
            a++;b++;a_count--;
        } else if(*b>*a){
            result[1]+=1;
            a++;b++;a_count--;
        } else {
            a++;b++;a_count--;
        }
    }
    *result_count = 2; // This is only for hacker rank........
    return result;
}
