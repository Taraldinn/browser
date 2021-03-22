#include <stdio.h>
int main()
{
    int arr[100];
    int length = sizeof(arr) / 4;
    int position[50];
    int positionlength = sizeof(arr) / 4;
    int positionSize = 0;
    int indexNumber;
    int value;
    int flag = 0;

    while (1) // no breakcondition
    {
        //index form user
        printf("enter the index number : ");
        scanf("%d", &indexNumber);
        //no validation break
        if (indexNumber < 0)
        {
            printf("Breaking loop\n");
            break;
        }

        if (indexNumber >= 100)
        {
            printf("array index out of bount\n");
            continue;
        }
        //value from user
        printf("enter value : ");
        scanf("%d", &value);

        arr[indexNumber] = value;
        //task
        position[positionSize] = indexNumber;
        //task
        positionSize++;
    }
    for (int i = 0; i < positionSize; i++)
    {
        printf("index %d <--> value %d\n", position[i], arr[position[i]]);
    }
}