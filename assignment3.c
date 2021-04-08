#include <stdio.h>

int bubble_sort(int arr[], int count);

int main() {
    int array[6];
    int bubble;
    printf("값을 입력하세요 : ");
    for (int i = 0; i < 6; i++) 
    {
        scanf("%d", &array[i]);
    }
    bubble = bubble_sort(array, 6);
    for (int j = 0; j < 6; j++)
    {
        printf("%d ", array[j]);
    }
    return 0;
}

int bubble_sort(int arr[], int count) {
    int temp;

    for (int i = 0; i < count; i++)   
    {
        for (int j = 0; j < count - 1; j++)  
        {
            if (arr[j] > arr[j + 1])          
            {                                
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;            
            }
        }
    }
    return 0;
}