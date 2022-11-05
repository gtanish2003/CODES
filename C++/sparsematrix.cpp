#include <stdio.h>
#include <stdlib.h>
struct element
{
    int row;
    int col;
    int value;
};

struct sparse
{
    int m;
    int n;
    int num;
    struct element *e;
};

void create(struct sparse *s)
{
    int i;
    printf("Enter the no.of rows i.e.m \n");
    scanf("%d", &s->m);

    printf("Enter the no.of columns i.e.n \n");
    scanf("%d", &s->n);

    printf("Enter no. of non zero elements i.e.num \n");
    scanf("%d",&s->num);

    s->e= (struct element *)malloc(s->num*sizeof(struct element ));

    printf("Enter all elements \n");

    for(i=0;i<s->num;i++){
        scanf("%d %d %d",&s->e[i].row,&s->e[i].col,&s->e[i].value);
    }
}


void display(struct sparse s){
    int i,j,k=0;
    for(i=1;i<=s.m;i++){
        for(j=1;j<=s.n;j++){
            if (i==s.e[k].row  &&  j==s.e[k].col)
            {
                printf("\t %d \t",s.e[k++].value);

            }

            else 
            printf("\t 0 \t");

         
        }
        printf("\n");
    }
}

struct sparse * add(struct sparse *s1,struct sparse *s2){
    struct sparse *sum;
    sum=(struct sparse*)malloc(sizeof(struct sparse));
    sum->e=(struct element *)malloc ((s1->num+s2->num)*sizeof(struct element));
    int i=0,j=0,k=0;
    while(i<s1->num  && j<s2->num)
{
    if (s1->e[i].row  <  s2->e[j].row)
    {
        sum->e[k]=s1->e[i];
        k++;
        i++;

    }

    else if (s1->e[i].row  >  s2->e[j].row)
    {
        sum->e[k]=s2->e[j];
        k++;
        j++;
        
    }

    else {
        if (s1->e[i].col  <  s2->e[j].col)
        {
            sum->e[k]=s1->e[i];
            k++;
            i++;
        }

        else if (s1->e[i].col  > s2->e[j].col)
        {
            sum->e[k]=s2->e[j];
            k++;
            j++;
        }

        else 
        {
            sum->e[k]=s1->e[i];
            sum->e[k++].value= (s1->e[i].value  + s2->e[j].value);
        }
    }
}

for (;i<s1->num;i++){
    sum->e[k++]=s1->e[i];
}

for (;j<s2->num;j++){
    sum->e[k++]=s2->e[j];
}

sum->m=s1->m;
sum->n=s1->n;
sum->num=k;

 return sum; 

}

int main()
{  struct sparse s1,s2,*s3;
create(&s1);
create(&s2);

s3=add(&s1,&s2);


printf("First matrix \n");
display(s1);
printf("\n");
printf("Second matrix is \n");
display(s2);
printf("\n");


printf("Sum matrix is \n");
display(*s3);


}