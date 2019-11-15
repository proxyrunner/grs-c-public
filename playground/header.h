// pointer1.c
int pointer1(void){
 int x[4];
 int i;

 for(i = 0; i < 4; ++i){
    printf("&x[%d] = %p\n", i, &x[i]);
}
   printf("Address of array x: %p\n", x);
}


// pointer2.c
int pointer2() {
int i, x[6], sum = 0;

printf("Enter 6 numbers: ");

for(i = 0; i < 6; ++i) {
        // Equivalent to scanf("%d", &x[i]);
        scanf("%d", x+i);
        // Equivalent to sum += x[i]
        sum += *(x+i);
}
printf("Sum = %d", sum);
return 0;
}

int pointer3() {
int x[5] = {1, 2, 3, 4, 5};
int* ptr;

// ptr is assigned the address of the third element
ptr = &x[2];

printf("*ptr = %d \n", *ptr);   // 3
printf("*(ptr+1) = %d \n", *(ptr+1)); // 4
printf("*(ptr-1) = %d", *(ptr-1));  // 2

return 0;
}
