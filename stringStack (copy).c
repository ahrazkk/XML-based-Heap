#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *  The functions in this module implement a Stack data structure
 *  of char pointers (aka "strings").
 *
 *  NOTE: the stack is implemented as a fixed size array (size = 100).
 *  Consequently, no more than 100 strings can be pushed onto
 *  the Stack at any given time.
 */

// Implementation hints:
//   The 3 functions--push, pop and isEmpty--share information
//   about the array used to implement the stack and the index
//   of the "top" of the stack.
//
//   You may want to make these variables global...
//   ...but that would
//   be a mistake (because anyone using the module would have
//   to ensure that they did not use global variables with the
//   same names).
//
//   An alternative in C is a "static global".
//   If a global variable is qualified as "static", it is global only
//   within the source code file where it is declared.
//   In parituclar, it cannot conflict with any other global variable.
//
//  RECOMMENDATION:
//   Uncomment the following 2 lines and use these static globals!


static int top = 0; // orignally 0, but since it its empty and its an array,
                     // this will make it a lot easier

static char * stack[100];

/**
 * pop() removes the top string on the stack and returns it.
 *
 * If pop() is attempted on an empty stack, an error message
 * is printed to stderr and the value NULL ((char *) 0) is returned.
 */

char* pop(char* value) {
    //if (top < 0) {
      //  fprintf(stderr, "Error: pop() called on an empty stack.\n");
      //  return NULL;
//    }
  if(strcmp(stack[top-1], value) == 0){
        printf("Element popped : %s \n",stack[top-1]);
        top--;
        for (int i=0; i<top; i++){
            printf("Array Position: #%d    in stack : %s \n",i,stack[i]);
        }
    } 

	//else if((top-1)<=0){
	//printf("test test");
	//isEmpty(top-1);
	//}


else {
        printf("XML expression is invalid \n");
    }
    return stack[top]; // update stack after popping
}




/**
 *  push(thing2push) adds the "thing2push" to the top of the stack.
 *
 *  If there is no more space available on the Stack, an error
 *  message is printed to stderr.
 */






void push(char* thing2push) {
    
if (top >= 99) {
        fprintf(stderr, "Error: push() called on a full stack.\n");
        return;

}

else{
//top++;// goes to next array index so previous one doesnt get deleted
stack[top] = thing2push; // thee most top thing becomes t2p
printf("Element added to stack: %s \n",stack[top]);
top++;

}
}

/**
 * isEmpty() returns a non-zero integer (not necessarily 1) if the
 * stack is empty; otherwise, it returns 0 (zero).
 *
 */
int isEmpty(int x){

if (top-1<0){
printf("Stack is now empty with no strings \n");
return 1;
}

else 
printf("Stack is not empty and has %d strings in it \n",top); // the reason top is not 
								//top-1 is trial and error
  return 0; 
}


