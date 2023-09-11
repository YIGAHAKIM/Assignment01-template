#include <iostream>
#include <string>
using namespace std;
int main(){
	int num_of_students;
	cout<<"Enter the number of students\n";
	cin>>num_of_students;
	int num_of_tests;
	cout<<"Enter the number of tests for each student\n";
	cin>>num_of_tests;
	
	string name[num_of_students];
	double testmark[num_of_students][num_of_tests];
	double sum =0.0;
	double ave;
	int y=1;
	double class_sum,class_average;

	for(int i=0;i<num_of_students;i++){
		cout<<"Enter name for student "<<i+1<<": ";
		cin>>name[i];
		cout<<"Enter the "<<num_of_tests<<" testscores for "<<name[i]<<":\n ";
	for (int j=0;j<num_of_tests;j++){
		cin>>testmark[i][j]; 
	}
	}
	cout<<"\n";	
	cout<<"Students Grades\n";
	for(int i=0;i<num_of_students;i++){
		double sum =0.0;
		for (int j=0;j<num_of_tests;j++){
			sum+=testmark[i][j];
		}
	ave=(sum/num_of_tests);
	class_sum+=ave;
    cout<<name[i]<<"'s "<<"average score: "<< ave <<endl;	 
	}
	class_average=class_sum/num_of_students;
	cout<<"\n";
	cout<<"Class averages\n";
	cout<< "The class average is: "<< class_average <<endl;
	
	
cout<<"\n";
cout<<"Test Averages\n";
	 for (int i = 0; i < num_of_students; i++){
	   	double test_sum= 0;
	   	double test_average;
	   	for (int j = 0; j < num_of_students; j++){
	   		test_sum += testmark[j][i];
		   }
		   test_average = test_sum /num_of_students;
		   cout << "Test " << y <<" Average score: " << test_average << endl;
		   y++;
	   }
	
}
