#include <stdio.h>
int array_sort()
{
    int array[100];
    int i, j;
    int temp;
    int user_Input_Amount;
    int user_Input_if_block;
    printf("How many numbers total would you like to enter into the array?\n");
    scanf("%d", &user_Input_Amount);
    printf("Please enter the numbers that will be put into the array:\n");
    for (i = 0; i < user_Input_Amount; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("This is your array of numbers that you entered:\n");
    for (i = 0; i < user_Input_Amount; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nType 1 to Ascend or 2 to Descend the order:");
    scanf("%d", &user_Input_if_block);
    if (user_Input_if_block == 1)
    {
        for(i = 0; i < user_Input_Amount; i++)
        {
            for(j = 0; j < user_Input_Amount; j++)
            {
                if (array[j] > array[i])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
        printf("Your sorted array in ascending order is: \n");
        for (i = 0; i < user_Input_Amount; i++)
        {
            printf("%d\n", array[i]);
        }
    }
    else if (user_Input_if_block == 2)
    {
        for (i = 0; i < user_Input_Amount; i++)
        {
            for (j = 0; j < user_Input_Amount; j++)
            {
                if (array[j] < array[i])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
        printf("Your sorted array in descending order is: \n");
        for (i = 0; i < user_Input_Amount; i++)
        {
            printf("%d\n", array[i]);
        }
    }
    else
    {
        printf("Error, run the program again");
    }
    return 0;
}


int main()
{
    array_sort();
    return 0;
}
