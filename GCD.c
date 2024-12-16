#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

//αναδρομικός αλγόριθμος του Ευκλείδη
long long int gcd(long long int a, long long int b) {
    if (b == 0) {
        return a < 0 ? -a : a; // θετικό αποτέλεσμα
    } else {
        return gcd(b, a % b);
    }
}

int main(int argc, char *argv[]) {
    // Έλεγχος αν ο αριθμός των ορισμάτων είναι σωστός
    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }

    // Μετατροπή των ορισμάτων σε long long int
    long long int num0 = atoll(argv[1]);
    long long int num1 = atoll(argv[2]);

    // Έλεγχος για το εύρος των αριθμών
    if (num0 == 0 || num1 == 0) {
        return 1; // κωδικός εξόδου 1 αν οποιοσδήποτε αριθμός είναι 0
    }
    if (num0 < -1000000000000000000LL || num0 > 1000000000000000000LL || 
        num1 < -1000000000000000000LL || num1 > 1000000000000000000LL) {
        printf("Input numbers out of range.\n");
        return 1;
    }

    // Υπολογισμός του GCD και εμφάνιση του αποτελέσματος
    long long int result = gcd(num0, num1);
    printf("gcd(%lld, %lld) = %lld\n", num0, num1, result);

    return 0;
}
