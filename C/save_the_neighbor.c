#include <stdio.h>

int main()
{
    int decisiona;
    printf("Once upon a time there was a dark, wooded clearning. You find yourself there in search of your lost neighbor who is only 4 years old!\n");
    printf("The wood feels creepy, but you are not one to retreat. Do you:\n 1) stay in the clearing to look a little longer\n 2) run screaming back to your car?\n");
    scanf("%d", &decisiona);
    if (decisiona == 1)
    {
        int decisionb;
        printf("You decide to stick it out. Even though you have a funny feeling, you know your neighbor is more afraid than you are.\n");
        printf("You look around you. There's not much here, but you notice a shed to the left with an open door and a cornfield to the right. Do you:\n 1) Check out the shed? or\n 2)Head toward the cornfield?");
        scanf("%d", &decisionb);
        if (decisionb == 1)
        {
            printf("AAAAAAAHHHHHHHHHH You find a skeleteon and are so scared that you faint.\n GAME OVER.\n");
        }
        else
        {
            int decisionc;
            printf("You notice some trampled corn and decide to keep looking. Ahead of you, you notice a dropped mitten, but your gut tells you to go right. Do you:\n 1)Investigage the mitten? or\n 2)Follow your gut and go right?\n");
            scanf("%d", &decisionc);
            if (decisionc == 1)
            {
                printf("ALWAYS FOLLOW YOUR GUT, LOSER.\n GAME OVER\n");
            }
            else
            {
                int decisiond;
                printf("Good choice. You follow your gut and go right, and you hear a noise getting louder. It sounds kind of like a cat! Do you:\n 1)Follow the noise? or\n 2)stick with your gut and keep going straight ahead?\n");
                scanf("%d", &decisiond);
                if (decisiond == 1)
                {
                    printf("You found a cat!\n GAME OVER but at least you have saved a kitten!\n");
                }
                else
                {
                    printf("You found the boy! He was looking for his cat! Luckily, you heard the cat earlier, so you are able to lead the boy to his cat and take them both home safely.\n YOU WIN!\n"); /* code */
                }
            }
        }
    }
    else
    {
        printf("I can't believe you would leave a 4 year old alone!\n GAME OVER\n");
    }
}
