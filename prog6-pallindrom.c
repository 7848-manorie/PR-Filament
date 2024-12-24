/*wap to check whether string is palindrome or not without using string fucntions*/
#include<stdio.h>
void main(){
    char str[30];
    int i,length=0;

    printf("enter any string:");
    scanf("%s",&str);

    for(i =0; str[i]!= '\0';i++){
        length++;
    }
    int flag=1;
    for(i=0; i<length/2; i++){
        if( str[i]!=str[length-1-i]){
             flag=0;
            break;
        }
    }
    if(flag == 1){
        printf("given string is a palindrome");
    }
    else{
        printf("given string is not a palindrome");
    }
}