#include <stdio.h>
void fibbo(){
int num1 = 1, num2 = 2, num3, i;
printf("%d, ", num1);
printf("%d, ", num2);
for(i = 0; i<98; i++){
num3 = num1 + num2;
printf("%d, ", num3);
        
num1 = num2;
num2 = num3;
}
}
