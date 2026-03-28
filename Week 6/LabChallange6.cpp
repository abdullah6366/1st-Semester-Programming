#include<iostream>
using namespace std;
int main(){
    string correctUsername = "admin";
    string correctPassword = "1234";
    string usernames[3];
    string enteredPassword;
    bool login = false;
    int choice;
    string studentNames[3],courses[3];
    int studentAges[3],studentCount = 0,courseCount = 0;
    for (int i = 0; i < 3; i++){
        cout << "Enter username : ";
        cin >> usernames[i];
        cout << "Enter password : ";
        cin >> enteredPassword;
        if (usernames[i] == correctUsername && enteredPassword == correctPassword){
            login = true;
            cout << "Login Successful\n";
            break;  } else {
            cout << "Incorrect credentials\n"; } }
    if (login == true){
        while (true){
            cout << "\n--- University Management System ---\n";
            cout << "1. Add Student\n";
            cout << "2. View Students\n";
            cout << "3. Add Course\n";
            cout << "4. View Courses\n";
            cout << "5. Exit\n";
            cout << "Enter your choice : ";
            cin >> choice;
             if (choice == 1){
                if (studentCount < 3){
                    cout << "Enter student name : ";
                    cin >> studentNames[studentCount];
                    cout << "Enter student age : ";
                    cin >> studentAges[studentCount];
                    studentCount++;
                    cout << "Student added successfully!\n";
                } else {
                    cout << "Student limit reached!\n";  } }
            else if (choice == 2){
                if (studentCount == 0){
                    cout << "No students added yet\n";
                } else {  for (int i = 0; i < studentCount; i++){
                        cout << "Student " << i+1 << " : "
                             << studentNames[i]
                             << ", Age : " << studentAges[i] << endl; } } }
            else if (choice == 3){
                if (courseCount < 3){
                    cout << "Enter course name : ";
                    cin >> courses[courseCount];
                    courseCount++;
                    cout << "Course added successfully!\n";
                } else {
                    cout << "Course limit reached!\n"; } }
            else if (choice == 4){
                if (courseCount == 0){
                    cout << "No courses added yet\n";  } else {
                    for (int i = 0; i < courseCount; i++){
                        cout << "Course " << i+1 << " : " << courses[i] << endl; } } }
            else if (choice == 5){
                cout << "Exiting system. Goodbye!\n";
                break; }
            else {  cout << "Invalid choice\n"; } } }
    else {  cout << "Too many incorrect attempts. Access denied.\n"; }
}