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
       int i,d=0,a=0;
     for(i=0;b[i];i++)
     {
            if('a'<=b[i]&&b[i]<='z' || b[i]>='A'&&b[i]<='Z')
              a=1;
            if(b[i]>='0'&&b[i]<='9')
              d=1;
     }


       if(a==1&&d==1)
              printf("%s is an alphanumeric string",b);
       else
              printf("%s is not an alphanumeric string",b);

}


