#include<stdio.h>
struct employee
{
char name[20];
float basic;
float da;
float gross;
}e[5];
int  main()
{
int i;
for(i=0;i<5;i++)

 
scanf("%s%f",e[i].name,&e[i].basic);
for(i=0;i<5;i++)
{
e[i].da=52.0/100*e[i].basic;
e[i].gross=e[i].da+e[i].basic;
printf("\n name=%s gross=%f",e[i].name,e[i].gross);
}
}
