#include <stdlib.h>
#include <stdio.h>
#include "hashTable.h"
/*TODO: no data structures have been included, make sure to "#include" any data structure .h files if you need them.*/

/*TODO: you are responsible for completing the provided Makefile; you only need to fill in the executable section at the bottom of the Makefile with the gcc command and necessary .o files*/

/*TODO: Notate if you used a partner and the runtime of your implemented algorithm
Partner:
Big O Time Complexity of below algorithm: O(n)
*/

int main(){

	int inputArrays[2][10] = {{2,5,6,3,14,7,4,12,15,8},
			   	   {0,5,7,10,6,15,20,9,3,2}};
	int targets[2] = {24,30};
	int i,j;
	/*TODO: code the solution to problem 1 here, the 2 examples above have been provided to show that your solution works; your solution should print "(2,12) (3,8) (4,6)" for example 1 ({2,5,6,3,14,7,4,12,15,8} with target 24) and "(2,15) (3,10) (5,6)" for example 2 ({0,5,7,10,6,15,7,9,3,2} with target 30), they do not need to print out in the exact order shown*/
 
 for (j=0;j<2;j++){
 struct hashTable *firstRun = createTable(sizeof inputArrays/sizeof inputArrays[j]);
 int* returned= (int*)malloc(sizeof(int));
 			for(i = 0; i < 10;i++){
    				if(inputArrays[j][i]!=0 &&(targets[j] % inputArrays[j][i]) == 0){
     																 insertTable(firstRun, inputArrays[j][i], inputArrays[j][i]);
							 if (searchTable(firstRun, (targets[j]/inputArrays[j][i]), returned)==true){

							 printf("(%d,%d)",inputArrays[j][i], *returned);
    					 }
					    }
						 }
 freeTable(firstRun);
 free(returned);
 printf("\n");
 }
return 0;
}

/*TODO (optional): you may create additional helper functions to solve your problem if you wish; please be sure to declare your functions before the "main" function or you will likely get some errors*/

