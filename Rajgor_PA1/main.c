#include "Fitbit.h"

int main(void)
{
	FitbitData data[1442] = { "","",0.0,0.0,0,0,0,0 };
	char line[100] = "";
	FILE* infile = fopen("FitbitData.csv", "r");
	FILE* outfile = fopen("Results.csv", "w");


	if (infile != NULL)
	{
		//calculating and printing the values on the screen not the file.
		double totalCalories = total_calories(data);
		double totalDistance = total_distance(data);
		unsigned int totalFloors = total_floors(data);
		double avgHeartrate = avg_heartrate(data);
		unsigned steps = total_steps(data);
		unsigned maxSteps = max_steps(data);

		//Prints the results on the screen line by line
		for (int i = 0; i < FITBIT_DATA; i++)
		{
			printf("%s", data[i].patient);
			printf("%s", data[i].minute);
			printf("%lf", data[i].calories);
			printf("%lf", data[i].distance);
			printf("%d", data[i].floors);
			printf("%d", data[i].heartRate);
			printf("%d", data[i].steps);
			printf("%d", data[i].Sleeplevel);
		}

		if (outfile!= NULL)
		{
			fprintf(outfile, "Total Calories, Total Distance, Total Floors, Total Steps, Avg Heartrate, Max Steps, Sleep\n");
			printf("Total Calories, Total Distance, Total Floors, Total Steps, Avg Heartrate, Max Steps, Sleep\n");

			printf("%.2lf, %.2lf, %d, %d, %.2lf, %d, %s: %s\n\n", totalCalories, totalDistance, totalFloors, steps, avgHeartrate, maxSteps, );
			fprintf(outfile," % .2lf, % .2lf, % d, % d, % .2lf, % d, % s: % s\n\n", totalCalories, totalDistance, totalFloors, steps, avgHeartrate, maxSteps, );
		    
			fgets(outfile, "%s", line);
		}

	}
	else
	{
		printf("There was an error in opening the files you wanted!");
		exit(0);
	}

	fclose(infile); //closing the FitbitData.csv file
	fclose(outfile); //closing the Results.csv

	return 0;
}