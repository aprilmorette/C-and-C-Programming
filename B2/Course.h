// Name: April Duff
// CWID: A20268249
// email-ID: apduff@okstate.edu

#ifndef COURSEH
#define COURSEH

#include <iostream>
#include <string>

using namespace std;

class Course {
    
	private:
		string courseNumber;
		string courseTitle;
	
	public:
		void SetCourseNumber(string num);
		void SetCourseTitle(string title);

		string GetCourseNumber();
		string GetCourseTitle();

		void PrintInfo();
};

#endif