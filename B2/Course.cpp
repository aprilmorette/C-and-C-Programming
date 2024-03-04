// Name: April Duff
// CWID: A20268249
// email-ID: apduff@okstate.edu

#include "Course.h"

	void Course::SetCourseNumber(string num) {
		courseNumber = num;
	}
	void Course::SetCourseTitle(string title) {
		courseTitle = title;
	}

	string Course::GetCourseNumber() {
		return courseNumber;
	}
	string Course::GetCourseTitle() {
		return courseTitle;
	}

	void Course::PrintInfo() {
		cout << "Course Information: " << endl;
		cout << "   Course Number: " << courseNumber << endl;
		cout << "   Course Title: " << courseTitle << endl;
	}