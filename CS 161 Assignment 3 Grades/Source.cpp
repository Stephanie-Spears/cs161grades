
#include <iostream>
#include <string>
#include <istream>



using namespace std;

int main()

{

	//declare variables
	string FirstName;
	string LastName;
	int Grade1;
	int Grade2;
	int Grade3;
	int Grade4;
	int Grade5;
	int TotalPoints;
	double CourseScore;
	char FinalGradeLetter;
	double FinalPercentage;
	

	//prompt user input for variable values
	//
	cout << "Enter First Name: " << '\n';
	cin >> FirstName;

	if (cin.fail())
	{
		cin.clear();
		cin.ignore(200, '\n');
		cout << "Enter First Name: ";
		cin >> FirstName;
	}
	else
	FirstName[0] = toupper(FirstName[0]);

	cout << "Enter Last Name: " << '\n';
	cin >> LastName;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore();
		cout << "Enter Last Name: ";
		cin >> FirstName;
	}
	LastName[0] = toupper(LastName[0]);

	cout << "Enter Exam Score 1: " << '\n';
	cin >> Grade1;

	while ((cin.fail()) || (Grade1 < 0) || (Grade1 > 100))
	{
		cin.clear();
		cin.ignore();
		cout << "Enter Exam Score 1: " << '\n';
		cin >> Grade1;
	}


	cout << "Enter Exam Score 2: " << '\n';
	cin >> Grade2;

	while ((cin.fail()) || (Grade2 < 0) || (Grade2 > 100))
	{
		cin.clear();
		cin.ignore();
		cout << "Enter Exam Score 2: " << '\n';
		cin >> Grade2;
	}
	cout << "Enter Exam Score 3: " << '\n';
	cin >> Grade3;
	while ((cin.fail()) || (Grade3 < 0) || (Grade3 > 100))
	{
		cin.clear();
		cin.ignore();
		cout << "Enter Exam Score 3: " << '\n';
		cin >> Grade3;
	}
	cout << "Enter Exam Score 4: " << '\n';
	cin >> Grade4;
	while ((cin.fail()) || (Grade4 < 0) || (Grade4 > 100))
	{
		cin.clear();
		cin.ignore();
		cout << "Enter Exam Score 4: " << '\n';
		cin >> Grade4;
	}
	cout << "Enter Exam Score 5: " << '\n';
	cin >> Grade5;
	while ((cin.fail()) || (Grade5 < 0) || (Grade5 > 100))
	{
		cin.clear();
		cin.ignore();
		cout << "Enter Exam Score 5: " << '\n';
		cin >> Grade5;
	}

	TotalPoints = (Grade1 + Grade2 + Grade3 + Grade4 + Grade5);
	CourseScore = TotalPoints / 500.00;
	{
		FinalPercentage = (CourseScore * 100);
		cout.precision(1);
		cout << fixed;
	}

	if (FinalPercentage >= 90)
	{
		FinalGradeLetter = 'A';
	}
	else if (FinalPercentage >= 80)
	{
		FinalGradeLetter = 'B';
	}
	else if (FinalPercentage >= 70)
	{
		FinalGradeLetter = 'C';
	}
	else if (FinalPercentage >= 60)
	{
		FinalGradeLetter = 'D';
	}
	else 
	{
		FinalGradeLetter = 'F';
}
	

	 
	cout << LastName << ", " << FirstName << '\t' << FinalGradeLetter << " (" << TotalPoints << "/500 = " << FinalPercentage << "%)" << '\n'; 



	//using a switch statement instead:

	switch (FinalGradeLetter)
	{
	case 'A':
		cout << LastName << ", " << FirstName << '\t' << FinalGradeLetter << " (" << TotalPoints << "/500 = " << FinalPercentage << "%)" << '\n';
		break;

	case 'B':
		cout << LastName << ", " << FirstName << '\t' << FinalGradeLetter << " (" << TotalPoints << "/500 = " << FinalPercentage << "%)" << '\n';
		break;
	case 'C':
		cout << LastName << ", " << FirstName << '\t' << FinalGradeLetter << " (" << TotalPoints << "/500 = " << FinalPercentage << "%)" << '\n';
		break;
	case 'D':
		cout << LastName << ", " << FirstName << '\t' << FinalGradeLetter << " (" << TotalPoints << "/500 = " << FinalPercentage << "%)" << '\n';
		break;
	case 'F':
		cout << LastName << ", " << FirstName << '\t' << FinalGradeLetter << " (" << TotalPoints << "/500 = " << FinalPercentage << "%)" << '\n';
		break;
	default:
		cout << "The grade is invalid.";
	}

	system(0);
}

//PROBLEMS--ACCEPTS DECIMAL INPUTS, ALSO STILL ACCEPTS NON ALPHABETIC INPUTS FOR NAMES
//remember to remove the switch statement OR the nested ifs
//reject any non alphabetic (right word?) inputs for names
//does putting the setprecision inside the brackets for percentage make it only apply to the percentage?