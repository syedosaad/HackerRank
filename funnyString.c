char* funnyString(char* s) {
    int n = strlen(s);
    char s2[n+1];
    strcpy(s2,s);
    //int sum = 0;
    int diff1[n];
    int diff2[n];
    
    for(int i=0; i<n/2; i++){
        char temp = s2[i];
        s2[i] = s2[n-i-1];
        s2[n-i-1] = temp; 
    }
    for(int i=0; i<n-1; i+=2){
        diff1[i] = abs(s[i]-s[i+1]);
        diff2[i] = abs(s2[i]-s2[i+1]);
        if(diff1[i] != diff2[i]){
            return "Not Funny";
            break;
        }
    }
    return "Funny";
}
