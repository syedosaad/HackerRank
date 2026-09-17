char* twoStrings(char* s1, char* s2) {
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    int freq1[26] = {0};
    int freq2[26] = {0};
    
    for(int i = 0; i<n1; i++){
        if(isupper(s1[i])){
            s1[i] = tolower(s1[i]);
        }
        freq1[s1[i] - 'a'] = 1;
    }
    for(int j=0; j<n2; j++){
        if(isupper(s2[j])){
            s2[j] = tolower(s2[j]);
        }
        freq2[s2[j] - 'a'] = 1;
    }
    for(int i=0; i<26; i++){
        if(freq1[i] &  freq2[i]){
            return "YES";
            break;
        }
    }
    return "NO"; 
    
}
