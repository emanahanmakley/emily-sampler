#include <stdio.h>
int sum(int a, int b, int c, int d, int e, int f, int h, int i, int j, int k);
int main()
{
    printf("For this quiz, you will use a scale from 1 to 5.\n 1 = not at all like me\n 3 = neither like me nor unlike me\n 5 = very much like me.\n");
    int a;
    printf("a. I consider myself an introvert.");
    scanf("%d", &a);
    int b;
    printf("b. It takes me a long time to warm up to strangers.");
    scanf("%d", &b);
    int c;
    printf("c. I consider myself to be a provider.");
    scanf("%d", &c);
    int d;
    printf("d. I prefer to lead rather than follow.");
    scanf("%d", &d);
    int e;
    printf("e. I am fascinated by tiny things.");
    scanf("%d", &e);
    int f;
    printf("f. I am coordinated and quick on my feet.");
    scanf("%d", &f);
    int g;
    printf("g. I use urine to leave messages.");
    scanf("%d", &g);
    int h;
    printf("h. Having a home base or sense of place is very important to me.");
    scanf("%d", &h);
    int i;
    printf("i. I don't really like to be in water.");
    scanf("%d", &i);
    int j;
    printf("j. If I am angered, I often lash out.");
    scanf("%d", &j);
    int k;
    printf("k. I enjoy yarn and string.");
    scanf("%d", &k);
    int l;
    printf("l.I love to be outside!");
    scanf("%d", &g);
    int result = sum(a, b, c, d, e, f, h, i, j, k);
    if (result < 25)
    {
        printf("Your score was %d. You are more dog-like than cat-like. Woof!\n", result);
    }
    else if (result > 34)
    {
        printf("Your score was %d. You are more cat-like than dog-like. Meow!\n", result);
    }
    else
    {
        printf("Your score was %d. You have a similar strength of cat traits and dog traits. May we say catdog? Mewoofow!\n", result);
    }

    return 0;
}
int sum(int a, int b, int c, int d, int e, int f, int h, int i, int j, int k)
{
    return a + b + c + d + e + f + h + i + j + k;
}
