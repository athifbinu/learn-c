int main(void) {
	int limt=10,i;
	printf("Enter a number");
	scanf("%d",&limt);
	for(i=2;i<=limt;i++){
		if(i%2==0){
           printf("%d\n\n",i);
		}
	}
	return EXIT_SUCCESS;
}
