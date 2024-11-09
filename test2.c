/*
整数排序程序
输入：一个整数n，接着输入n个整数
输出：升序排序后的整数
*/
#include <stdio.h>

int main() {
    int arr[1000];
    int size;

    printf("Enter the number of integers (不超过999): ");
    scanf("%d", &size);

    printf("Enter integers: ");
    int i;
    i = 0;
    while (i < size) {
        scanf("%d", &arr[i]);
        i = i + 1;
    }

    // 排序
    i = 0;
    while (i < size - 1) {
        int j;
        j = 0;
        while (j < size - i - 1) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            j = j + 1;
        }
        i = i + 1;
    }

    // 输出排序后的结果
    printf("Sorted integers: ");
    i = 0;
    while (i < size) {
        printf("%d,", arr[i]);
        i = i + 1;
    }
    
    return 0;
}