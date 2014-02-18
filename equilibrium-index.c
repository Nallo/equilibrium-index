/*
	
	Compile:
		make all

	Run:
		./equilibrium-index

*/
#include <stdio.h>
#include <stdlib.h>

int get_index(int A[], int N) {
    
    long int right_sum = 0;      // initialize sum of whole array
    long int left_sum = 0; // initialize leftsum
    unsigned int i;
 
    /* Find sum of the whole array */
    for (i = 0; i < N; i++)
        right_sum += A[i];
 
	for( i = 0; i < N; i++)
	{
		right_sum -= A[i]; // sum is now right sum for index i

		if(left_sum == right_sum)
			return i;

		left_sum += A[i];
	}
 
    /* If no equilibrium index found, then return 0 */
    return -1;
}

int main(){
	
	int array[] = {-7, 1, 5, 2, -4, 3, 0};
	
	printf("equilibrium index: %d\n", get_index(array,sizeof(array)/sizeof(int)));

	return 0;
}
