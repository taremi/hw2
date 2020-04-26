

#ifndef StudentClub_h
#define StudentClub_h

#include "Student.h"

#include <iostream>
#include <vector>
#include <string>

class StudentClub
{
private:
    //default constructors
    Student* president=new Student();
    Student* vice_president=new Student();
    Student* secretary=new Student();
    Student* treasurer=new Student();
    
public:
    //constructor
    StudentClub(Student* p, Student* v, Student* s, Student* t, std::vector<Student*> m);
    
    //accessors
    Student* get_president() const;
    Student* get_vice_president() const;
    Student* get_secretary() const;
    Student* get_treasurer() const;
    std::vector<Student*> get_members() const;
    void add_member(Student* s);
    size_t number_members() const;
};





#endif /* StudentClub_h */
