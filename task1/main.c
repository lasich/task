#include <conio.h>
#include <stdio.h>
#include <malloc.h>
int main(int argc, const char *argv[]){
	int n;
	int i = 0, j = 0;
	scanf("%d",&n);
	int **a;
	
	a = (int**)malloc(n * sizeof(int*));
	for (i = 0; i < n; i++) {
		a[i] = (int*)malloc((i + 1) * sizeof(int));
	}
	for (i = 0; i<n; i++){
		for (j = 0; j<n; j++){
			a[i][j] = (i + 1)*(j + 1);

		}
	}
	int x1 = 1, x2, y1, y2;
	while (x1 != 0){
		scanf("%d", &x1);
		if (x1 == 0) break;
		else {
			scanf("%d", &y1);
			scanf("%d", &x2);
			scanf("%d", &y2);
			for (i = x1 - 1; i<x2; i++){
				for (j = y1 - 1; j<y2; j++){
					printf("%4d", a[i][j]);
					printf(" ");


				}


				printf("%\n", "");
			}

		}

	}
	for (i = 0; i < n; i++)
	{
		free(a[i]);
	}
	free(a);
	return(0);
}
