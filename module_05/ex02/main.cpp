#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat  B("john", 1);
        Bureaucrat  C(B);
        std::cout << "name: " << B.getName() << std::endl;
        std::cout << "grade: " << B.getGrade() << std::endl;

        std::cout << "name: " << C.getName() << std::endl;
        std::cout << "grade: " << C.getGrade() << std::endl;
        std::cout << B;
        std::cout << C;
        B.decrement_grade();
        B.decrement_grade();
        std::cout << B;
        std::cout << "grade: " << B.getGrade() << std::endl;
        
        C.increment_grade();
        std::cout << "grade: " << C.getGrade() << std::endl;
    }
    catch(std::exception &exp)
    {
        std::cerr << exp.what() << std::endl;
        return 1;
    }
}