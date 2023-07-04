#include <stdio.h>
#include "operations.h"

void testAddition(){
    printf("\n1 + 2 = %d", addition(1, 2));
    printf("\n13 + 5 = %d", addition(13, 5));
    printf("\n-5 + 9 = %d", addition(-5, 9));
}

void testSoustraction(){
    printf("\n1 - 12 = %d", addition(1, 12));
    printf("\n12 - 1 = %d", addition(12, 1));
    printf("\n-10 - 5 = %d", addition(-10, -5));
}

void testMultiplication(){
    printf("\n2 * 2 = %d", multiplication(2, 2));
    printf("\n2 * 5 = %d", multiplication(2, 5));
    printf("\n61 * -12 = %d", multiplication(61, -12));
}

void testDivision(){
    printf("\n3 / 2 = %d", addition(3, 2));
    printf("\n0 / 3 = %d", addition(0, 3));
    printf("\n-10 / 5 = %d", addition(-10, 5));
}

int main(){
    testAddition();
    testSoustraction();
    testMultiplication();
    testDivision();

    return 0;

}