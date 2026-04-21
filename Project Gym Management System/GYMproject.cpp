#include <iostream>
#include <conio.h>

using namespace std;
int main()
{

    int Total_Members = 1000;
    int index = 7;

    // Data Structure
    string namesArr[Total_Members] = {"Ali", "Asad", "Ahmed", "Sara", "Usman", "Ayesha", "Saad"};
    int ageArr[Total_Members] = {19, 21, 20, 18, 21, 25, 20};
    float weightArr[Total_Members] = {65, 71, 70, 84, 69, 88, 72};
    float heightArr[Total_Members] = {178, 180, 175, 182, 186, 171, 184};
    string bodyArr[Total_Members] = {"lean", "bulk", "bulk", "bulk", "lean", "bulk", "lean"};
    string supplementsArr[5] = {"Protiens", "Creatine", "Caffinee", "Boosters", "Steroids"};
    float amount_supplementsArr[5] = {12, 10, 10, 20, 20};
    string genderArr[2] = {"Males", "Females"};
    string openingTimeArr[2] = {"5:00AM", "1:00PM"};
    string closingTimeArr[2] = {"12:00PM", "4:00"};
    float feeArr[2] = {3000, 2000};
    string daysArr[7] = {"Monday", "Tuesday", "Wednes", "Thurs", "Friday", "Satur", "Sunday"};
    string exerciseArr[7] = {"Chest", "Shoulder", "Back", "Biceps", "Triceps", "Legs", "Rest"};

    // History arrays for last 5 members added
    string historyNamesArr[5] = {"", "", "", "", ""};
    int historyAgeArr[5] = {0, 0, 0, 0, 0};
    float historyWeightArr[5] = {0, 0, 0, 0, 0};
    float historyHeightArr[5] = {0, 0, 0, 0, 0};
    string historyBodyArr[5] = {"", "", "", "", ""};
    int historyIndex = 0;

    while (true)
    {
        system("cls");
        cout << "=========================================================" << endl;
        cout << "|                 GYM Management System                 |" << endl;
        cout << "=========================================================" << endl;
        cout << endl;
        cout << endl;
        cout << "---------------------- User Menu ------------------------" << endl
             << endl;
        cout << "1. Manager Login " << endl;
        cout << "2. Member Login " << endl;
        cout << "3. Exit " << endl
             << endl;
        cout << "Choose Option : ";
        string userOption;
        cin >> userOption;

        cout << endl;
        cout << "You choosed " << userOption << "." << endl;
        if (userOption == "1")
        {
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
                if (username == "manager" && password == 123)
                {
                    cout << "Login Successful !!! " << endl;
                    cout << "Press any key to continue ..." << endl;
                    getch();
                    while (true)
                    {

                        system("cls");
                        cout << " ----- ADMIN MENU -----" << endl
                             << endl;
                        cout << "1. Show all Memberships " << endl;
                        cout << "2. Search Membership " << endl;
                        cout << "3. Add Membership " << endl;
                        cout << "4. History " << endl;
                        cout << "5. Delete Membership " << endl;
                        cout << "6. Sorting Members " << endl;
                        cout << "7. Avalible Supplements" << endl;
                        cout << "8. Add Supplements" << endl;
                        cout << "9. Time Table " << endl;
                        cout << "10. Fee structure " << endl;
                        cout << "11. Update fee structure " << endl;
                        cout << "12. Monthly Income " << endl;
                        cout << "13. Monthly profit " << endl;
                        cout << "14. Log out " << endl
                             << endl;
                        cout << "Choose an option : ";
                        string managerOption;
                        cin >> managerOption;
                        if (managerOption == "1")
                        {
                            cout << endl;
                            cout << "Name\t\tAge\t\tWeight\t\tHeight\t\tBody" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (namesArr[i] != "")
                                {
                                    cout << namesArr[i] << "\t\t" << ageArr[i] << "\t\t" << weightArr[i] << "\t\t" << heightArr[i] << "\t\t" << bodyArr[i] << endl;
                                }
                            }
                            cout << endl;
                            cout << "Press any key to continue ... " << endl;
                            getch();
                        }
                        else if (managerOption == "2")
                        {
                            bool found = false;
                            cout << endl;
                            cout << "Enter a name : ";
                            string name;
                            cin >> name;
                            for (int i = 0; i < index; i++)
                            {
                                if (namesArr[i] == name)
                                {
                                    cout << "Name\t\tAge\t\tWeight\t\tHeight\t\tBody" << endl;
                                    cout << namesArr[i] << "\t\t" << ageArr[i] << "\t\t" << weightArr[i] << "\t\t" << heightArr[i] << "\t\t" << bodyArr[i] << endl;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << "No record found against the name : " << name << endl;
                            }
                            cout << endl;
                            cout << "Press any key to continue..." << endl;
                            getch();
                        }
                        else if (managerOption == "3")
                        {
                            system("cls");
                            cout << "Please choose an option for Fee Payment " << endl;
                            cout << " 1. Paid " << endl;
                            cout << " 2. Not paid " << endl;
                            int paymentOption;
                            cout << "Payment option : ";
                            cin >> paymentOption;

                            if (paymentOption == 1)
                            {
                                cout << endl;
                                cout << "The person has paid the fee." << endl;
                                cout << endl;
                                cout << "-----------Adding Membership----------- " << endl;
                                cout << endl;
                                cout << "Enter person's name : ";
                                string name;
                                cin >> name;
                                cout << "Enter person's age : ";
                                int age;
                                cin >> age;
                                cout << "Enter person's body weight in kg : ";
                                float weight;
                                cin >> weight;
                                cout << "Enter person's height in centimeters : ";
                                float height;
                                cin >> height;
                                cout << "Enter person's body type ( lean or bulk ) : ";
                                string body;
                                cin >> body;

                                namesArr[index] = name;
                                ageArr[index] = age;
                                weightArr[index] = weight;
                                heightArr[index] = height;
                                bodyArr[index] = body;
                                index = index + 1;

                                // Saving to history
                                if (historyIndex < 5)
                                {
                                    historyNamesArr[historyIndex] = name;
                                    historyAgeArr[historyIndex] = age;
                                    historyWeightArr[historyIndex] = weight;
                                    historyHeightArr[historyIndex] = height;
                                    historyBodyArr[historyIndex] = body;
                                    historyIndex = historyIndex + 1;
                                }
                                else
                                {
                                    // Shift all records up by one to make room for new one
                                    for (int i = 0; i < 4; i++)
                                    {
                                        historyNamesArr[i] = historyNamesArr[i + 1];
                                        historyAgeArr[i] = historyAgeArr[i + 1];
                                        historyWeightArr[i] = historyWeightArr[i + 1];
                                        historyHeightArr[i] = historyHeightArr[i + 1];
                                        historyBodyArr[i] = historyBodyArr[i + 1];
                                    }
                                    historyNamesArr[4] = name;
                                    historyAgeArr[4] = age;
                                    historyWeightArr[4] = weight;
                                    historyHeightArr[4] = height;
                                    historyBodyArr[4] = body;
                                }

                                cout << endl;
                                cout << "Person's data has been saved. " << endl;
                            }
                            else if (paymentOption == 2)
                            {
                                cout << "Person has not submitted the fee yet. Can't add membership record  " << endl;
                            }
                            else
                            {
                                cout << "Invalid payment option..." << endl;
                            }
                            cout << endl;
                            cout << "Please press any character to continue ... " << endl;
                            getch();
                        }
                        else if (managerOption == "4")
                        {
                            // History of last 5 members added
                            cout << endl;
                            cout << "------- History of Last 5 Members Added -------" << endl;
                            cout << endl;
                            if (historyIndex == 0)
                            {
                                cout << "No history available yet." << endl;
                            }
                            else
                            {
                                cout << "Name\t\tAge\t\tWeight\t\tHeight\t\tBody" << endl;
                                for (int i = 0; i < historyIndex; i++)
                                {
                                    if (historyNamesArr[i] != "")
                                    {
                                        cout << historyNamesArr[i] << "\t\t" << historyAgeArr[i] << "\t\t" << historyWeightArr[i] << "\t\t" << historyHeightArr[i] << "\t\t" << historyBodyArr[i] << endl;
                                    }
                                }
                            }
                            cout << endl;
                            cout << "Press any key to continue ... " << endl;
                            getch();
                        }
                        else if (managerOption == "5")
                        {
                            bool found = false;
                            cout << "Enter the members's name that you want to delete the membership : ";
                            string memberName;
                            cin >> memberName;
                            for (int i = 0; i < index; i++)
                            {
                                if (namesArr[i] == memberName)
                                {
                                    cout << endl;
                                    cout << " -------------------Members's previous record------------------- " << endl;
                                    cout << endl;
                                    cout << "Name\t\tAge\t\tWeight\t\tHeight\t\tBody" << endl;
                                    cout << namesArr[i] << "\t\t" << ageArr[i] << "\t\t" << weightArr[i] << "\t\t" << heightArr[i] << "\t\t" << bodyArr[i] << endl;
                                    cout << endl;
                                    cout << "Deleting member's record ...." << endl;
                                    found = true;
                                    namesArr[i] = "";
                                    ageArr[i] = 0;
                                    weightArr[i] = 0;
                                    heightArr[i] = 0;
                                    bodyArr[i] = "";
                                    cout << "Record deleted against the name " << memberName << "." << endl;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Record not found against the name " << memberName << endl;
                            }
                            cout << endl;
                            cout << "Press any key to continue ... " << endl;
                            getch();
                        }
                        else if (managerOption == "6")
                        {
                            cout << endl;
                            cout << "---- Sorting on the basis of age ----" << endl
                                 << endl;
                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i + 1; j < index; j++)
                                {
                                    if (ageArr[i] < ageArr[j])
                                    {
                                        string temp = namesArr[i];
                                        namesArr[i] = namesArr[j];
                                        namesArr[j] = temp;

                                        int tempAge = ageArr[i];
                                        ageArr[i] = ageArr[j];
                                        ageArr[j] = tempAge;

                                        float tempweight = weightArr[i];
                                        weightArr[i] = weightArr[j];
                                        weightArr[j] = tempweight;

                                        float tempheight = heightArr[i];
                                        heightArr[i] = heightArr[j];
                                        heightArr[j] = tempheight;

                                        string tempbody = bodyArr[i];
                                        bodyArr[i] = bodyArr[j];
                                        bodyArr[j] = tempbody;
                                    }
                                }
                            }
                            cout << "Name\t\tAge\t\tWeight\t\tHeight\t\tBody" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (namesArr[i] != "")
                                {
                                    cout << namesArr[i] << "\t\t" << ageArr[i] << "\t\t" << weightArr[i] << "\t\t" << heightArr[i] << "\t\t" << bodyArr[i] << endl;
                                }
                            }
                            cout << endl;
                            cout << "Press any key to continue ..." << endl;
                            getch();
                        }

                        else if (managerOption == "7")
                        {
                            cout << endl;
                            cout << "------Avalible Supplements-----" << endl
                                 << endl;
                            cout << "Showing you avalible stock of supplements in kilograms." << endl
                                 << endl;
                            for (int i = 0; i < 5; i++)
                            {
                                cout << supplementsArr[i] << "\t\t" << amount_supplementsArr[i] << endl;
                            }
                            cout << "Press any key to continue ... " << endl;
                            getch();
                        }
                        else if (managerOption == "8")
                        {
                            bool found = false;
                            cout << "Enter the name of the supplement that you want to update record of : ";
                            string supplement_name;
                            cin >> supplement_name;
                            for (int i = 0; i < 5; i++)
                            {
                                if (supplementsArr[i] == supplement_name)
                                {
                                    found = true;
                                    cout << endl;
                                    cout << "Showing you the  current amount of this supplement avalible in kg. " << endl;
                                    cout << endl;
                                    cout << "--------Pervious Amount in kg--------" << endl;
                                    cout << supplementsArr[i] << "\t\t\t" << amount_supplementsArr[i] << endl
                                         << endl;

                                    cout << "Enter the amount of product added in kg:  ";
                                    float amount_supplement_added;
                                    cin >> amount_supplement_added;
                                    amount_supplementsArr[i] = amount_supplementsArr[i] + amount_supplement_added;
                                    cout << "The new amount of product avalible in kg : " << amount_supplementsArr[i] << endl;
                                }
                            }
                            if (found == false)
                            {
                                cout << "No supplement avalible for such name." << endl;
                            }
                            cout << endl;
                            cout << "Press any key to continue ... " << endl;
                            getch();
                        }
                        else if (managerOption == "9")
                        {
                            cout << endl;
                            cout << "Are you male or a female? " << endl
                                 << endl;
                            cout << "1. Male " << endl;
                            cout << "2. Female " << endl;
                            int genderOption;
                            cout << endl;
                            cout << "I choose option : ";
                            cin >> genderOption;
                            cout << endl;
                            cout << "Timing for gym opening and closing for you is given below." << endl
                                 << endl;
                            cout << "-------- Time Table --------" << endl;
                            cout << endl;

                            if (genderOption == 1)
                            {
                                cout << genderArr[0] << " = " << openingTimeArr[0] << " to " << closingTimeArr[0] << endl;
                            }
                            else if (genderOption == 2)
                            {
                                cout << genderArr[1] << " = " << openingTimeArr[1] << " to " << closingTimeArr[1] << endl;
                            }
                            else
                            {
                                cout << "Invalid option entered " << endl;
                            }
                            cout << endl;
                            cout << "Press any key to continue ... " << endl;
                            getch();
                        }
                        else if (managerOption == "10")
                        {
                            cout << "Fee structure of GYM is given below" << endl;
                            cout << endl;
                            cout << "-----------Fee Structure----------" << endl
                                 << endl;
                            for (int i = 0; i < 2; i++)
                            {
                                cout << "Monthly fee for " << genderArr[i] << " is " << feeArr[i] << " Ruppees. " << endl;
                            }
                            cout << endl;
                            cout << "Press any key to continue ... " << endl;
                            getch();
                        }
                        else if (managerOption == "11")
                        {
                            bool found = false;
                            cout << endl;
                            cout << "Enter the gender for which you want to change the gym monthly fee ( Males or Females) : ";
                            string gender_change_fee;
                            cin >> gender_change_fee;
                            for (int i = 0; i < 2; i++)
                            {
                                if (genderArr[i] == gender_change_fee)
                                {
                                    found = true;
                                    cout << endl;
                                    cout << "-------- Old Fee Structure in Rupees --------" << endl;
                                    cout << endl;
                                    cout << "Monthly fee for " << genderArr[i] << " is " << feeArr[i] << " Ruppees. " << endl;
                                    cout << endl;
                                    cout << "Enter new fee for " << genderArr[i] << " in Ruppees " << " : ";
                                    float new_fee;
                                    cin >> new_fee;

                                    feeArr[i] = new_fee;
                                    cout << endl;
                                    cout << "Fee Updated Successfully..." << endl;
                                    cout << endl;
                                    cout << "---------- New Fee Structure ----------" << endl
                                         << endl;
                                    cout << "Monthly fee for " << genderArr[i] << " is " << feeArr[i] << " Ruppees. " << endl;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Invalid Input. Try again. Word is case sensitive." << endl;
                            }
                            cout << endl;
                            cout << "Press any character to continue..." << endl;
                            getch();
                        }
                        else if (managerOption == "12")
                        {
                            cout << endl;
                            cout << "Enter the number of Males in the gym : ";
                            float number_of_males;
                            cin >> number_of_males;
                            cout << "Enter the number of Females in the gym : ";
                            float number_of_females;
                            cin >> number_of_females;
                            cout << endl;
                            float monthly_income = (number_of_males * feeArr[0]) + (number_of_females * feeArr[1]);
                            cout << endl;
                            cout << "---------- Total Monthly Earning --------------" << endl
                                 << endl;
                            cout << "The total monthly income from the gym is " << monthly_income << " Rupees." << endl;
                            cout << endl;
                            cout << "Press any key to continue..." << endl;
                            getch();
                        }
                        else if (managerOption == "13")
                        {
                            cout << endl;
                            cout << "Enter the number of Males in the gym : ";
                            float number_of_males;
                            cin >> number_of_males;
                            cout << "Enter the number of Females in the gym : ";
                            float number_of_females;
                            cin >> number_of_females;
                            cout << endl;
                            float monthly_income = (number_of_males * feeArr[0]) + (number_of_females * feeArr[1]);
                            cout << endl;
                            cout << "---------- Total Monthly Earning --------------" << endl
                                 << endl;
                            cout << "The total monthly income from the gym is " << monthly_income << " Rupees." << endl;
                            cout << endl;
                            cout << "Enter the montly electricity bill of the gym in rupees  : ";
                            float electricity_bill;
                            cin >> electricity_bill;
                            cout << "Enter the rent of the gym place in rupees : ";
                            float gym_rent;
                            cin >> gym_rent;
                            cout << "Enter other expenditures in rupees ( if any ) : ";
                            float other_expenditures;
                            cin >> other_expenditures;
                            float calculation = monthly_income - (electricity_bill + gym_rent + other_expenditures);
                            if (calculation == 0)
                            {
                                cout << endl;
                                cout << "--------- Profit ---------" << endl
                                     << endl;
                                cout << "Profit of this month is 0 Rupees." << endl;
                            }
                            else if (calculation > 0)
                            {
                                cout << endl;
                                cout << "--------- Profit ---------" << endl
                                     << endl;
                                cout << "The profit of this month is " << calculation << " Rupees. " << endl;
                            }
                            else if (calculation < 0)
                            {
                                cout << endl;
                                cout << "--------- Loss ---------" << endl
                                     << endl;
                                cout << "You have a loss this month. " << calculation << " Rupees from your pocket. " << endl;
                            }
                            cout << endl;
                            cout << "Press any key to continue ... " << endl;
                            getch();
                        }
                        else if (managerOption == "14")
                        {
                            cout << endl;
                            cout << "Logging you out. " << endl;
                            cout << "Please press any key to continue ..." << endl;
                            getch();
                            break;
                        }
                        else
                        {
                            cout << "User entered invalid option " << endl;
                        }
                    }
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
        else if (userOption == "2")
        {
            while (true)
            {
                system("cls");
                cout << "------Welcome to Members Menu-------- " << endl;
                cout << endl;
                cout << "1. Online Registration " << endl;
                cout << "2. Check Membership record " << endl;
                cout << "3. View Time Table " << endl;
                cout << "4. View Fee structure " << endl;
                cout << "5. View Workout Schedule " << endl;
                cout << "6. Change workout schedule " << endl;
                cout << "7. BMI Calculation " << endl;
                cout << "8. Diet and Nutrition Plan " << endl;
                cout << "9. Workout Plans and Training " << endl;
                cout << "10. GYM instructions " << endl;
                cout << "11. Back " << endl;
                cout << endl;
                cout << "Choose an option : ";
                string memberOption;
                cin >> memberOption;
                cout << endl;
                if (memberOption == "1")
                {
                    cout << "-------- Online Membership Purchase ----------" << endl
                         << endl;
                    cout << "For online fee payment : Account number XYZ " << endl;
                    cout << "Please choose an option for Fee Payment " << endl;
                    cout << " 1. Paid " << endl;
                    cout << " 2. Not paid " << endl;
                    int paymentOption;
                    cout << "Payment option : ";
                    cin >> paymentOption;

                    if (paymentOption == 1)
                    {
                        cout << endl;
                        cout << "-----------Adding Membership----------- " << endl;
                        cout << endl;
                        cout << "Enter your name : ";
                        string name;
                        cin >> name;
                        cout << "Enter your age : ";
                        int age;
                        cin >> age;
                        cout << "Enter your body weight in kg : ";
                        float weight;
                        cin >> weight;
                        cout << "Enter your height in centimeters : ";
                        float height;
                        cin >> height;
                        cout << "Enter your body type ( lean or bulk ) : ";
                        string body;
                        cin >> body;

                        namesArr[index] = name;
                        ageArr[index] = age;
                        weightArr[index] = weight;
                        heightArr[index] = height;
                        bodyArr[index] = body;
                        index = index + 1;

                        // Saving to history
                        if (historyIndex < 5)
                        {
                            historyNamesArr[historyIndex] = name;
                            historyAgeArr[historyIndex] = age;
                            historyWeightArr[historyIndex] = weight;
                            historyHeightArr[historyIndex] = height;
                            historyBodyArr[historyIndex] = body;
                            historyIndex = historyIndex + 1;
                        }
                        else
                        {
                            for (int i = 0; i < 4; i++)
                            {
                                historyNamesArr[i] = historyNamesArr[i + 1];
                                historyAgeArr[i] = historyAgeArr[i + 1];
                                historyWeightArr[i] = historyWeightArr[i + 1];
                                historyHeightArr[i] = historyHeightArr[i + 1];
                                historyBodyArr[i] = historyBodyArr[i + 1];
                            }
                            historyNamesArr[4] = name;
                            historyAgeArr[4] = age;
                            historyWeightArr[4] = weight;
                            historyHeightArr[4] = height;
                            historyBodyArr[4] = body;
                        }

                        cout << endl;
                        cout << "Your membership record has been saved. " << endl;
                    }
                    else if (paymentOption == 2)
                    {
                        cout << endl;
                        cout << "You have not submitted the fee yet. Can't add membership record  " << endl;
                    }
                    else
                    {
                        cout << endl;
                        cout << "Invalid payment option..." << endl;
                    }
                    cout << endl;
                    cout << "Please press any key to continue ... " << endl;
                    getch();
                }
                else if (memberOption == "2")
                {
                    bool found = false;
                    cout << "Enter your name : ";
                    string name;
                    cin >> name;
                    cout << endl;
                    cout << "-------Membership Record-----" << endl
                         << endl;
                    for (int i = 0; i < index; i++)
                    {
                        if (namesArr[i] == name)
                        {
                            cout << "Name\t\tAge\t\tWeight\t\tHeight\t\tBody" << endl;
                            cout << namesArr[i] << "\t\t" << ageArr[i] << "\t\t" << weightArr[i] << "\t\t" << heightArr[i] << "\t\t" << bodyArr[i] << endl;
                            found = true;
                        }
                    }
                    if (found == false)
                    {
                        cout << endl;
                        cout << "No record found against the name : " << name << endl;
                    }
                    cout << endl;
                    cout << "Press any key to continue..." << endl;
                    getch();
                }
                else if (memberOption == "3")
                {
                    cout << "Are you male or a female? " << endl;
                    cout << "1. Male " << endl;
                    cout << "2. Female " << endl;
                    int genderOption;
                    cout << "I choose option : ";
                    cin >> genderOption;
                    cout << endl;
                    cout << "Timing for gym opening and closing for you is given below." << endl;
                    cout << endl;
                    cout << "------------Time Table---------------" << endl;
                    cout << endl;

                    if (genderOption == 1)
                    {
                        cout << genderArr[0] << " = " << openingTimeArr[0] << " to " << closingTimeArr[0] << endl;
                    }
                    else if (genderOption == 2)
                    {
                        cout << genderArr[1] << " = " << openingTimeArr[1] << " to " << closingTimeArr[1] << endl;
                    }
                    else
                    {
                        cout << "Invalid option entered " << endl;
                    }
                    cout << endl;
                    cout << "Press any key to continue ... " << endl;
                    getch();
                }
                else if (memberOption == "4")
                {
                    cout << "Fee structure of GYM is given below." << endl;
                    cout << endl;
                    cout << "-----------Fee Structure----------" << endl
                         << endl;
                    for (int i = 0; i < 2; i++)
                    {
                        cout << "Monthly fee for " << genderArr[i] << " is " << feeArr[i] << " Ruppees. " << endl;
                    }
                    cout << endl;
                    cout << "Press any key to continue ... " << endl;
                    getch();
                }
                else if (memberOption == "5")
                {
                    cout << "----------Current Weekly Exercise Plan--------- " << endl
                         << endl;
                    for (int i = 0; i < 7; i++)
                    {
                        cout << "Day \t\t" << daysArr[i] << "\t\t\t" << exerciseArr[i] << endl;
                    }
                    cout << endl;
                    cout << "Press any key to continue ... " << endl;
                    getch();
                }
                else if (memberOption == "6")
                {
                    cout << "-------Current Weekly Exercise Plan------ " << endl
                         << endl;
                    for (int i = 0; i < 7; i++)
                    {
                        cout << "Day \t\t" << daysArr[i] << "\t\t\t" << exerciseArr[i] << endl;
                    }
                    for (int i = 0; i < 7; i++)
                    {
                        cout << endl;
                        cout << "New execrcise for " << daysArr[i] << " is ";
                        string new_exercise;
                        cin >> new_exercise;
                        exerciseArr[i] = new_exercise;
                    }
                    cout << endl;
                    cout << "-------New Weekly Exercise Plan------ " << endl;
                    cout << endl;
                    for (int i = 0; i < 7; i++)
                    {
                        cout << "Day \t\t" << daysArr[i] << "\t\t\t" << exerciseArr[i] << endl;
                    }
                    cout << endl;
                    cout << "Press any key to continue ... " << endl;
                    getch();
                }
                else if (memberOption == "7")
                {
                    cout << "------------- BMI Calculator -----------" << endl;
                    cout << endl;
                    cout << "Enter your weight in kgs : ";
                    float weight;
                    cin >> weight;
                    cout << "Enter your Height in centimeters : ";
                    float height;
                    cin >> height;
                    float BMI;
                    BMI = ((weight * 10000) / (height * height));
                    cout << endl;
                    cout << "--------BMI--------" << endl
                         << endl;
                    cout << "Your body Mass Index is : " << BMI << "." << endl;
                    if (BMI < 18)
                    {
                        cout << "You are Underweight. Need to gain some weight. " << endl;
                    }
                    else if (BMI >= 18 && BMI <= 24)
                    {
                        cout << "You weight is perfect. Keep up the Good work!!!" << endl;
                    }
                    else if (BMI > 24)
                    {
                        cout << "You are over weight. Need to lose some weight. " << endl;
                    }
                    cout << endl;
                    cout << "Press any key to continue ... " << endl;
                    getch();
                }
                else if (memberOption == "8")
                {
                    cout << "Enter your current weight in kg : ";
                    float weight;
                    cin >> weight;
                    cout << "Enter the weight that you want to achieve : ";
                    float desired_weight;
                    cin >> desired_weight;
                    cout << endl;
                    cout << "---------- Diet and Nutritions ---------" << endl;
                    if (weight > desired_weight)
                    {
                        cout << endl;
                        cout << "You need to lose some weight. " << endl;
                        cout << "1. 120g protien daily " << endl;
                        cout << "2. 100g fibre daily " << endl;
                        cout << "3. Minimum Oily foods" << endl;
                        cout << "4. No Fast Food" << endl;
                        cout << "5. Gap of atleast 300 minutes between meals" << endl;
                    }
                    else if (weight < desired_weight)
                    {
                        cout << endl;
                        cout << "You need to gain some weight. " << endl;
                        cout << "Your plan is given below. " << endl
                             << endl;
                        cout << "1. 150g protien daily " << endl;
                        cout << "2. 120g fibre daily " << endl;
                        cout << "3. Maximum chicken, mutton and beaf " << endl;
                        cout << "4. Fast Food only once in a week" << endl;
                        cout << "5. Gap of atleast 200 minutes between meals" << endl;
                    }
                    else if (weight == desired_weight)
                    {
                        cout << endl;
                        cout << "Your weight is good, Keep your previous Diet!!! " << endl;
                    }
                    cout << endl;
                    cout << "Press any key to continue ... " << endl;
                    getch();
                }
                else if (memberOption == "9")
                {
                    cout << "Enter your body type ( Bulk or Lean ) : ";
                    string body_type;
                    cin >> body_type;
                    cout << "Enter your desired body type ( Lean or Bulk ) : ";
                    string desired_body_type;
                    cin >> desired_body_type;
                    cout << endl;
                    cout << "-------- Workout Plan ---------" << endl;
                    cout << endl;
                    if (body_type == "Lean" && desired_body_type == "Bulk")
                    {
                        cout << "Here is your workout plan." << endl;
                        cout << "1. Progressive Overload " << endl;
                        cout << "2. Focus on Compound Movements " << endl;
                        cout << "3. Optimal Rep Range " << endl;
                        cout << "4. Stragetic Cardia " << endl;
                        cout << "5. Caloric Surplus  " << endl;
                        cout << "6. Min 9 hours of rest " << endl;
                    }
                    else if (body_type == "Bulk" && desired_body_type == "Lean")
                    {
                        cout << "Here is your workout plan." << endl;
                        cout << "1. Lift Heavy " << endl;
                        cout << "2. Reduce Volume, Not load " << endl;
                        cout << "3. Stragetic Cardio Integration " << endl;
                        cout << "4. Treadmill Running " << endl;
                        cout << "5. Calorie Defecit " << endl;
                        cout << "6. Min 7 hours of rest " << endl;
                    }
                    else if (body_type == desired_body_type)
                    {
                        cout << "Your already have your desired physique. Stick to your previous plan. " << endl;
                    }
                    else
                    {
                        cout << "Your have entered invalid options. Try again and remember the word is case sensitive. " << endl;
                    }
                    cout << endl;
                    cout << "Press any key to continue ... " << endl;
                    getch();
                }
                else if (memberOption == "10")
                {
                    cout << endl;
                    cout << "--------- Rules to Follow -----------" << endl;
                    cout << endl;
                    cout << "1. Smoking is not allowed." << endl;
                    cout << "2. Put the equipment back from where you get it. " << endl;
                    cout << "3. Don't Litter." << endl;
                    cout << "4. You are not allowed to take any equipment to home. " << endl;
                    cout << "5. Fighting is not allowed." << endl;
                    cout << "6. Take care of your accessories, yourself. " << endl;
                    cout << "7. Shalwar Kameez and Jeans are not allowed. " << endl;
                    cout << "8. In case of any lose by you, you will pay for it. " << endl;
                    cout << "You will be fined if you will not follow above rules and instructions. " << endl;
                    cout << endl
                         << endl;
                    cout << "Press any key to continue ..." << endl;
                    getch();
                }
                else if (memberOption == "11")
                {
                    cout << "Exiting the page. " << endl;
                    cout << "Press any key to continue ..." << endl;
                    getch();
                    break;
                }
                else
                {
                    cout << "User entered invalid option, Try Again. " << endl;
                    cout << "Press any key to continue..." << endl;
                    getch();
                }
            }
        }
        else if (userOption == "3")
        {
            cout << endl;
            cout << "Thanks for using this software !!! " << endl;
            break;
        }
        else
        {
            cout << "User entered wrong option, Try again. " << endl;
            cout << "Options are 1 , 2 and 3. " << endl;
            cout << endl;
            cout << "Press any key to continue " << endl;
            getch();
        }
    }
}