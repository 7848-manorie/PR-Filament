/*wap to count the frequency of each character in a given string*/
#include<stdio.h>
#include<string.h>
void main(){
    char str[30];
    int freq[256]={0},length,i;

    printf("enter any string:");
    gets(str);

    length=strlen(str);

    for(i=0; i<length;i++){
        if(str[i] != '\0'){
            freq[str[i]]++;
        }
    }
    printf("frequency of each letter:\n");
    for(i=0;i<256;i++){
        if(freq[i] !=0){
            printf("%c => %d\n",i,freq[i]);
        }
    }    
}