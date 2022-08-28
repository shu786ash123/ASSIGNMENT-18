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
       while(b[i]!=0)
       {
              count++;
              i++;
       }
       printf("given string in a reverse way is:\n");
       for(i=count;i>=0;i--)
              printf("%c",b[i]);
}

