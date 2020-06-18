#include <stdio.h>
#define N 3
int main(void) {
int i;
int j;
int s = 1;
int a[N][N];


for (i=0; i<N; i++){
	for (j=0; j<N; j++){
	a[i][j] = s;
	s = s+1;
	printf("%d", a[i][j]);
	}
	printf("\n");
}

return 0;
}
