#pragma
#include <string>

class Student{
public:
    Student(std::string name, std::string number, int quiz1, int quiz2, int quiz3);

    std::string get_name();
    std::string get_id_number();
    int get_first_quiz();
    int get_second_quiz();
    int get_third_quiz();

    void set_quiz_one(int& quiz);
    void set_quiz_two(int& quiz2);
    void set_quiz_three(int& quiz3);

    double average();

    void print_details();

private:
    std::string student_name;
    std::string id_number;
    int first_quiz;
    int second_quiz;
    int third_quiz;
};
