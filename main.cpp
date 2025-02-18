#include <iostream>
#include <vector>
#include <string>
#include <Windows.h>
#include <conio.h>

int main()
{
    std::vector<std::string> subjects{};
    std::vector<int> weight{};
    std::vector<double> grade{};
    int nSubject{0};
    double product_sum{0};
    double GPA{0};
    int Totweight{0};

    std::cout << "Hello, This program is used to calculate weighted GPA, you will have to insert Subject Name(Optional instead you could just type 1, 2, 3, etc to avoid) , Subject Weight, and The subject(s) grade. Press Enter to countinue" << std::endl;

    getch();

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "--------------------------------------" << std::endl;
    std::cout << "How many Subjects are you taking ?  " << std::endl;
    std::cin >> nSubject;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "--------------------------------------" << std::endl;
    std::cout << "Enter Each Subject's name when you are prompted to (WITHOUT SPACES)" << std::endl;
    std::cout << std::endl;


    // Inserting data into the string vector
    for (size_t i{0}; i < nSubject; i++)
    {
        std::string sName;
        std::cout << "Subject " << i + 1 << " : ";
        std::cin >> sName;
        subjects.push_back(sName);
        std::cout << std::endl;
        // std::clog << " ---------- Item Inserted" << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "--------------------------------------" << std::endl;

    std::cout << "Enter The weight of Each subject (in hours, only integers and without the hour symbol)" << std::endl;
    std::cout << std::endl;
    // Submitting the weight of each Subject
    for (size_t i{0}; i < nSubject; i++)
    {
        int vweight{};
        std::cout << "Enter the weight of " << subjects[i] << " : ";
        std::cin >> vweight;
        weight.push_back(vweight);
        std::cout << std::endl;

        // std::clog << " ---------Weight Added" << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "--------------------------------------" << std::endl;

    std::cout << "Please Enter The Grade for Each subject" << std::endl;
    std::cout << std::endl;

    for (size_t i{0}; i < nSubject; i++)
    {
        double vgrade{};
        std::cout << "Enter the grade of " << subjects[i] << " : ";
        std::cin >> vgrade;
        grade.push_back(vgrade);
        std::cout << std::endl;

        // std::clog << " ---------Grade Added" << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "--------------------------------------" << std::endl;
    std::cout << "With this list of subjects and their respective weights and grades" << std::endl;
    // Printing values 
    for (size_t i{0}; i < nSubject; i++)
    {
        std::cout << "Subject " << i + 1 << " is " << subjects[i] << " with a weight of " << weight[i] << " hours and a grade of " << grade[i] << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "--------------------------------------" << std::endl;
    // Calculating the GPA -- The sum of products
    for (size_t i{0}; i < nSubject; i++)
    {
        double v_Sum{};
        v_Sum = grade[i] * weight[i];
        // std::clog << "Subject " << subjects[i] << " sum : " << v_Sum << std::endl;
        product_sum += v_Sum;
        // std::clog << " sum : " << product_sum << std::endl;
        Totweight += weight[i];
    }

    //std::clog << "Product Sum : " << product_sum << std::endl;
    //std::clog << "Total Weight : " << Totweight << std::endl;

    GPA = product_sum / Totweight;

    std::cout << "Your GPA would be : " << GPA << "% with the values you entered." << std::endl;
    std::cout << "Good Luck!";

    Sleep(3000);
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "--------------------------------------" << std::endl;
    std::cout << "Press Enter to Exit the Program." << std::endl;
    getch();

    return 0;
}