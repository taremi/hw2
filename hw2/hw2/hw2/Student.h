#ifndef Student_h
#define Student_h

#include <iostream>
#include <string>
#include <vector>

class Student
{
private:
    std::string name;
    
public:
    //constructors
    Student();
    Student(std::string name);
 
    //accessor
    std::string get_name() const;
    
    //mutator
    void set_president(Student* someone);

};


#endif /* Student_h */
