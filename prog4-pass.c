/*write a simple c program using string functions to check if a given password is strong or not by satisfying the criteria below
- password must contain at least one letter, one digit and one special symbol
- password must be at least 6 characters*/
#include<stdio.h>
#include<string.h>
void main(){
    char pass[20];
    printf("Create your password:");
    scanf("%s",&pass);
    if(strlen(pass)>=6){
        int p;
        int lower=0,digit=0,special=0;
        p=strlen(pass);
        for(int i=0;i<p;i++){
            if(pass[i]>='a' && pass[i]<='z')
                ++lower;
            if(pass[i]>='0' && pass[i]<='9')
                ++digit;
            if(pass[i]=='!' || pass[i]=='@' ||pass[i]=='#' || pass[i]=='.')
                ++special;
        }
        if(lower>0 && digit>0 && special>0){
            printf("Your password is strong");
        }
    }
    else{
        printf("Your password is not strong");
    }
}
