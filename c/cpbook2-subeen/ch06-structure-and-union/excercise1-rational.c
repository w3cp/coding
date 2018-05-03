#include <stdio.h>

typedef struct {
    int p;
    int q;
} Rational;

int gcd(int a, int b)
{
    int temp;
    if (a == 0) return b;
    else if (b == 0) return a;
    else {
        while (b != 0) {
            temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int fractions_equality(Rational num1, Rational num2)
{
    int denominator = lcm(num1.q, num2.q);
    int numerator1 = (denominator / num1.q) * num1.p;
    int numerator2 = (denominator / num2.q) * num2.p;
    
    if (numerator1 == numerator2) return 1;
    return 0;
}

Rational rational_add_or_subtract(Rational num1, Rational num2, char ops) {
    Rational result;
    
    int denominator = lcm(num1.q, num2.q);
    int numerator1 = (denominator / num1.q) * num1.p;
    int numerator2 = (denominator / num2.q) * num2.p;
    
    if (ops == 'a') result.p = numerator1 + numerator2;
    else if (ops == 's') result.p = numerator1 - numerator2;
    
    result.q = denominator;
    
    return result;
}

Rational rational_divide_or_multiply(Rational num1, Rational num2, char ops)
{
    int temp;
    Rational result;
    
    if (ops == 'd') {
        temp = num2.p;
        num2.p = num2.q;
        num2.q = temp;
    }
    
    result.p = num1.p * num2.p;
    result.q = num1.q * num2.q;
    
    return result;
}

int main()
{
    Rational num1, num2;
    printf("Enter the numerator of num1: ");
    scanf("%d", &num1.p);
    printf("Enter the denominator of num1: ");
    scanf("%d", &num1.q);
    printf("Enter the numerator of num2: ");
    scanf("%d", &num2.p);
    printf("Enter the denominator of num2: ");
    scanf("%d", &num2.q);
    
    Rational result;
    
    result = rational_add_or_subtract(num1, num2, 'a');
    printf("Addition: %d/%d\n", result.p, result.q);
    
    result = rational_add_or_subtract(num1, num2, 's');
    printf("Subtraction: %d/%d\n", result.p, result.q);
    
    result = rational_divide_or_multiply(num1, num2, 'm');
    printf("Multiplication: %d/%d\n", result.p, result.q);
    
    result = rational_divide_or_multiply(num1, num2, 'd');
    printf("Division: %d/%d\n", result.p, result.q);
    
    if (fractions_equality(num1, num2)) {
        printf("%d/%d == %d/%d\n", num1.p, num1.q, num2.p, num2.q);
    }
    else {
        printf("%d/%d != %d/%d\n", num1.p, num1.q, num2.p, num2.q);
    }
    
    
    return 0;
}