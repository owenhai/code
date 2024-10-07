#include<iostream>
#include<iomanip>
using namespace std;
int main() 
{
    string name;
    float score1, score2, score3, score4, score5, score6, avgScore10, avgScore4;

    
    cout << "Enter name: ";
    getline(cin, name); 

   
    cout << "Enter score for subject 1 (0 to 10): ";
    cin >> score1;
    if (score1 < 0 || score1 > 10)
	{
        cout << "Invalid score for subject 1. Please enter a number between 0 and 10." << endl;
        return 0; 
    }

    
    cout << "Enter score for subject 2 (0 to 10): ";
    cin >> score2;
    if (score2 < 0 || score2 > 10)
	{
        cout << "Invalid score for subject 2. Please enter a number between 0 and 10." << endl;
        return 0; 
    }

    
    cout << "Enter score for subject 3 (0 to 10): ";
    cin >> score3;
    if (score3 < 0 || score3 > 10)
	{
        cout << "Invalid score for subject 3. Please enter a number between 0 and 10." << endl;
        return 0; 
    }
 	
	 
	if (score1 >= 8.5 && score1 <= 10.0) 
	{
	cout << "Your 4-point system score at subject 1 is A\n";
	score4 = 4.0;
	} 
    else if (score1 >= 7.0) 
    {
    cout << "Your 4-point system score at subject 1 is B\n";
	score4 = 3.0;
	}
    else if (score1 >= 5.5)
    {
    cout << "Your 4-point system score at subject 1 is C\n";
	score4 = 2.0;
	}
   	else if (score1 >= 4.0)
   	{
   	cout << "Your 4-point system score at subject 1 is D\n";
	score4 = 1.0;
	}
	else 
	{
	cout << "Your 4-point system score at subject 1 is F\n";
	score4 = 0.0;
	}
	
	if (score2 >= 8.5 && score2 <= 10.0) 
	{
	cout << "Your 4-point system score at subject 2 is A\n";
	score5 = 4.0;
	} 
    else if (score2 >= 7.0) 
    {
    cout << "Your 4-point system score at subject 2 is B\n";
	score5 = 3.0;
	}
    else if (score2 >= 5.5)
    {
    cout << "Your 4-point system score at subject 2 is C\n";
	score5 = 2.0;
	}
   	else if (score2 >= 4.0)
   	{
   	cout << "Your 4-point system score at subject 2 is D\n";
	score5 = 1.0;
	}
   	else
	{
	cout << "Your 4-point system score at subject 2 is F\n";
	score5 = 0.0;
	}
   	
	if (score3 >= 8.5 && score3 <= 10.0) 
	{
	cout << "Your 4-point system score at subject 3 is A\n";
	score6 = 4.0;
	} 
    else if (score3 >= 7.0) 
    {
    cout << "Your 4-point system score at subject 3 is B\n";
	score6 = 3.0;
	}
    else if (score3 >= 5.5)
    {
    cout << "Your 4-point system score at subject 3 is C\n";
	score6 = 2.0;
	}
   	else if (score3 >= 4.0)
   	{
   	cout << "Your 4-point system score at subject 3 is D\n";
	score6 = 1.0;
	}
   	else
	{
	cout << "Your 4-point system score at subject 3 is F\n";
	score6 = 0.0;
	}

	avgScore4 = (score4 + score5 + score6) / 3;
    avgScore10 = (score1 + score2 + score3) / 3;
	cout << fixed << setprecision(1);
	cout << "Name: " << name << endl;
    cout << "Average score (10-point sscore2stem): " << avgScore10 << endl;
    cout << "Average score (4-point system): " << avgScore4 << endl;

    return 0;
}
