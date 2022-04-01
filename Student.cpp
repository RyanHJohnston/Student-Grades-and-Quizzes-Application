#include <string>
#include <iostream>
#include <iomanip>
#include "Student.h"
const int NUM_TITLE_OPERATOR = 48;

// Constructor
Student::Student(std::string name, std::string number, int quiz1, int quiz2, int quiz3){
    student_name = name;
    id_number = number;
    first_quiz = quiz1;
    second_quiz = quiz2;
    third_quiz = quiz3;
}

// Accessor Functions ----------------------------------------------------------------------
std::string Student::get_name(){
    return student_name;
}

std::string Student::get_id_number(){
    return id_number;
}

int Student::get_first_quiz(){
    return first_quiz;
}

int Student::get_second_quiz(){
    return second_quiz;
}

int Student::get_third_quiz(){
    return third_quiz;
}

// Mutator Functions ------------------------------------------------------------------------
void Student::set_quiz_one(int& quiz){
    first_quiz = quiz;
}

void Student::set_quiz_two(int& quiz2){
    second_quiz = quiz2;
}

void Student::set_quiz_three(int& quiz3){
    third_quiz = quiz3;
}

// ETC Functions-----------------------------------------------------------------
double Student::average(){
    return ((double) first_quiz + (double) second_quiz + (double) third_quiz ) / 3;
}

void Student::print_details(){
    for(std::size_t i{ 0 }; i < NUM_TITLE_OPERATOR; ++i) std::cout << '~'; 
    std::cout << '\n';
    
    std::cout << "Student Name: " << student_name << '\n';
    std::cout << "Student ID: " << id_number << '\n';
    std::cout << "Quiz Grades: " << first_quiz << " " << second_quiz << " " << third_quiz << '\n';
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "The student's quiz average is: " << average() << '\n';

    for(std::size_t i{ 0 }; i < NUM_TITLE_OPERATOR; ++i) std::cout << '~'; 
    std::cout << '\n';
}
