// status: AC 100/100
// github.com/w3cp/
// http://algo.codemarshal.org/problems/556c9f097b4cec0300d4ab93

#include <stdio.h>
#include <string.h>

int charToInteger(char ch);
int sumOfDigit(char num[], int length);
int isDividedBy3(char num[], int length);
int isDividedBy5(char num[], int length);

#define TOTAL_DIGIT 10
int num_char[2][TOTAL_DIGIT] = {{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, {48, 49, 50, 51, 52, 53, 54, 55, 56, 57}};

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc = 0;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        char num[100001];
        int length;
        
        scanf("%s", num);
        length = strlen(num);
        
        printf("Case %d: ", current_tc + 1);
        
        if (isDividedBy3(num, length) && isDividedBy5(num, length)) printf("FizzBuzz\n");
        else if (isDividedBy3(num, length) && !isDividedBy5(num, length)) printf("Fizz\n");
        else if (isDividedBy5(num, length) && !isDividedBy3(num, length)) printf("Buzz\n");
        else printf("Null\n");
        
        current_tc++;
    }
    
    return 0;
} // end main


int charToInteger(char ch) {
    int i;
    int n = ch;
    for (i = 0; i < TOTAL_DIGIT; i++) {
        if (num_char[1][i] == n) return num_char[0][i];
    }
} // end charToInteger

int sumOfDigit(char num[], int length) {
    int i;
    int sum = 0;
    for (i = 0; i < length; i++) sum += charToInteger(num[i]);
    return sum;
} // end sumOfDigit

int isDividedBy3(char num[], int length) {
    int sum = sumOfDigit(num, length);
    if (sum % 3 == 0) return 1;
    return 0;
} // end isDividedBy3

int isDividedBy5(char num[], int length) {
    char last_digit = num[length - 1];
    if (last_digit == '0' || last_digit == '5') return 1;
    return 0;
} // end isDividedBy5
