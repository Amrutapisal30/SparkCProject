#include<stdio.h>
main(){
	
	int arr1[3][3],arr2[3][3],arr3[3][3],i,j,k;
	printf("\nEnter the 1st array element: ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("\nEnter the 2nd array element: ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&arr2[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			int sum=0;
			for(k=0;k<3;k++){
				sum=sum+arr1[i][k]*arr2[k][j];
				arr3[i][j]=sum;
			}
		}
	}
	printf("\nMultiplication...\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t%d",arr3[i][j]);
		}
		printf("\n");
	}
	
}
