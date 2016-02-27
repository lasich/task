#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	int n;

	scanf("%d", &n);
	int i = 0, j = 0;

	int **a ;
	a= malloc(n*sizeof(int *));
	for (i = 0; i < n; i++)
	{
		a[i] = malloc(n*sizeof(int));
		for (j = 0; j < n; j++)
		{
			a[i][j] = (i + 1)*(j + 1);
		}
	}

	int x1=1, y1, x2, y2;
	char str[10];

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


				printf("\n");
			}

		}

	}

	for (i = 0; i < n; i++)
	{
		free(a[i]);
	}
	free(a);

	return 0;
}
