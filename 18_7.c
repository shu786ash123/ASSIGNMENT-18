#include<stdio.h>
#include<string.h>
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
       int i=0,l,count=0,j;
     l=strlen(b);
     j=l-2;
     while(i<=j)
     {
            if(b[i]!=b[j])
              break;
            i++;j--;
     }
     if(i>j)
       printf("palindrome");
     else
       printf("not a palindrome");
}

