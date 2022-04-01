#include <iostream>
#include <string>
#include <iomanip>
#include "Student.h"

int main(){
    char yes_or_no;
    int quiz_number;
    int new_grade;
    
    Student student("Mustafa Al Lail", "970875", 85, 100, 95);

    student.print_details();

    std::cout << "Do you want to change any of the quizzes' grades (Y or N) : ";
    //for(std::size_t i{ 0 }; i < 48; ++i) std::cout << '~';
    std::cin >> yes_or_no;

    do{
        switch(yes_or_no){
        case 'Y':
            std::cout << "Which quiz to you want to change ( 1 or 2 or 3 ): " << '\n';
            std::cin >> quiz_number;

            std::cout << "Enter the grade for " << quiz_number << '\n';
            std::cin >> new_grade;
            
            switch(quiz_number){
                case 1:
                    student.set_quiz_one(new_grade);
                    break;
                case 2:
                    student.set_quiz_two(new_grade);
                    break;
                case 3:
                    student.set_quiz_three(new_grade);
                    break;
                default:
                    break;
            }
            student.print_details();
            std::cout << "Do you want to change any of the quizzes' grades (Y or N) : ";
            //for(std::size_t i{ 0 }; i < 48; ++i) std::cout << '~';
            std::cin >> yes_or_no;
            break;
        case 'N':
            
            return 0;
            break;
        default:
            student.print_details();
            return 0;
            break;
        }
    }while(true);

    return 0;
}
