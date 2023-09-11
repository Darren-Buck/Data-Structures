#include <stdlib.h>
#include <stdio.h>

#include "tree.h"
/*TODO: only the tree data structure has been included, make sure to "#include" any other data structure .h files if you need them.*/

/*TODO: you are responsible for completing the provided Makefile; you only need to fill in the executable section at the bottom of the Makefile with the gcc command and necessary .o files; do not forget to include tree.o (as it is included here)*/

/*TODO: Notate if you used a partner and the runtime of your implemented algorithm
Partner:
Big O Time Complexity of below algorithm:
*/

void kthIndex(struct TNode* node, int n, int *cnt);
int main(){

	int i = 0, j = 0;
	int input[2][10] = {{2,3,4,5,6,7,8,12,14,15},
			     {0,2,3,5,6,7,9,10,15,20}};
	int k[2] = {3,8};
			   
	Tree* t;
	for(i = 0; i < 2; i++){
		t = createTree();
		for(j = 0; j < 10; j++){
			insertTreeBalanced(t,input[i][j]);
    }
int* cnt = malloc(sizeof(int));
*cnt = -1;
kthIndex(t->root, k[i],cnt);
free(cnt);
		/*TODO: code the solution to problem 2 here, the 2 examples above have been provided to show that your solution works; your solution should print 5 for example 1 ({2,3,4,5,6,7,8,12,14,15} with kth index 3) and 15 for example 2 ({0,2,3,5,6,7,9,10,15,20} with kth index 8); make sure your solution uses the created tree and not the input array or you will lose points*/
		
		
		freeTree(t);
	}
return 0;
}
void kthIndex(struct TNode* node, int n, int *cnt){

				 if (node == NULL){
				 		return;}
				 if ((*cnt)<=n){
				 					 	 kthIndex(node->pLeft,n,cnt);
			  						 (*cnt)+=1;
			  						 if ((*cnt) == n)
		 		 		 	  		 		{printf("The value at node %d is %d\n",n,node->data);}
 			  	 			 		 
												kthIndex(node->pRight,n,cnt);
				 		 			 }
			  
}
/*TODO (optional): you may create additional helper functions to solve your problem if you wish; please be sure to declare your functions before the "main" function or you will likely get some errors*/

