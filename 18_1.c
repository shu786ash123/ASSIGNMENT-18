#include<stdio.h>
void input(char[]);
void main()
{
       char a[100];
        printf("enter a string:");
       fgets(a,100,stdin);
       input(a);
}
void input(char b[])
{
       int i,count=0;
       while(b[i]!='\0')
       {

              i++;
                 count++;
       }count = count-1;
       printf("length of the string is:  \n%d",count);
}

