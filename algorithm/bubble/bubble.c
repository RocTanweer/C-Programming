#include <stdio.h>

#define NUM_OF_ELEMENTS 10

void bubbleSort(int arr[]);
void swap(int *a, int *b);

int main()
{
    // init array of 10 integers randomly ordered
    int numbers[NUM_OF_ELEMENTS];

    for (int i = 0; i < NUM_OF_ELEMENTS; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &numbers[i]);
    }

    bubbleSort(numbers);

    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", numbers[i]);
    }

    return 0;
}

void bubbleSort(int arr[])
{
    for (int i = 0; i < NUM_OF_ELEMENTS; i++)
    {
        for (int j = 0; j < NUM_OF_ELEMENTS - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}