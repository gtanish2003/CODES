#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char str[100];
    int lower=0, upper=0 , special=0;
    char c;
    printf("Enter string \n");
    gets(str);
    fp=fopen("exp.txt","w");
    if (fp==NULL)
    {
        printf("File does not exist \n");
        exit (1);

    }
    fputs(str,fp);
fclose(fp);
fp=fopen("exp.txt","r");
    if (fp==NULL)
    {
        printf("File does not exist \n");
        exit (1);
        }
        while ((c=fgetc(fp))!=EOF)
        {
            int a=c;
            if (a>=97 &&c<=122)
            {
                lower++;

            }
            else if (a>=65 && a<=90)
            upper++;
            else 
            special ++;
        }
printf("Lower=%d \n ", lower);
printf("Upper=%d \n ", upper);
printf("Special=%d \n ", special);
fclose(fp);
printf("Successfully closed");
}