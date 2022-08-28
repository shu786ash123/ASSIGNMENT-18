#include<stdio.h>
#include<string.h>
void input(char []);
int main()
{
    char a[20];
    printf("enter string:  ");
    gets(a);
    input(a);
}
void input(char b[])
{
    int freq[150]={0};
    int i=0;
    while (b[i]!= '\0')
    {
           freq[b[i]]++;     // freq[a[i++]]++;write this also
           i++;

    }printf("repeated character in a given string is:  \n");
    for(i=0;i<150;i++)
    {
           if(freq[i]!=0&&freq[i]==2||freq[i]==3)

              printf("%c ==> %d\n",i,freq[i]);
    }
    return 0;
}

