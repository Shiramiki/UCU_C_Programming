#include <stdio.h>

#define MAX_SIZE 100

void initializeArray(int arr[], int size);
void printArray(int arr[], int size);
int findMaximum(int arr[], int size);
int findMinimum(int arr[], int size);
int calculateSum(int arr[], int size);
float calculateAverage(int arr[], int size);
int searchElement(int arr[], int size, int element);

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice, answer;

    do {
        printf("Menu:\n");
        printf("1 Initialize an array\n");
        printf("2. Print the array\n");
        printf("3. Find the maximum element in the array\n");
        printf("4. Find the minimum element in the array\n");
        printf("5. Calculate the sum of all elements in the array\n");
        printf("6. Calculate the average of all elements in the array\n");
        printf("7. Search for a specific element in the array\n");
        printf("8. Exit the program\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the size of the array (maximum %d): ", MAX_SIZE);
                scanf("%d", &size);
                initializeArray(arr, size);
                printf("Array initialized.\n");
                printf("Do you want to go back to the menu now\n 1 for yes");
                scanf("%d", answer);
                if (answer == 1)
                {
                    break;
                }
                

            case 2:
                printArray(arr, size);
                printf("\n");
                printf("Do you want to go back to the menu now\n 1 for yes");
                scanf("%d", answer);
                if (answer == 1)
                {
                    break;
                }

            case 3:
                printf("Maximum element: %d\n", findMaximum(arr, size));
                printf("Do you want to go back to the menu now\n 1 for yes");
                scanf("%d", answer);
                if (answer == 1)
                {
                    break;
                }

            case 4:
                printf("Minimum element: %d\n", findMinimum(arr, size));
                printf("Do you want to go back to the menu now\n 1 for yes");
                scanf("%d", answer);
                if (answer == 1)
                {
                    break;
                }

            case 5:
                printf("Sum of elements: %d\n", calculateSum(arr, size));
                printf("Do you want to go back to the menu now\n 1 for yes");
                scanf("%d", answer);
                if (answer == 1)
                {
                    break;
                }

            case 6:
                printf("Average of elements: %.2f\n", calculateAverage(arr, size));
                printf("Do you want to go back to the menu now\n 1 for yes");
                scanf("%d", answer);
                if (answer == 1)
                {
                    break;
                }

            case 7:
                printf("Enter the element to search: ");
                int element;
                scanf("%d", &element);
                int index = searchElement(arr, size, element);
                if (index == -1) {
                    printf("Element not found in the array.\n");
                } else {
                    printf("Element found at index %d.\n", index);
                }
                printf("Do you want to go back to the menu now\n 1 for yes");
                scanf("%d", answer);
                if (answer == 1)
                {
                    break;
                }

            case 8:
                printf("Exiting the program...\n");
                printf("Do you want to go back to the menu now\n 1 for yes");
                scanf("%d", answer);
                if (answer == 1)
                {
                    break;
                }
                
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 8);

    return 0;
}

void initializeArray(int arr[], int size) {
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        printf("left to Enter %d elements: \n", size-i-1);
    }
}

void printArray(int arr[], int size) {
    if (size == 0)
    {
        printf("You have not initialised your array. Please intialise your array");

    }
    else
    {
        printf("Array elements: ");
        for (int i = 0; i < size; i++) {
        printf("%d\n ", arr[i]);
        }
        printf("\n");
    }
    
}

int findMaximum(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int findMinimum(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

float calculateAverage(int arr[], int size) {
    int sum = calculateSum(arr, size);
    return (float) sum / size;
}

int searchElement(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    
}