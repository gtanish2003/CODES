#include<stdio.h>
/*Calculating the length of the string without using strlen()
int  main()

{
    char s1[20];
    int i=0,count =0 ;
    printf("Enter the string \n");
    scanf("%s",&s1);
    while (s1[i]!='\0')
    {
       count ++;
        i++;
    }
    printf("The length of the string is %d", count);
}*/

/*Concatenation of a string
int main()
{
    char s1[20], s2[20], s3[40] ;
    int i=0 , j=0;
    printf("Enter the string 1 \n");
    scanf("%s",&s1);
    printf("Enter the string 2 \n");
    scanf("%s",&s2);
    while (s1[i]!='\0')
    {
        s3[j]=s1[i];
        i++;
        j++;
    }
    i=0;
    while (s2[i]!='\0')
    {
        s3[j]=s2[i];
        i++;
        j++;
    }
    s3[j]='\0';
    printf("The concatenated string is %s",s3);
}*/


/*Reverse of a string
int main()
{
    char str[20] ,revstr[20];
    int i,j,count =11;
    printf("Enter the string \n");
    scanf("%s",&str);
    j=0;
    for (i=count-1;i>=0;i--)
    {
        revstr[j]=str [i];
        j++;
    }
    revstr[j]='\0';
    printf("The reversed string is %s",revstr);

}*/


/*To copy one string into second string
int main()
{
    char str[20], cpstr[20];
    int i,j,count=11;
    printf("Enter string\n");
    scanf("%s",&str);
    j=0;
    for (i=0;i<=count-1;i++)
    {
        cpstr[j]=str[i];
        j++;
    }
    cpstr[j]='\0';
    printf("The string after copy is %s",cpstr);
}
*/