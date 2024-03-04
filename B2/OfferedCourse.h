// Name: April Duff
// CWID: A20268249
// email-ID: apduff@okstate.edu

#ifndef OFFERED_COURSEH
#define OFFERED_COURSEH

#include "Course.h"

class OfferedCourse : public Course {

	private:
		string instructorName;
		string courseTerm;
		string courseTime;

	public:
		void SetInstructorName(string name);
		void SetTerm(string term);
		void SetClassTime(string time);

		string GetInstructorName();
		string GetTerm();
		string GetClassTime();
};

#endif