/*wap to convert string in uppercase*/
#include<stdio.h>
void main(){
    char a[100];

    printf("enter any string:");
    scanf("%s",&a);

    for(int i=0;a[i]!='\0';i++){
        if(a[i]>=97 && a[i]<=122){
            a[i]=a[i]-(32);
        }
    }
    printf("%s",a);
}