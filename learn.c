
#include <stdio.h>
#include <stdlib.h>


	int main(){
		int a[100],i,limit;
		printf("Enter array limit");
		scanf("%d",&limit);
		printf("Enter a  values");
		for(i=0;i<limit;i++){
			scanf("%d",&a[i]);


		}

		 printf("entered values are\n");

		for(i=0;i<limit;i++){
			printf("%d\t",a[i]);
		}







	return EXIT_SUCCESS;
}
