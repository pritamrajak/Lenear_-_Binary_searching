#include <stdio.h> 

int binarySearch(int arr[], int l, int r, int x) 
{ 
	if (r >= l) { 
		int mid = l + (r - l) / 2; 
		if (arr[mid] == x) 
			return mid; 
		if (arr[mid] > x) 
			return binarySearch(arr, l, mid - 1, x); 
		return binarySearch(arr, mid + 1, r, x); 
	} 

	return -1; 
} 

int main(void) 
{ 
	int n,i,ele ,keynum;
	printf("\n\t\t\tEnter the length of the array : ");
	scanf("%d",&n);
	int arr[n];
	printf("\n\t\t\tEnter the element of the array \n");
	for(i=0 ; i<n ;i++){
		printf("\t\t\t");
		scanf("%d",&ele);
		arr[i]=ele;
	}
	printf("\n\t\t\tEnter the element to be searched : ");
    scanf("%d", &keynum); 
	int result = binarySearch(arr, 0, n - 1, keynum); 
	if(result == -1)
		printf("\n\t\t\tElement is not present in array");
	else
		printf("\n\t\t\tElement is present at index %d",result+1); 

    int found = 0;
    for (i = 0; i < n ; i++)
    {
        if (keynum == arr[i] )
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
        printf("\n\t\t\tElement is present in the array at position %d",i+1);
    else
        printf("\n\t\t\tElement is not present in the array\n");
} 
