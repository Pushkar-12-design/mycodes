#include <stdio.h>

// Function to merge two sorted arrays
void mergeArrays(double arr1[], int len1, double arr2[], int len2, double result[], int *resultLen) {
    int i = 0, j = 0, k = 0;

    // Merge arrays while removing duplicates
    while (i < len1 && j < len2) {
        if (arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        } else if (arr1[i] > arr2[j]) {
            result[k++] = arr2[j++];
        } else {
            result[k++] = arr1[i++];
            j++;
        }
    }

    // Copy remaining elements from arr1
    while (i < len1) {
        result[k++] = arr1[i++];
    }

    // Copy remaining elements from arr2
    while (j < len2) {
        result[k++] = arr2[j++];
    }

    *resultLen = k;
}

int main() {
    double arr1[] = {-10.5, -1.8, 3.5, 6.3, 7.2};
    double arr2[] = {-1.8, 3.1, 6.3};
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);
    double result[len1 + len2];
    int resultLen;

    mergeArrays(arr1, len1, arr2, len2, result, &resultLen);

    printf("Result array: ");
    for (int i = 0; i < resultLen; i++) {
        printf("%g ", result[i]);
    }
    printf("\n");

    return 0;
}
