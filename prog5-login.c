/*wap to create a login mechanism by entering the right email & password
you can compare it with your desired email & password*/
#include<stdio.h>
#include<string.h>
void main(){
    char myemail[]="admin@gmail.com",mypass[]="123456";
    char newemail[30],newpass[30],successmail=0,successpass=0;

    printf("enter your email:");
    scanf("%s",&newemail);

    printf("enter your password:");
    scanf("%s",&newpass);

    successmail=strcmp(newemail,myemail);
    successpass=strcmp(newpass,mypass);
    if(successmail==0 && successpass==0){
        printf("Login Successful");
    }
    else{
        printf("Login failed!! Incorrect email or password");
    }   
}
