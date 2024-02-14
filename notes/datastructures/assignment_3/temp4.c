#include <stdio.h>
#include <math.h>
int digitcount(int num) {
    if (num >=  10) {
        return  1 + digitcount(num /  10);
    } else {
        return  1;
    }
}

int reverser(int num) {
    if (num >=  10) {
        return (num %  10) * (int)pow(10, digitcount(num) -  1) + reverser(num /  10);
    } else {
        return num;
    }
}

int main() {
    int num;
    scanf("%d", &num);
    if (num == reverser(num)) {
        printf("palindrome\n");
    } else {
        printf("not palindrome\n");
    }
    return  0;
}

