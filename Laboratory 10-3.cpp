/*
* Project: Laboratory 10-3
* Author: Aanika Mishra
* Date: 11-7-2024
* Description: This program asks for the number of students then prompts
* for the score for each student as specified and returns the lowest, highest, and average score.
*/

#include <iostream> 
#include <iomanip>

using namespace std;

int high_score(int scores[20], int students);
int low_score(int scores[20], int students);
double average(int scores[20], int students);

int main()
{
	int num;
	const int max_students = 20;
	int scores[max_students];
	int input;

	cout << "Number of students: ";
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cout << "Enter score #" << i + 1 << ": ";
		cin >> input;

		scores[i] = input;
	}

	cout << "High Score = " << high_score(scores, num) << "\t";
	cout << "Low Score = " << low_score(scores, num) << "\t";
	cout << "Average = " << average(scores, num) << "\t";
}

int high_score(int scores[20], int students)
{
	int high = 0;
	for (int i = 0; i < students; i++)
	{
		if (scores[i] > high)
		{
			high = scores[i];
		}
	}
	return high;
}


int low_score(int scores[20], int students)
{
	int low = 100;
	for (int i = 0; i < students; i++)
	{
		if (scores[i] < low)
		{
			low = scores[i];
		}
	}
	return low;
}


double average(int scores[20], int students)
{
	double avg;
	double sum = 0;
	for (int i = 0; i < students; i++)
	{
		sum += scores[i];
	}
	avg = sum / (double) students;
	return avg;
}