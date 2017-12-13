#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Linear Search
int main()
{
	int N,i,j;
	int long V;

	scanf("%d",&N);

	char* S_A = (char*) malloc(500001 * sizeof(char));

	for(i = 0;i < N;i++){
		V = 0;
		scanf("%s",S_A);
		for(j = 0;j < strlen(S_A);j++)
		{
			switch(S_A[j])
			{
				case 'a':
				case 'i':
				case 'o':
				case 'e':
				case 'u':
				case 'A':
				case 'I':
				case 'O':
				case 'E':
				case 'U':
						V++;
				break;
				default:
                break;
			}
		}
		printf("%ld\n",V);

	}

	return 0;
}
