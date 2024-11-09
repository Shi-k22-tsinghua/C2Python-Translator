/*
回文检测程序
输入：一个字符串
输出：True/False，表示输入的字符串是否为回文字符串
*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000]; // 假设输入的字符串长度不超过999
    printf("Enter a string: (max 999 characters)");
    scanf("%s", s); // 读取字符串，最多读取999个字符

    int left;
    int right;
    int len;

    len = strlen(s);
    left = 0;
    right = len - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            printf("False");
            return 0;
        }
        left = left + 1;
        right = right - 1;
    }
    printf("True");
    return 0;
}