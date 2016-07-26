#include <stdio.h>

double pi = 3.14;

void my_fnc() {
    pi = 3.1416; /* এখানে আমরা pi-এর মান একটু পরিবর্তন করে দিলাম */
    return; /* ফাংশনের রিটার্ন টাইপ void হলে এই return; না দিলেও কিন্তু চলে */
}

int main() {
    printf("%lf\n", pi); /* এখানে pi-এর মান হবে 3.14 */
    my_fnc();
    printf("%lf\n", pi); /* এখানে pi-এর মান হবে 3.1416 কারণ আমরা সেটি my_fnc ফাংশনে গিয়ে বদলে দিয়েছি। */
    return 0;
}
