#include <stdio.h>
#include <stdlib.h>

int main (){
	
	//Enter the number of grades, the grade, and its respective weight
	int num, i;
	float g[100], w[100], ew[100], wg[100], awg, awg1, wa, des, exg;
	char exam;
	printf("Do you want to calculate what grade you need to get on your exam? Y/N only: ");
	scanf("%c", &exam);
	
	if ( exam == 'y' || exam == 'Y'){
		printf("Enter number of grades: ");
		scanf("%d", &num);
		for ( i = 0; i < num; i++){
			printf("Enter grade %d:  ", i+1);
			scanf("%f", &g[i]);
			printf("Enter weight: ");
			scanf("%f", &w[i]);
			wa += w[i];
			wg[i] = g[i] * w[i];
			awg += wg[i];
			awg1 = awg /wa ;
		}
		printf("Enter your desired grade: ");
			scanf("%f", &des);
			printf("Weight of exam: ");
			scanf("%f", &ew[i]);
			
			exg = ((des) - (awg/100)) / ew[i] ;
		printf ("The grade you need is %f\nCurrently you have:\n", exg * 100);
		
	}else if( exam == 'n' || exam == 'N'){	
	printf("Enter number of assignments: ");
	scanf("%d", &num);
	
	for ( i = 0; i < num; i++){
		printf("%d. Enter grade: ", i+1);
		scanf("%f", &g[i]);
		printf("Enter weight: ");
		scanf("%f", &w[i]);
		wa += w[i];
		wg[i] = g[i] * w[i];
		awg += wg[i];
		awg1 = awg /wa ;

	}
}
		if (awg1 >= 90.0001 && awg1 <= 100){
				printf("\n%.2f percent\nGPA: 4.33, A+", awg1);
			}else if(awg1 >= 85.00001 && awg1 <= 89.9999999){
				printf("\n%.2f percent\nGPA: 4.00, A", awg1);
			}else if(awg1 >= 80.000001 && awg1 <= 84.999999){
				printf("\n%.2f percent\nGPA: 3.67, A-", awg1);
			}else if(awg1 >= 77.000001 && awg1 <= 79.999999){
				printf("\n%.2f percent\nGPA: 3.33, B+", awg1);
			}else if(awg1 >= 73.000001 && awg1 <= 76.999999){
				printf("\n%.2f percent\nGPA: 3.00, B", awg1);
			}else if(awg1 >= 70.000001 && awg1 <= 72.999999){
				printf("\n%.2f percent\nGPA: 2.67, B-", awg1);
			}else if(awg1 >= 67.000001 && awg1 <= 69.999999){
				printf("\n%.2f percent\nGPA: 2.33, C+", awg1);
			}else if(awg1 >= 63.000001 && awg1 <= 66.999999){
				printf("\n%.2f percent\nGPA: 2.00, C", awg1);
			}else if(awg1 >= 60.000001 && awg1 <= 62.999999){
				printf("\n%.2f percent\nGPA: 1.67, C-", awg1);
			}else if(awg1 >= 57.000001 && awg1 <= 59.999999){
				printf("\n%.2f percent\nGPA: 1.33, D+", awg1);
			}else if(awg1 >= 53.000001 && awg1 <= 56.999999){
				printf("\n%.2f percent\nGPA: 1.00, D", awg1);
			}else if(awg1 >= 50.000001 && awg1 <= 52.999999){
				printf("\n%.2f percent\nGPA: 0.67, D-", awg1);
			}else if(awg1 >= 0.0000000 && awg1 <= 49.999999){
				printf("\n%.2f percent\nGPA: 0.00, F", awg1);
			}
			
	return 0;
}
		
	
