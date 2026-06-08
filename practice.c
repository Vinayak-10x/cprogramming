
   /* #include <stdio.h>

int main() {
    unsigned int  n,i=2,j=2;
    scanf("%d",&n);

    printf("Prime numbers between 1 and %d:\n", n);

    for( i ; i <= n; i++) {
        int isPrime = 1;
        for ( j=2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
            printf("%d ", i);
    }

    return 0;
}*/

/*#include<stdio.h>
int main(){
    unsigned int n,fact =1;
    scanf("%d",&n);
    int i=1;
    
     for(i;i<=n;i++)
        fact = fact*i;

     
     printf("factorial= %d",fact);
    }*/
#include <stdio.h>

int main() {
    int t1 = 0, t2 = 1, nextTerm = 0, limit;

    printf("Enter the limit for Fibonacci series: ");
    scanf("%d", &limit);

    printf("Fibonacci Series: ");

    // Display the first term
    if (limit >= 0) {
        printf("%d", t1);
    }

    // Display the second term if it's within the limit
    if (limit >= 1) {
        printf(", %d", t2);
    }

    nextTerm = t1 + t2;

    // Calculate and print the remaining terms up to the limit
    while (nextTerm <= limit) {
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    printf("\n");
    return 0;
}