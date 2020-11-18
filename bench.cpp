
#include <iostream>

#define ARRAY 4096
#define COUNT 1000000

int main()
{
    std::cout << "Hello, Benchmark!\n";
    srand(0);
    float A[ARRAY], B[ARRAY];
    for (int i = 0; i < ARRAY; i++) {
        A[i] = (float) rand();
        B[i] = (float) rand();
    }
    for (int i = 0; i < COUNT; i++) {
        for (int j = 0; j < ARRAY; j++) {
            for (int k = ARRAY - 1; k < 0; k--) {
                float a = A[j] + B[k];
                float b = A[j] * B[k];
                float c = A[j] / B[k];
            }
        }
    }

    return 0;
}
