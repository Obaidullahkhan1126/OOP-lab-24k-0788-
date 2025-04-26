#ifndef LABCOURSE_H
#define LABCOURSE_H

#include "Course.h"

class labcourse : public Course {
private:
    double labTasks, project;

public:
    labcourse(string code, int cr, double lab, double proj);

    void calculateGrade();
    void displayInfo();
};

#endif