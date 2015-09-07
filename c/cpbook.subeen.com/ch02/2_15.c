/*
// program : 2.15

// 2015-09-07-07-58

// code cpbook.subeen.com

// MD ANWAR HOSSAIN 
// http://w3cp.blogspot.com

// https://github.com/w3cp/
// https://github.com/w3cp/coding/
*/


 #include <stdio.h>  
 
 int main()  
 {  
     int num1, num2, value;  
     char sign;  
     printf("Please enter a number: ");  
     scanf("%d", &num1);  
     printf("Please enter another number: ");  
     scanf("%d", &num2);  
     value = num1 + num2;  
     sign = '+';  
     printf("%d %c %d = %d\n", num1, sign, num2, value);  
     value = num1 - num2;  
     sign = '-';  
     printf("%d %c %d = %d\n", num1, sign, num2, value);  
     value = num1 * num2;  
     sign = '*';  
     printf("%d %c %d = %d\n", num1, sign, num2, value);  
     value = num1 / num2;  
     sign = '/';  
     printf("%d %c %d = %d\n", num1, sign, num2, value);  
     return 0;  
 }  
