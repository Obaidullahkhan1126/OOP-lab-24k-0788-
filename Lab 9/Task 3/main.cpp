#include <iostream>
#include "LectureCourse.h"
#include "LabCourse.h"
using namespace std;

int main() {
    Course* c1 = new LectureCourse("CS102", 3, 30, 50);
    Course* c2 = new LabCourse("CS102L", 1, 20, 30);

    c1->displayInfo();
    c1->calculateGrade();

    cout << endl;

    c2->displayInfo();
    c2->calculateGrade();

    delete c1;
    delete c2;

    return 0;
}