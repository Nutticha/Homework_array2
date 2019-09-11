#include<iostream>

#include<string>

using namespace std;

void ListStudent(int num ,string a[100], int score[100]);

char Calgrade(int score[100], int i);

int main()

{

	string a[100];

	int	i,num,score[100];

	cout << "Input Number of Student : ";

	cin >> num;

	for(i=0;i<num;i++)

	{

		

		cout << "Input Name " << " : " ; 

		cin >> a[i];

		cout << "Input Score " << i+1 << " : ";

		cin >> score[i];

		cout << endl;

	}



    ListStudent( num, a,score);

}

 

char Calgrade( int score[100], int i)

{

	char grade;

	if(score[i] >= 80 && score[i] <= 100 )

	{

		grade = 'A';

	}

	else if (score[i] >= 70 && score[i] <= 79)

	{

		grade = 'B';

	}

	else if (score[i] >= 60 && score[i] <= 69)

	{

		grade = 'C';

	}

	else 

	{

		grade = 'D';

	}

	return(grade);

}

void ListStudent(int num ,string a[100], int score[100])

{

	char grade;

	for(int i = 0 ;i < num;i++)

	{

	   cout << "Student Name : " << a[i] ;

	   cout << " Score " << i+1 << " = " << score[i] << " Your grade is ";

	   grade = Calgrade(score,i);

	   cout << grade;

	   cout << endl;

	}

}