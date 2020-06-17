#include <stdio.h>
int main(void) {
unsigned int a=0xDDCCBBAA;
unsigned int c;
int i;


for (i=0; i<=3; i++){
c=((a>>8*i) & 0xFF);
printf("a = %x\n", c);
}

c = a & 0xFFAAFFFF;
printf("%x\n", c);

return 0;
}

