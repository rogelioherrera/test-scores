#include <iostream>
#include <iomanip>
using namespace std;
 
double getAverage(double*, int);

int main()
{
	double *testScores;
	double average;
	int numTests;
	int count;
	int highest = 0;
	int totalsum = 0;

	cout << "How many scores would you like to process?";
	cin >> numTests;

	while (numTests <= 0)
	{
		cout << "enter positive number: ";
		cin >> numTests;
	}
	testScores = new double[numTests];
	cout << "enter the scores of the tests: ";

	for (count = 0; count < numTests; count++)
	{
		cout << "test" << (count + 1) << ": ";
		cin >> *(testScores + count);
		
	}
	
	for (int i = 0; i<numTests; i++){
		totalsum += testScores[i];
		if (testScores[i] > highest){
			highest = testScores[i];
			
		}

	}
	

	double avgScores=0 ;	
	double total = 0;

	for (int count = 0; count < numTests; count++)
	{
		total += testScores[count];

	}	
	avgScores = getAverage(testScores, numTests);
		cout << "the averages of the scores is: " << avgScores << endl;	
		cout << "the highest score was: " << highest << endl;

}	
		
	

double getAverage(double *testScores, int numTests){
	double avgScores;
	
	double total = 0;


	for (int i = 0; i < numTests; i++){
		total = total + testScores[i];

	}

	avgScores = total / numTests;
	return avgScores;
}
	



 
	