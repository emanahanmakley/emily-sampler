#include <stdio.h>

int main()
{
    int color;
    printf("Please enter your favorite.\n 1 is red\n 2 is orange\n 3 is yellow\n 4 is green\n 5 is blue\n 6 is purple\n 7 is black\n 8 is brown\n 9 is white:\n");
    scanf("%d", &color);
    if (color == 1)
    {
        printf("You must have good luck!\n");
    }
    else if (color == 2)
    {
        printf("A beautiful choice.\n");
    }
    else if (color == 3)
    {
        printf("Sunny like you!\n");
    }
    else if (color == 4)
    {
        printf("Reminds me of walks in the woods. Aaah nature!\n");
    }
    else if (color == 5)
    {
        printf("Like the sea!\n");
    }
    else if (color == 6)
    {
        printf("How regal of you!\n");
    }
    else
    {
        printf("Some may say that's a boring choice, but I support you!\n");
    }
    return 0;
}
