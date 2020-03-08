#include <stdio.h>

int parentdouble(int parent_age);

int main()
{
    int parent_age;
    int your_age;
    printf("How old are you?");
    scanf("%d", &your_age);
    printf("How old was your parent when you were born?");
    scanf("%d", &parent_age);
    if (parent_age == your_age)
    {
        printf("Your parent is twice your age! They are %d years old.\n", parentdouble(parent_age));
    }
    else if (parent_age < your_age)
    {
        printf("You have passed the time when your parent was twice your age. That happened when your parent was %d year old.\n", parentdouble(parent_age));
    }
    else
    {
        printf("Your parent will be twice as old as you when they are %d years old.\n", parentdouble(parent_age));
    }
}

int parentdouble(int x)
{
    return x * 2;
}
