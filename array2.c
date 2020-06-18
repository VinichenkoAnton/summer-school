#include <stdio.h>
#define N 5
int main(void) {
int i;
int j;
int s = N;
int a[N];
int b[N];


for (i=0; i<N; i++){
	a[i]=i+1;
	printf("%d", a[i]);
}

printf("\n");

for (j=0; j<N; j++){
	s = s-1;
	b[j] = a[s];
	printf("%d", b[j]);
	}
printf("\n");
return 0;
}
