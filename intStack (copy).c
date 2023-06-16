#include <stdio.h>
#include <stdlib.h>
#include <string.h>


extern int heapDelete(int*, int);
extern void addHeap(int*, int, int);

//same code from part 1, slight modifications as of yet

static int top = 0; 

//static int stack[100];

/*
int pop(int value) {
   
  if((top-1) == value){
        printf("Element popped : %d \n",stack[top-1]);
        top--;
        for (int i=0; i<top; i++){
            printf("Array Position: #%d    in stack : %d \n",i,stack[i]);
        }
    } 



else {
        printf("XML expression is invalid \n");
    }
    return stack[top]; 
}


*/


void addHeap(int*, int, int);
void push(int arr[],int beg, int end) {
    

int i;
for(i = end / 2; i >= beg; i--){
addHeap(arr, i, end);

if(i == beg){
//printf("hello  \n");
}

}










//testing purposes
/*
if (feof(stdin)){
printf("testing value of end = %d \n",end);
}

int i;
i = end/2;
addHeap(arr, i, end);

*/

//stack[top] = thing2push; 
//addHeap(stack[top]);
top++;


/*  //testing if array is filled with values that were sent over, didnt want it to repeat so tested at EOF
if (feof(stdin)){
for (int i = 0; i < top; i++) {
   printf("%d\n", stack[i]);
}
}
*/

}


/*
int isEmpty(int x){

if (top-1<0){
printf("Stack is now empty with no strings \n");
return 1;
}

else 
printf("Stack is not empty and has %d strings in it \n",top); 

  return 0; 
}
*/

