#include <stdio.h>
struct student
{
    char firstName[50];
    int roll;
    float marks;
} s[3];

int length = 3;

void insert()
{
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < length; ++i)
    {

        printf("Enter roll no :");
        scanf("%d", &s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
}

void del(int index)
{
    int i;
    struct student x = s[index];
    for (i = index; i < length - 1; i++)
    {
        s[i] = s[i + 1];
    }
    length--;
}

void display()
{
    int i;

    for (i = 0; i < length; ++i)
    {
        printf("\nRoll number: %d\n", s[i].roll);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %f", s[i].marks);
        printf("\n");
    }
}

void reverse()
{
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        struct student temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int main()
{
    struct student s;

    insert();
    printf("Initially, student information is as follows:\n");
    display();

    del(2);
    printf("After deleting :\n");
    display();

    reverse();
    printf("After reversing:\n");
    display();
    return 0;
}