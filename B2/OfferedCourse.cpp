// Name: April Duff
// CWID: A20268249
// email-ID: apduff@okstate.edu

#include "OfferedCourse.h"

    void OfferedCourse::SetInstructorName(string name) {
        instructorName = name;
    }
    void OfferedCourse::SetTerm(string term) {
        courseTerm = term;
    }
    void OfferedCourse::SetClassTime(string time) {
        courseTime = time;
    }

    string OfferedCourse::GetInstructorName() {
        return instructorName;
    }
    string OfferedCourse::GetTerm() {
        return courseTerm;
    }
    string OfferedCourse::GetClassTime() {
        return courseTime;
    }