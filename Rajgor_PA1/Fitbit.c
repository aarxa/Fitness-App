#include "Fitbit.h"



/*****************************************************************
* Function: total_calories()								     *
* Date Created: 6 September 2022                                 *
* Date Last Modified: 11 September 2022                          *
* Description: Computes the total calories burned                *
*																 *
* Input Parameters:	An array of structs							 *
* Returns: The total calories burned							 *
* Preconditions: fitBitArray has been initialized				 *
* Postconditions: total_calories has been computed			     *
******************************************************************/

double total_calories(FitbitData data[FITBIT_DATA])
{
	int i = 0;
	double calories;
	for (; i < FITBIT_DATA; i++)
	{
		calories = calories + data[i].calories;
	}
	return calories;
}


/*****************************************************************
* Function: total_distance ()								     *
* Date Created: 6 September 2022                                 *
* Date Last Modified: 11 September 2022                           *
* Description: Computes the total distance walked                *
*																 *
* Input Parameters:	An array of structs							 *
* Returns: The total distance walked							 *
* Preconditions: fitBitArray has been initialized				 *
* Postconditions: total_distance has been computed		     	 *
******************************************************************/

double total_distance(FitbitData data[FITBIT_DATA])
{
	int i = 0;
	double distance = 0.0;
	for (; i < FITBIT_DATA; i++)
	{
		distance = distance + data[i].distance;
	}
	return distance;
}


/*****************************************************************
* Function: total_floors ()				        				 *
* Date Created: 6 September 2022                                 *
* Date Last Modified: 7 September 2022                           *
* Description: Computes the total floors climbed                 *
*																 *
* Input Parameters:	An array of structs							 *
* Returns: The total floors cimbed  							 *
* Preconditions: fitBitArray has been initialized				 *
* Postconditions: total_floors has been computed	    		 *
******************************************************************/

unsigned int total_floors(FitbitData data[FITBIT_DATA])
{
	int i = 0;
	unsigned int floors;
	for (; i < FITBIT_DATA; i++)
	{
		floors = floors +data[i].floors;
	}
	return floors;
}


/*****************************************************************
* Function: avg_heartrate ()			    					 *
* Date Created: 6 September 2022                                 *
* Date Last Modified: 7 September 2022                           *
* Description: Computes the average hearrate of the patient      *
*																 *
* Input Parameters:	An array of structs							 *
* Returns: The average heartrate    							 *
* Preconditions: fitBitArray has been initialized				 *
* Postconditions: avg_heartrate has been computed	    		 *
******************************************************************/

double avg_heartrate(FitbitData data[FITBIT_DATA])
{
	double sum = 0.0;
	int n = 0;
	for (int i = 0; i < FITBIT_DATA; i++)
	{
		sum += data[i].heartRate;
		n++;
	}
	return sum / n;
}


/*****************************************************************
* Function: steps ()            								 *
* Date Created: 6 September 2022                                 *
* Date Last Modified: 7 September 2022                           *
* Description: Computes the total steps taken                    *
*																 *
* Input Parameters:	An array of structs							 *
* Returns: The total steps taken    							 *
* Preconditions: fitBitArray has been initialized				 *
* Postconditions: steps have been computed		            	 *
******************************************************************/

unsigned int total_steps(FitbitData data[FITBIT_DATA])
{
	int i = 0;
	unsigned int totalSteps;
	for (; i < FITBIT_DATA; i++)
	{
		totalSteps = totalSteps + data[i].steps;
	}
	return totalSteps;
}


/*****************************************************************
* Function: max_steps ()		        						 *
* Date Created: 6 September 2022                                 *
* Date Last Modified: 7 September 2022                           *
* Description: Computes the maximum number of steps taken        *
*																 *
* Input Parameters:	An array of structs							 *
* Returns: The maximum number of steps   						 *
* Preconditions: fitBitArray has been initialized				 *
* Postconditions: max_steps has been computed       			 *
******************************************************************/

unsigned int max_steps(FitbitData data[FITBIT_DATA])
{
	int i = 0;
	unsigned int total_maxsteps = 0;
	for (; i < FITBIT_DATA; i++)
	{
		if (total_maxsteps < data[i].steps)
		{
			total_maxsteps = data[i].steps;
		}
	}
	return total_maxsteps;
}






