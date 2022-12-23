#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
char findGrade(double grade){
    
    if( grade > 90){
        char a = 'A';
        return a;
    } 
    else if(grade > 75 and grade <= 90){
        char b = 'B';
        return b;
    }
    else if(grade > 60 and grade <= 75){
        char c = 'C';
        return c;
    }
    else if(grade > 45 and grade <= 60){
        char d = 'D';
        return d;
    }
    else{
        char f = 'F';
        return f;
    }
}
int main(){
	//Input the number of students
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
	
	//Store names and scores of students into an array 
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
		getline(cin,name[i]);
		cout << "Score of student " << i+1 << ": ";
		cin >> score[i];
		i++;
	}
	
	//Print names scores and grades
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}
