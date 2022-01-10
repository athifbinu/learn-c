#include <stdio.h>
#include <stdlib.h>


	int main() {
	  int a[5];
	  int i;
	  printf("Enter a values");
	  for(i=0;i<5;i++){
		  scanf("%d",&a[i]);
	  }
	  printf("Enter  values are");
	  for(i=0;i<5;i++){
		  printf("%d\n\n", a[i]);
	  }


	return EXIT_SUCCESS;
}
