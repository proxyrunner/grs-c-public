
// temperature.c
#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
int temp(int u, int l);
main(){
temp(20,30)
return 0;
}

}
int temp(){
int fahr;
for(fahr=LOWER; fahr<=UPPER;fahr=fahr+STEP)
        printf("3%d %6. 1f\n", fahr, (5.0/9.0)*(fahr-32));
}