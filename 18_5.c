#include<stdio.h>
void main()
{
       char a[100];
       printf("enter a string:  \n");
       fgets(a,100,stdin);
       input (a);
}
void input (char b[])
{
       int i;
       while(b[i]!='\0'){
       if(b[i]<='Z'&& b[i]>='A'){
          b[i]=  b[i]+32;}
          i++;
       }printf("GIVEN STRING IN LOWER CASE IS:  \n ");
          for(i=0;b[i]!=0;i++)
            printf("%c",b[i]);

}

