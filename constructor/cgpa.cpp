#include<iostream>
using namespace std;

class Student {
private:
    string name, studentID;
    int number_of_enrolled_courses;
    string course_name[3];
    string grade[3];
    float total_grades = 0;
    int creditHours[3], total_hours = 0;
    int hoursAttended[3], totalHoursAttended = 0;

public:
    Student(string n, string id) {
        name = n;
        studentID = id;
        enroll();
    }   

    void enroll() {
        // Input validation for number of courses
        do {
            cout << "Enter number of courses you want to enroll (max 3): ";
            cin >> number_of_enrolled_courses;
            
            if (number_of_enrolled_courses > 3) {
                cout << "Maximum 3 courses allowed. Please try again." << endl;
            }
        } while (number_of_enrolled_courses > 3);

        cout << "Enter course names: " << endl;
        for (int i = 0; i < number_of_enrolled_courses; i++) {
            cin >> course_name[i];
        }

        cout << "Enter grades respectively: " << endl;
        for (int i = 0; i < number_of_enrolled_courses; i++) {
            cin >> grade[i];
        }
        
        gradePoint();
    }
    
    float gradePoint() {
        total_grades = 0;
        for (int i = 0; i < number_of_enrolled_courses; i++) {
            float point = 0;            
            if (grade[i] == "A") point = 4.0;
            else if (grade[i] == "A-") point = 3.67;
            else if (grade[i] == "B+") point = 3.33;
            else if (grade[i] == "B") point = 3.00;
            else if (grade[i] == "B-") point = 2.67;
            else if (grade[i] == "C+") point = 2.33;
            else if (grade[i] == "C") point = 2.00;
            else if (grade[i] == "C-") point = 1.67;
            else if (grade[i] == "D+") point = 1.33;
            else if (grade[i] == "D") point = 1.00;
            else point = 0.00;

            total_grades += point;
        }
        
        totalCreditHours();
        return total_grades;
    }
    
    void totalCreditHours() {
        total_hours = 0;
        cout << "Enter credit hours respectively: ";
        for (int i = 0; i < number_of_enrolled_courses; i++) {
            cin >> creditHours[i];
            total_hours += creditHours[i];
        }
        
        creditHoursAttended();
    }
    
    void creditHoursAttended() {
        totalHoursAttended = 0;
        cout << "Enter credit hours attended respectively: ";
        for (int i = 0; i < number_of_enrolled_courses; i++) {
            cin >> hoursAttended[i];
            totalHoursAttended += hoursAttended[i];
        }
        
        calculation();
    }
    
    float calculation() {
        float total_quality_points = 0;
        for (int i = 0; i < number_of_enrolled_courses; i++) {
            float point = 0;
            // Grade point conversion
            if (grade[i] == "A") point = 4.0;
            else if (grade[i] == "A-") point = 3.67;
            else if (grade[i] == "B+") point = 3.33;
            else if (grade[i] == "B") point = 3.00;
            else if (grade[i] == "B-") point = 2.67;
            else if (grade[i] == "C+") point = 2.33;
            else if (grade[i] == "C") point = 2.00;
            else if (grade[i] == "C-") point = 1.67;
            else if (grade[i] == "D+") point = 1.33;
            else if (grade[i] == "D") point = 1.00;
            else point = 0.00;
            
            // Multiply grade points by credit hours
            total_quality_points += point * creditHours[i];
        }
        
        // CGPA = Total Quality Points / Total Credit Hours
        float cgpa = total_quality_points / total_hours;
        return cgpa;
    }
    
    void show() {
        cout << "Name: " << name << endl;
        cout << "Student ID: " << studentID << endl;
        
        // Display course details
        for (int i = 0; i < number_of_enrolled_courses; i++) {
            cout << "Course " << i+1 << ": " 
                 << course_name[i] << ", Grade: " 
                 << grade[i] << ", Credit Hours: " 
                 << creditHours[i] << endl;
        }
        
        // Calculate and display CGPA
        float final_cgpa = calculation();
        cout << "CGPA: " << final_cgpa << endl;
    }
};

int main() {
    Student obj1("Zainab", "G1F23UBSCS257");
    return 0;
}