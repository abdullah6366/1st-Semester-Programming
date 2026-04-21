#include <iostream>
#include <conio.h>

using namespace std;
int main()
{

    int Total_Students = 1000; // Total Size
    int index = 2;

    // Data Structure
    string namesArr[Total_Students] = {"Ali", "Asad", "Ahmed", "Sara", "Usman", "Ayesha", "Bilal"};
    int ageArr[Total_Students] = {19, 19, 20, 18, 21, 19, 20};
    float matricArr[Total_Students] = {1050, 1043, 980, 1070, 1020, 1090, 950};
    float interArr[Total_Students] = {1040, 1055, 990, 1080, 1010, 1075, 960};
    float ecatArr[Total_Students] = {255, 306, 280, 320, 265, 310, 240};
    string pref1Arr[Total_Students] = {"CS", "CS", "AI", "DS", "CS", "AI", "DS"};
    string pref2Arr[Total_Students] = {"DS", "AI", "CS", "CS", "AI", "DS", "CS"};
    string pref3Arr[Total_Students] = {"AI", "DS", "DS", "AI", "DS", "CS", "AI"};
    float aggriArr[Total_Students];

    // CRUD ( create, read, update, delete )
    while (true)
    {
        // Main header of UMS
        system("cls");
        cout << "--------------------------------------------------------" << endl;
        cout << "---------University Admission Management System---------" << endl;
        cout << "--------------------------------------------------------" << endl;
        cout << endl;
        cout << endl;
        cout << "---------------------- User Menu ---------------------- " << endl;
        cout << "1. Admin " << endl;
        cout << "2. Student " << endl;
        cout << "3. Exit " << endl;
        cout << "Choose Option : ";
        int userOption;
        cin >> userOption;

        cout << "You choosed " << userOption << endl;
        if (userOption == 1)
        {
            // Write admin code here
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << " ----- ADMIN MENU -----" << endl;
                cout << "Login attempt : " << i + 1 << endl;
                cout << "Enter username : ";
                string username;
                cin >> username;
                cout << "Enter password : ";
                float password;
                cin >> password;
                if (username == "admin" && password == 123)
                {
                    cout << "Login Successful !!! " << endl;
                    cout << "Press any key to continue ..." << endl;
                    getch();
                    while (true)
                    {
                        system("cls");
                        cout << "1. Show all students " << endl;
                        cout << "2. Search Students " << endl;
                        cout << "3. Update student record " << endl;
                        cout << "4. Generate merit list " << endl;
                        cout << "5. Delete " << endl;
                        cout << "6. Log out " << endl;
                        cout << "Choose an option : ";
                        int adminOption;
                        cin >> adminOption;
                        if (adminOption == 1)
                        {
                            cout << "Name\t\tAge\t\tMatric\t\tInter\t\tEcat\t\tPref1\t\tPref2\t\tPref3" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (namesArr[i] != "")
                                {
                                    cout << namesArr[i] << "\t\t" << ageArr[i] << "\t\t" << matricArr[i] << "\t\t" << interArr[i] << "\t\t" << ecatArr[i] << "\t\t" << pref1Arr[i] << "\t\t" << pref2Arr[i] << "\t\t" << pref3Arr[i] << endl;
                                }
                            }
                        }
                        else if (adminOption == 2)
                        {
                            // Search Students
                            bool found = false;
                            cout << "Enter a name : ";
                            string name;
                            cin >> name;
                            for (int i = 0; i < index; i++)
                            {
                                if (namesArr[i] == name)
                                {
                                    cout << "Name\tAge\tMatric\tInter\tEcat\tPref1\tPref2\tPref3" << endl;
                                    cout << namesArr[i] << "\t" << ageArr[i] << "\t" << matricArr[i] << "\t" << interArr[i] << "\t" << ecatArr[i] << "\t" << pref1Arr[i] << "\t" << pref2Arr[i] << "\t" << pref3Arr[i] << endl;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << "No record found against the name : " << name << endl;
                            }
                        }
                        else if (adminOption == 3)
                        {
                            // Update student record
                            bool found = false;
                            cout << "Enter a name that you want to update : ";
                            string name;
                            cin >> name;
                            for (int i = 0; i < index; i++)
                            {
                                if (namesArr[i] == name)
                                {
                                    found = true;
                                    cout << "------Show old record ------" << endl;
                                    cout << "Name\tAge\tMatric\tInter\tEcat\tPref1\tPref2\tPref3" << endl;
                                    cout << namesArr[i] << "\t" << ageArr[i] << "\t" << matricArr[i] << "\t" << interArr[i] << "\t" << ecatArr[i] << "\t" << pref1Arr[i] << "\t" << pref2Arr[i] << "\t" << pref3Arr[i] << endl;

                                    cout << "Enter new records for update :" << endl;
                                    cout << "Enter your name : ";
                                    string newName;
                                    cin >> newName;
                                    cout << "Enter your age : ";
                                    int age;
                                    cin >> age;
                                    cout << "Enter your matric marks : ";
                                    float matric;
                                    cin >> matric;
                                    cout << "Enter your intermediate marks : ";
                                    float inter;
                                    cin >> inter;
                                    cout << "Enter your ECAT marks : ";
                                    float ecat;
                                    cin >> ecat;
                                    cout << "Enter CS, DS or AI as your prefrences " << endl;
                                    cout << "Enter your first prefrence : ";
                                    string pref1;
                                    cin >> pref1;
                                    cout << "Enter your second prefrence : ";
                                    string pref2;
                                    cin >> pref2;
                                    cout << "Enter your third and last prefrence : ";
                                    string pref3;
                                    cin >> pref3;

                                    namesArr[i] = newName;
                                    ageArr[i] = age;
                                    matricArr[i] = matric;
                                    interArr[i] = inter;
                                    ecatArr[i] = ecat;
                                    pref1Arr[i] = pref1;
                                    pref2Arr[i] = pref2;
                                    pref3Arr[i] = pref3;

                                    cout << "Record updated successfully!" << endl;
                                }
                            }
                            if (found == false)
                            {
                                cout << "No record found against the name : " << name << endl;
                            }
                        }
                        else if (adminOption == 4)
                        {
                            // Generate merit list
                            for (int i = 0; i < index; i++)
                            {
                                float aggri = matricArr[i] / 1100 * 100 * 0.3 + interArr[i] / 1200 * 100 * 0.4 + ecatArr[i] / 400 * 100 * 0.3;
                                aggriArr[i] = aggri;
                            }
                            // code to display all data with aggregate
                            cout << "Name\t\tAge\t\tAggregate" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (namesArr[i] != "")
                                {
                                    cout << namesArr[i] << "\t\t" << ageArr[i] << "\t\t" << aggriArr[i] << endl;
                                }
                            }
                            // code to display sorted data
                        }

                        else if (adminOption == 5)
                        {
                            // Delete
                            bool found = false;
                            cout << "Enter a name that you want to delete : ";
                            string name;
                            cin >> name;
                            for (int i = 0; i < index; i++)
                            {
                                if (namesArr[i] == name)
                                {
                                    found = true;
                                    namesArr[i] = "";
                                    ageArr[i] = 0;
                                    matricArr[i] = 0;
                                    interArr[i] = 0;
                                    ecatArr[i] = 0;
                                    pref1Arr[i] = "";
                                    pref2Arr[i] = "";
                                    pref3Arr[i] = "";
                                    cout << "Record deleted against the name " << name << endl;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Record not found against the name " << name << endl;
                            }
                        }
                        else if (adminOption == 6)
                        {
                            // log out
                            break;
                        }
                        else
                        {
                            // invalid Option
                        }
                        cout << "Press any key to continue ..." << endl;
                        getch();
                    }
                    getch();
                    break;
                }
                else
                {
                    cout << "Your username or password is wrong. Please try again. " << endl;
                    cout << "Press any key to continue ..." << endl;
                    getch();
                }
            }
        }
        else if (userOption == 2)
        {
            // Write user code here
            system("cls");
            cout << "--------Welcome to UMS Student Menu-------- " << endl;
            cout << "Enter your name : ";
            string name;
            cin >> name;
            cout << "Enter your age : ";
            int age;
            cin >> age;
            cout << "Enter your matric marks : ";
            float matric;
            cin >> matric;
            cout << "Enter your intermediate marks : ";
            float inter;
            cin >> inter;
            cout << "Enter your ECAT marks : ";
            float ecat;
            cin >> ecat;
            cout << "Enter CS, DS or AI as your prefrences " << endl;
            cout << "Enter your first prefrence : ";
            string pref1;
            cin >> pref1;
            cout << "Enter your second prefrence : ";
            string pref2;
            cin >> pref2;
            cout << "Enter your third and last prefrence : ";
            string pref3;
            cin >> pref3;

            namesArr[index] = name;
            ageArr[index] = age;
            matricArr[index] = matric;
            namesArr[index] = name;
            ageArr[index] = age;
            matricArr[index] = matric;
            interArr[index] = inter;
            ecatArr[index] = ecat;
            pref1Arr[index] = pref1;
            pref2Arr[index] = pref2;
            pref3Arr[index] = pref3;
            index = index + 1;
            cout << "Your data has been saved " << endl;
            cout << "Please press any character to continue ... " << endl;
            getch();
        }
        else if (userOption == 3)
        {
            break;
        }
        else
        {
            cout << "You entered wrong option : " << endl;
        }
    }
}