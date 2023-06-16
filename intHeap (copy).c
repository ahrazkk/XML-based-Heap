#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//static int top = 0;
//static int stack[100];


/**
 *  The functions in this module implement a Heapdata structure
 *  of integers.
 */




/**
 *  addHeap(thing2add) adds the "thing2add" to the Heap.
 *
 */
void addHeap(int arr[],int middle, int end){

//printf("middle is: %d \n",middle);

int max = middle;
int right = middle*2;
int left = middle*2+1;
int t;
//printf("left is: %d \n",left);


if(left <= end && arr[left] > arr[max])
max = left;

//printf("left array is: %d \n",arr[left]);
//printf("arr[max] which is the middle is: %d \n",arr[max]);
//printf("right array is: %d \n",arr[right]);

if(right <= end && arr[right] > arr[max])
max =right;
/////

if(middle != max){
 
t = arr[middle];
arr[middle] = arr[max];
arr[max] = t;
addHeap(arr, max, end);
}










/*
if (feof(stdin)){
printf("testing value of middle = %d \n",middle);

}
*/


//stack[top] = thing2add; 
//top++;


/*
if (feof(stdin)){
printf("original array values: { ");
for (int i = 0; i < top; i++) {
   printf("%d, ", stack[i]);
}
printf("} \n");
}
//Real code

*/

}

void  XML(int arr[],int middle, int end){

/*for(int i=1;i<=end;i++){
printf("meowx2: %d \n",arr[i]);
}
*/
printf("\nNode Reverse Sort: \n");
for(int i=1;i<=end;i++){
printf("<node id=\"%d\">",arr[i]);
}

//<node id="20"><node id="15"><node id="3"></node></node><node id="10"></node></node>


}





/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */

int heapDelete(int arr[], int end) {
    int i, t;
    t = arr[1];  // initialize t to arr[1]
    for (i = end; i >= 2; i--) {
        arr[1] = arr[i];
        arr[i] = t;
        addHeap(arr, 1, i - 1);
        t = arr[1];  // update t to the new value of arr[1]
    }
    return t;
}







/**
 * heapSize() returns the number of items in the Heap.
 *
 */
int heapSize()
{

printf("the heapsize is ");
  }

