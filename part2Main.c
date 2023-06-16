#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int*, int, int);
extern void XML(int*, int, int);
extern int heapDelete(int*, int);
extern int heapDelete(int*, int);
extern int heapSize(int);

int main(int argc, char * argv[])
{
	int i=1;
  int value;
	int count = 0;
 int arr[100];
  while (scanf("%d\n", &value) != EOF) {
    fprintf(stderr, "READING INPUT: %d\n", value);
	//push(value);
	count++;
	arr[i]=value;  
	i++;
	}
heapSize(count);
//printf("\nTotal Inputs (including 0) are: %d\n",count);
printf("\nNumbers Given: \n");
 for (int i = 1; i <= count; i++) {
   printf("%d\n", arr[i]);
  }



push(arr,1,count);
XML(arr,1,count);



printf("\n \n reverse Sorted order below: \n");
for (int i = 1; i <=count; i++) {
    printf("\n V: %d\n", arr[i]);
  }

	
  


 

heapDelete(arr,count);
printf("\nsorted order below: \n");
for (int i = 1; i <=count; i++) {
    printf("%d\n", arr[i]);
  }






}
