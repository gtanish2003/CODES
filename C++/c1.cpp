#include <stdio.h>
int main()

   /* for (int i =1 ; i<=10 ; i++){
        if (i==3){
            continue;
        }
        if (i==5){
            break;
        }
        printf("%d",i);

}
{
    int i;
    int a [5];
    printf("Enter values in array:");
    for (i=0 ;i<5 ; i++){
        scanf("%d",&a[i]);

    }
    printf("Elements in array are:");
    for (i=0;i<5;i++){
        printf("%d",a[i]);
    }
    return 0;


}*/
{
    int a,b ; 
    char op;
    printf(" Enter opeartor");
    scanf("%c",&op);
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    switch (op){
    case '+':
    printf("%d",(a+b));
    break ;
    case '-':
    printf("%d",(a-b));
    break;
    case '*':
    printf("%d",(a*b));
    break;
    case '/':
    printf("%d",(a/b));
    break;
    default :
    printf("enter valid operator");
    

    }


    

}
