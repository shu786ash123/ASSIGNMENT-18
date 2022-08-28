#include<stdio.h>
void input(char[]);
void main()
{
       char a[100];
       printf("enter word as a string form:  ");
       fgets(a,100,stdin);
       input(a);


}
void input(char b[])
{
       int i,count=0;
       for(i=0;b[i];i++)
       {
              if(b[i]==' '&&b[i+1]!=' ')
                     count++;
       }
       printf("word counting  in a given sentence is:  %d ",count+1);
}
