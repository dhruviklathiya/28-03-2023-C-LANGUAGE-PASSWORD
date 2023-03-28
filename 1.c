#include <stdio.h>
#include <string.h>
int main()
{ 
    char a[] = "abc@gmail.com";
    char b[] = "!@#$%^";
    char c[20],d[20];
    printf("Enter email address: ");
    scanf("%s",c);
    printf("Enter password: ");
    scanf("%s",d);
    int j,s;
    s = strcmp(a,c);
    j = strcmp(b,d);
    if(s==0 && j==0)
    {
        printf("Access Accepted");
    }
    else
    {
        printf("Access Denied");
    }
    return 0;
}
