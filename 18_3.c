
#include<stdio.h>
void input(char[],char[]);
void main()
{
       char a[100],b[100];
        printf("enter first string: ");
       fgets(a,100,stdin);
       printf("\n");
       printf("enter second string: ");
       fgets(b,100,stdin);
       input(a,b);
}
void input(char c[],char d[])
{
       int i,count=0,m=0;
       while(c[i]!=0)
       {
              count++;
              i++;
       }i=0;
      while(d[i]!=0)
      {
             m++;
             i++;
      }
      if(m==count)
       printf("equal string");
      else
       printf("unequal string");
}

