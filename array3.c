#include <stdio.h>
#define N 5
int main(void) {
int i;
int j;
int s = 0;
int k = 1;
int x = 0;
int a[N][N];


for (i=0; i<N; i++){
	s = 0;
	x = 0;
	for (j=0; j<N; j++){
		if (x==1) {
		a[i][j] = 1;
		}
		else if (s==N-k) {
		a[i][j] = 1;
		k = k+1;
		x = 1;
		}
		else {
		a[i][j] = 0;
		}
		s = s+1;
		printf("%d", a[i][j]);
	}
	printf("\n");
}



return 0;
}
