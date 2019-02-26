#include "fact.h"

long MyMath::factorial(int n) {
    if (n < 0)
        return 0;

    long product = 1;
    for (int i = n; i > 1; i--) {
        product *= i;
    }
    return product;
}
