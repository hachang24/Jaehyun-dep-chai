#include <stdio.h>
#include <time.h> 

int dayOfWeek(int year) 
{
	int day;
	
	day = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
	
	return day;
}

int checkLeapYear (int year) {
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		return 1;} else{
			return 0;}
	}


void nextYear (int *month, int *year) {
	++*month;
	
	if (*month > 12) {
		*month = *month - 12;
		++*year;
	}
}

void preYear (int *month, int *year) {
	--*month;
	if ( *month < 1) {
		-- *year;
		
		if (*year < 2001) {
			printf ("No data");
		}
		
		*month = *month + 12;
	}
}

int monthDays[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	
void print(int year) {
	int mon, day, dayInWeek = 0, firstDay;
	year = 2001;
	
	char *monthName[] ={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	firstDay = dayOfWeek(year);
	
	for(year; year < 2023; year ++)
	{ 
		if(checkLeapYear(year) == 1) {
		monthDays[1] = 29;
		}
		printf ("\n  		  %d", year);

		printf("\n--------------------------------------------"); 
		for(mon = 0; mon <= 11; mon++)
		{
			printf("\n\n  		  %s  \n\n", monthName[mon]);
			printf("    Mon   Tue   Wed   Thu   Fri   Sat   Sun \n");
	
			for(dayInWeek = 0; dayInWeek < firstDay; dayInWeek++) 
			{
				printf("      ");
			}	
		
			for(day = 1; day <= monthDays[mon]; day++) 
			{
				printf("%6d", day);
		
				if(++dayInWeek > 6) 
				{
				printf("\n");
				
				dayInWeek = 0;
				}
			
				firstDay = dayInWeek;
			}
		} 	
	} 		
}
int main()
{
	int  year;
	print(year); 
	
	time_t t =  time ( NULL ) ; 
//    printf ( "UTC:% s" , asctime ( gmtime ( & t ) ) ) ; 
    printf ( "local:% s" , asctime ( localtime ( & t ) ) ) ; 

    
	return 0;
}
