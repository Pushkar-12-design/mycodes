#include <stdio.h>

void mergeArrays(double arr1[], int len1, double arr2[], int len2, double result[], int *resultLen) {
    int i = 0, j = 0, k = 0;

    while (i < len1 && j < len2) {
        if (arr1[i] < arr2[j]) {
            if (k == 0 || result[k - 1] != arr1[i]) {
                result[k++] = arr1[i];
            }
            i++;
        } else if (arr1[i] > arr2[j]) {
            if (k == 0 || result[k - 1] != arr2[j]) {
                result[k++] = arr2[j];
            }
            j++;
        } else {
            if (k == 0 || result[k - 1] != arr1[i]) {
                result[k++] = arr1[i];
            }
            i++;
            j++;
        }
    }

    while (i < len1) {
        if (k == 0 || result[k - 1] != arr1[i]) {
            result[k++] = arr1[i];
        }
        i++;
    }

    while (j < len2) {
        if (k == 0 || result[k - 1] != arr2[j]) {
            result[k++] = arr2[j];
        }
        j++;
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
