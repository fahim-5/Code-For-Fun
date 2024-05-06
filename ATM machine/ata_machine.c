#include<stdio.h>
 int main(){
     
 
 
     float x, y;
    char ch;
    printf("enter your intial amount:\n");
    scanf("%f", &x);
    printf("Enter a for cerdit   :\nEnter b for devit\n enter c for knoew your amomunt\n");

    scanf("%s", &ch);

    switch (ch)
    {
    case 'a':
        printf("enter how much amount you want to credit=\n");
        scanf("%f", &y);
        x = x + y;
        printf("Your new ammount is=%f", x);
        break;
    case 'b':
        printf("Enter how much mony you want to devit:\n");
        scanf("%f", &y);
        if (x >= y)
        {
            x = x - y;
            printf("Your new ammount is=%f", x);
        }
        else
        {
            printf("insufficent blace\n");
        }
        break;

    case 'c':

        printf("your ammount is : %f", x);
        break;

    default:
        printf("press the right button");
    }

    return 0;
}

