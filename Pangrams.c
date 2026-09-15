char* pangrams(char* s) {
    int n = sizeof(s);
    int sum = 0;
    int freq[26] = {0};
    
    for(int i=0; s[i]!=NULL ; i++){
        if(isalnum(s[i])){
            if(isupper(s[i])){
                s[i] = tolower(s[i]);
            }
            freq[s[i] - 'a'] = 1;
        }
    }
    for(int i=0; i<26; i++){
        sum += freq[i];
    }
    if(sum == 26){
        return "pangram";
    } else {
        return "not pangram";
    }
    
}
