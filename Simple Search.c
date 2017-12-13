#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Linear Search
int main()
{
	long N;
	long i,K,X;

	scanf("%d",&N);

	long* I_A = (long*) malloc(500000 * sizeof(long));

	for(i = 0;i < N;i++)
	{
		scanf("%d",&X);
		I_A[X] = i;
	}

	scanf("%d",&K);

	printf("%d\n",I_A[K]);

	return 0;
}
