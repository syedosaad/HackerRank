#include <stdio.h>
#include <string.h>
#include <ctype.h>

int atoi(char *s){
        int n = strlen(s);
        int value = 0;
        int i = 0;
        int negative = 0;

        while((i<n) && s[i] == ' '){
                i++;
        }
        if(s[i] == '-'){
                negative = 1;
                i++;
        } else if(s[i] == '+'){
                negative = 0;
                i++;
        }
        while((i<n) && isdigit(s[i])){
                int digit = s[i] - '0';
                value = value*10+digit;
                i++;
        }
        if(negative){
                return -value;
        }
        return value;
};

int main(){
        char b[20] = "    -20";
        int c = atoi(b);
        printf("%d",c);
}
