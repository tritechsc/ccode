
#include <stdio.h>
#include <stdlib.h>
// bubble sort http://www.cplusplus.com/forum/general/97463/
// modified by cwcoleman
// start of bubble_sort
void bubble_sort(int myArray[], int size) {
int length =size;
int temp, i, j = 1;
for(i = 0; i < length; i++)
	{
		for (j = 0; j < length-1; j++)
        {
			{ //swap.  this is when we exchanged places in the hall notice temp
            if (myArray[j] > myArray[j+1])
				temp = myArray[j];
				myArray[j] = myArray[j+1];
				myArray[j+1] = temp;
			}
        }/*End inner for loop*/
	}/*End outer for loop*/
}//end of bubble_sort



int main ()
{
    int i;
    int alist [10];

    alist[0] = 190;
    alist[1] = 7;
    alist[2] = 19;
    alist[3] = 9;
    alist[4] = 3;
    alist[5] = 5;
    alist[6] = 7;
    alist[7] = 17;
    alist[8] = 13;
    alist[9] = 99;

// print the list
    printf ("Array not sorted \n\n");
    for (i = 0; i < 10; i++){
       printf (" %d ", alist[i]);
    }
    bubble_sort(alist,10);
    // print the list
    printf ("Array sorted \n\n");
    for (i = 0; i < 10; i++){
       printf (" %d ", alist[i]);
    }
}


