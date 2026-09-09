char* angryProfessor(int k, int a_count, int* a) {
    int count = 0;
    while(a_count!=0){
        if(*a<=0){
            a_count--;
            a++;
            count++;
        } else {
            a_count--;
            a++;
        }
    }
    if(count>=k){
        return "NO";
    }
    return "YES";
}
