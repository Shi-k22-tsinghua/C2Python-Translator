/*
回文检测程序
输入：一个字符串
输出：True/False，表示输入的字符串是否为回文字符串
*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000]; // 假设输入的字符串长度不超过999
    printf("Enter a string: ");
    scanf("%999s", s); // 读取字符串，最多读取999个字符

    int left = 0;
    int right = strlen(s) - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            printf("%s is palindrome: False\n", s);
            return 0;
        }
        left++;
        right--;
    }
    printf("%s is palindrome: True\n", s);
    return 0;
}