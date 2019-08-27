# Comprehensive Exploration of C Types

## size_t

size_t is an unsigned integral data type which is defined in various header files such as:

* <stddef.h>
* <stdio.h>
* <stdlib.h>
* <string.h>
* <time.h>
* <wchar.h>

It’s a type which is used to represent the size of objects in bytes and is therefore used as the return type by the sizeof operator. It is guaranteed to be big enough to contain the size of the biggest object the host system can handle. 

Basically the maximum permissible size is dependent on the compiler; if the compiler is 32 bit then it is simply a typedef(i.e., alias) for unsigned int but if the compiler is 64 bit then it would be a typedef for unsigned long long. The size_t data type is never negative.

Therefore many C library functions like malloc, memcpy and strlen declare their arguments and return type as size_t.

size_t or any unsigned type might be seen used as loop variable as loop variables are typically greater than or equal to 0.

    ```c
    // Declaration of various standard library functions. 
    
    // Here argument of 'n' refers to maximum blocks that can be 
    // allocated which is guaranteed to be non-negative. 
    void *malloc(size_t n); 
    
    // While copying 'n' bytes from 's2' to 's1' 
    // n must be non-negative integer. 
    void *memcpy(void *s1, void const *s2, size_t n); 
    
    // strlen() uses size_t because the length of any string 
    // will always be at least 0. 
    size_t strlen(char const *s); 
    ```

Note: When we use a size_t object, we have to make sure that in all the contexts it is used, including arithmetic, we want only non-negative values. For instance, the following program would definitely give the unexpected result:

    ```c
    // C program to demonstrate that size_t or 
    // any unsigned int type should be used  
    // carefully when used in a loop. 
    #include<stdio.h> 
    
    #define N 10 
    
    int main() 
    { 
        int a[N]; 
    
        // This is fine. 
        for (size_t n = 0; n < N; ++n) { 
            a[n] = n; 
        } 
            
        // But reverse cycles are tricky for unsigned  
        // types as they can lead to infinite loops. 
        for (size_t n = N-1; n >= 0; --n) 
            printf("%d ", a[n]); 
    } 
    ```

> Output
> Infinite loop and then segmentation fauilt
