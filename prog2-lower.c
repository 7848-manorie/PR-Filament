/*wap to convert string in lowercase*/
#include<stdio.h>
void main(){
    char a[100];

    printf("enter any string:");
    scanf("%s",&a);

    for(int i=0;a[i]!='\0';i++){
        if(a[i]>=65 && a[i]<=90){
            a[i]=a[i]+(32);
        }
    }
    printf("%s",a);
}