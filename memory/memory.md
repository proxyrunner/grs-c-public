# Memory Management in C

```c
#include <stdio.h>

int main(void){
//printf("%zu\n", sizeof(unsigned char c;
//printf("%zu\n", sizeof(short d;
//printf("%zu\n", sizeof(short int e;
printf("%zu\n", sizeof(signed short));
printf("%zu\n", sizeof(signed short int));
printf("%zu\n", sizeof(unsigned short));
printf("%zu\n", sizeof(unsigned short int));
printf("%zu\n", sizeof(int));
printf("%zu\n", sizeof(signed));
printf("%zu\n", sizeof(signed short int));
printf("%zu\n", sizeof(unsigned));
printf("%zu\n", sizeof(unsigned int));
printf("%zu\n", sizeof(long));
printf("%zu\n", sizeof(long int));
printf("%zu\n", sizeof(signed long));
printf("%zu\n", sizeof(signed long int));
printf("%zu\n", sizeof(unsigned long));
printf("%zu\n", sizeof(unsigned long int));
printf("%zu\n", sizeof(long long));
printf("%zu\n", sizeof(long long int));
printf("%zu\n", sizeof(signed long long));
printf("%zu\n", sizeof(signed long long int));
printf("%zu\n", sizeof(unsigned long long));
printf("%zu\n", sizeof(unsigned long long int));
printf("%zu\n", sizeof(float));
printf("%zu\n", sizeof(double));
printf("%zu\n", sizeof(long double));
}
```

## Output

```
1
1
2
2
2
2
4
4
2
4
4
8
8
8
8
8
8
8
8
8
8
8
8
4
8
16
```
