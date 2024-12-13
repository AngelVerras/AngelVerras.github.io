#include <stdio.h>

int num0,num1; 

int gcd(int a, int b){ // Συνάρτηση ΜΚΔ Ευκλίδη

  if(b==0){
    return a;
  }  else{
        return gcd(b, a%b);
  }
}

int main(){ //Κύρια Συνάρτηση
   int num0,num1; 
    printf("Give the first number: "); // Εισαγωγή πρώτου αριθμού
    scanf("%d", &num0);

    printf("Give the second number: "); // Εισαγωγή δεύτερου αριθμού
    scanf("%d", &num1);

    int sum = gcd(num0,num1); // Υπολογισμός συνάρτησης

    printf("The GCD of %d and %d is: %d\n", num0, num1, sum); // Εμφάνιση αποτελέσματος συνάρτησης

    return 0;


}
