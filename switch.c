#include<stdio.h>
int main()
{
	int day_no;
	printf("Enter day number\n");
	scanf("%d",&day_no);
	 switch (day_no)
	 {
	 	case 1:
	 		printf("It's Sunday\n");
	 		break;
	 	case 2:
		    printf("It's Monday\n");
			break;
			
			case 3:
			  printf("It's Tuesday\n");
			  break;
			  
			case 4:
			  printf("It's Wednesday\n");
			  break;
			  
			case 5:
			  	printf("It's Thrusday\n");
			  	break;
			  	
			case 6:
			  	printf("It's Friday");
			  		break;
			  		
			case 7:
			  	printf("It's Saturday");
			  	break;
			  			
			default:
				printf("Input must be between 1-7\n");
					break;
	 }
	 
	return 0;
}