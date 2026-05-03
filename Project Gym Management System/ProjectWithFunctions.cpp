#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

// =====================================================
//              CONSTANTS
// =====================================================

const int TOTAL_MEMBERS   = 1000;
const int TOTAL_HISTORY   = 5;
const int TOTAL_SUPPS     = 5;
const int TOTAL_GENDERS   = 2;
const int TOTAL_DAYS      = 7;

// =====================================================
//              FUNCTION PROTOTYPES
// =====================================================

// --- Display Prototypes ---
void gymHeader();
void userMenuDisplay();
void managerMenuDisplay();
void managerLoginHeader();
void memberMenuDisplay();

// --- Utility Prototypes ---
void clearScreen();
void pressAnyKey();

// --- Login Prototypes ---
bool validateManagerCredentials(string username, string password);
bool managerLogin();

// --- Manager Feature Prototypes ---
void showAllMembers     (string namesArr[], int ageArr[], float weightArr[], float heightArr[], string bodyArr[], int index);
void searchMember       (string namesArr[], int ageArr[], float weightArr[], float heightArr[], string bodyArr[], int index);
void addMembership      (string namesArr[], int ageArr[], float weightArr[], float heightArr[], string bodyArr[], int &index, string historyNamesArr[], int historyAgeArr[], float historyWeightArr[], float historyHeightArr[], string historyBodyArr[], int &historyIndex);
void showHistory        (string historyNamesArr[], int historyAgeArr[], float historyWeightArr[], float historyHeightArr[], string historyBodyArr[], int historyIndex);
void deleteMember       (string namesArr[], int ageArr[], float weightArr[], float heightArr[], string bodyArr[], int index);
void sortMembersByAge   (string namesArr[], int ageArr[], float weightArr[], float heightArr[], string bodyArr[], int index);
void showSupplements    (string supplementsArr[], float amount_supplementsArr[]);
void addSupplements     (string supplementsArr[], float amount_supplementsArr[]);
void showTimetable      (string genderArr[], string openingTimeArr[], string closingTimeArr[]);
void showFeeStructure   (string genderArr[], float feeArr[]);
void updateFeeStructure (string genderArr[], float feeArr[]);
void monthlyIncome      (float feeArr[]);
void monthlyProfit      (float feeArr[]);

// --- Manager Session Prototype ---
void handleManagerMenuOption(string option, string namesArr[], int ageArr[], float weightArr[], float heightArr[], string bodyArr[], int &index, string historyNamesArr[], int historyAgeArr[], float historyWeightArr[], float historyHeightArr[], string historyBodyArr[], int &historyIndex, string supplementsArr[], float amount_supplementsArr[], string genderArr[], string openingTimeArr[], string closingTimeArr[], float feeArr[], string daysArr[], string exerciseArr[]);
void runManagerSession      (string namesArr[], int ageArr[], float weightArr[], float heightArr[], string bodyArr[], int &index, string historyNamesArr[], int historyAgeArr[], float historyWeightArr[], float historyHeightArr[], string historyBodyArr[], int &historyIndex, string supplementsArr[], float amount_supplementsArr[], string genderArr[], string openingTimeArr[], string closingTimeArr[], float feeArr[], string daysArr[], string exerciseArr[]);

// --- Member Feature Prototypes ---
void onlineRegistration     (string namesArr[], int ageArr[], float weightArr[], float heightArr[], string bodyArr[], int &index, string historyNamesArr[], int historyAgeArr[], float historyWeightArr[], float historyHeightArr[], string historyBodyArr[], int &historyIndex);
void checkMembershipRecord  (string namesArr[], int ageArr[], float weightArr[], float heightArr[], string bodyArr[], int index);
void viewTimetable          (string genderArr[], string openingTimeArr[], string closingTimeArr[]);
void viewFeeStructure       (string genderArr[], float feeArr[]);
void viewWorkoutSchedule    (string daysArr[], string exerciseArr[]);
void changeWorkoutSchedule  (string daysArr[], string exerciseArr[]);
void bmiCalculator          ();
void dietAndNutritionPlan   ();
void workoutPlansAndTraining();
void gymInstructions        ();

// --- Member Session Prototype ---
void handleMemberMenuOption(string option, string namesArr[], int ageArr[], float weightArr[], float heightArr[], string bodyArr[], int &index, string historyNamesArr[], int historyAgeArr[], float historyWeightArr[], float historyHeightArr[], string historyBodyArr[], int &historyIndex, string genderArr[], string openingTimeArr[], string closingTimeArr[], float feeArr[], string daysArr[], string exerciseArr[]);
void runMemberSession       (string namesArr[], int ageArr[], float weightArr[], float heightArr[], string bodyArr[], int &index, string historyNamesArr[], int historyAgeArr[], float historyWeightArr[], float historyHeightArr[], string historyBodyArr[], int &historyIndex, string genderArr[], string openingTimeArr[], string closingTimeArr[], float feeArr[], string daysArr[], string exerciseArr[]);

// --- Main Menu Prototype ---
void handleUserMenuOption(string option, string namesArr[], int ageArr[], float weightArr[], float heightArr[], string bodyArr[], int &index, string historyNamesArr[], int historyAgeArr[], float historyWeightArr[], float historyHeightArr[], string historyBodyArr[], int &historyIndex, string supplementsArr[], float amount_supplementsArr[], string genderArr[], string openingTimeArr[], string closingTimeArr[], float feeArr[], string daysArr[], string exerciseArr[]);

// =====================================================
//                   MAIN FUNCTION
// =====================================================

int main()
{
    // --- Data ---
    string namesArr[TOTAL_MEMBERS]   = {"Ali", "Asad", "Ahmed", "Sara", "Usman", "Ayesha", "Saad"};
    int    ageArr[TOTAL_MEMBERS]     = {19, 21, 20, 18, 21, 25, 20};
    float  weightArr[TOTAL_MEMBERS]  = {65, 71, 70, 84, 69, 88, 72};
    float  heightArr[TOTAL_MEMBERS]  = {178, 180, 175, 182, 186, 171, 184};
    string bodyArr[TOTAL_MEMBERS]    = {"lean", "bulk", "bulk", "bulk", "lean", "bulk", "lean"};
    int    index = 7;

    string supplementsArr[TOTAL_SUPPS]        = {"Protiens", "Creatine", "Caffinee", "Boosters", "Steroids"};
    float  amount_supplementsArr[TOTAL_SUPPS] = {12, 10, 10, 20, 20};

    string genderArr[TOTAL_GENDERS]      = {"Males", "Females"};
    string openingTimeArr[TOTAL_GENDERS] = {"5:00AM", "1:00PM"};
    string closingTimeArr[TOTAL_GENDERS] = {"12:00PM", "4:00PM"};
    float  feeArr[TOTAL_GENDERS]         = {3000, 2000};

    string daysArr[TOTAL_DAYS]     = {"Monday", "Tuesday", "Wednes", "Thurs", "Friday", "Satur", "Sunday"};
    string exerciseArr[TOTAL_DAYS] = {"Chest", "Shoulder", "Back", "Biceps", "Triceps", "Legs", "Rest"};

    string historyNamesArr[TOTAL_HISTORY]  = {"", "", "", "", ""};
    int    historyAgeArr[TOTAL_HISTORY]    = {0, 0, 0, 0, 0};
    float  historyWeightArr[TOTAL_HISTORY] = {0, 0, 0, 0, 0};
    float  historyHeightArr[TOTAL_HISTORY] = {0, 0, 0, 0, 0};
    string historyBodyArr[TOTAL_HISTORY]   = {"", "", "", "", ""};
    int    historyIndex = 0;

    // --- Main Loop ---
    while (true)
    {
        clearScreen();
        gymHeader();
        userMenuDisplay();

        cout << "Choose Option : ";
        string userOption;
        cin >> userOption;

        handleUserMenuOption(userOption, namesArr, ageArr, weightArr, heightArr, bodyArr, index, historyNamesArr, historyAgeArr, historyWeightArr, historyHeightArr, historyBodyArr, historyIndex, supplementsArr, amount_supplementsArr, genderArr, openingTimeArr, closingTimeArr, feeArr, daysArr, exerciseArr);
    }

    return 0;
}

// =====================================================
//              DISPLAY FUNCTIONS
// =====================================================

void clearScreen()
{
    system("cls");
}

void pressAnyKey()
{
    cout << "Press any key to continue ..." << endl;
    getch();
}

void gymHeader()
{
    cout << "=========================================================" << endl;
    cout << "|                 GYM Management System                 |" << endl;
    cout << "=========================================================" << endl;
    cout << endl;
}

void userMenuDisplay()
{
    cout << "---------------------- User Menu ------------------------" << endl << endl;
    cout << "1. Manager Login " << endl;
    cout << "2. Member Login "  << endl;
    cout << "3. Exit "          << endl << endl;
    cout << "--------------------------------------------------------" << endl;
}

void managerLoginHeader()
{
    cout << "================================================" << endl;
    cout << "               MANAGER LOGIN                    " << endl;
    cout << "================================================" << endl << endl;
}

void managerMenuDisplay()
{
    cout << "================================================" << endl;
    cout << "               MANAGER MENU                     " << endl;
    cout << "================================================" << endl << endl;
    cout << " Options for Manager :"    << endl;
    cout << "1.  Show all Memberships"  << endl;
    cout << "2.  Search Membership"     << endl;
    cout << "3.  Add Membership"        << endl;
    cout << "4.  History"               << endl;
    cout << "5.  Delete Membership"     << endl;
    cout << "6.  Sorting Members"       << endl;
    cout << "7.  Avalible Supplements"  << endl;
    cout << "8.  Add Supplements"       << endl;
    cout << "9.  Time Table"            << endl;
    cout << "10. Fee structure"         << endl;
    cout << "11. Update fee structure"  << endl;
    cout << "12. Monthly Income"        << endl;
    cout << "13. Monthly profit"        << endl;
    cout << "14. Log out"               << endl << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "Choose an option : ";
}

void memberMenuDisplay()
{
    cout << "================================================" << endl;
    cout << "           Welcome to Members Menu              " << endl;
    cout << "================================================" << endl << endl;
    cout << "1.  Online Registration"       << endl;
    cout << "2.  Check Membership record"   << endl;
    cout << "3.  View Time Table"           << endl;
    cout << "4.  View Fee structure"        << endl;
    cout << "5.  View Workout Schedule"     << endl;
    cout << "6.  Change workout schedule"   << endl;
    cout << "7.  BMI Calculation"           << endl;
    cout << "8.  Diet and Nutrition Plan"   << endl;
    cout << "9.  Workout Plans and Training"<< endl;
    cout << "10. GYM instructions"          << endl;
    cout << "11. Back"                      << endl << endl;
    cout << "Choose an option : ";
}

// =====================================================
//              LOGIN FUNCTIONS
// =====================================================

bool validateManagerCredentials(string username, string password)
{
    return (username == "manager" && password == "123");
}

bool managerLogin()
{
    for (int i = 0; i < 3; i++)
    {
        clearScreen();
        managerLoginHeader();
        cout << "Login attempt : " << i + 1 << endl << endl;

        string username, password;
        cout << "--> Enter username : "; cin >> username;
        cout << "--> Enter password : "; cin >> password;

        if (validateManagerCredentials(username, password))
        {
            cout << endl;
            cout << "          --------------------------" << endl;
            cout << "              Login Successful !!! " << endl;
            cout << "          --------------------------" << endl << endl;
            pressAnyKey();
            return true;
        }
        else
        {
            cout << "Your username or password is wrong. Please try again. " << endl;
            cout << "-------------------------------------------------------" << endl;
            pressAnyKey();
        }
    }
    cout << endl << "3 failed attempts. Access denied." << endl;
    pressAnyKey();
    return false;
}

// =====================================================
//         HISTORY HELPER FUNCTION
// =====================================================

void saveToHistory(string name, int age, float weight, float height, string body, string historyNamesArr[], int historyAgeArr[], float historyWeightArr[], float historyHeightArr[], string historyBodyArr[], int &historyIndex)
{
    if (historyIndex < 5)
    {
        historyNamesArr[historyIndex]  = name;
        historyAgeArr[historyIndex]    = age;
        historyWeightArr[historyIndex] = weight;
        historyHeightArr[historyIndex] = height;
        historyBodyArr[historyIndex]   = body;
        historyIndex = historyIndex + 1;
    }
    else
    {
        for (int i = 0; i < 4; i++)
        {
            historyNamesArr[i]  = historyNamesArr[i + 1];
            historyAgeArr[i]    = historyAgeArr[i + 1];
            historyWeightArr[i] = historyWeightArr[i + 1];
            historyHeightArr[i] = historyHeightArr[i + 1];
            historyBodyArr[i]   = historyBodyArr[i + 1];
        }
        historyNamesArr[4]  = name;
        historyAgeArr[4]    = age;
        historyWeightArr[4] = weight;
        historyHeightArr[4] = height;
        historyBodyArr[4]   = body;
    }
}

// =====================================================
//         MANAGER FEATURE FUNCTIONS
// =====================================================

void showAllMembers(string namesArr[], int ageArr[], float weightArr[], float heightArr[], string bodyArr[], int index)
{
    cout << endl;
    cout << "            ==========================================" << endl;
    cout << "                      SHOW ALL MEMBERS               " << endl;
    cout << "            ==========================================" << endl << endl;
    cout << "==============================================================================" << endl;
    cout << "Name\t\tAge\t\tWeight\t\tHeight\t\tBody" << endl;
    cout << "==============================================================================" << endl;
    for (int i = 0; i < index; i++)
    {
        if (namesArr[i] != "")
        {
            cout << namesArr[i] << "\t\t" << ageArr[i] << "\t\t" << weightArr[i] << "\t\t" << heightArr[i] << "\t\t" << bodyArr[i] << endl;
        }
    }
    cout << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    pressAnyKey();
}

void searchMember(string namesArr[], int ageArr[], float weightArr[], float heightArr[], string bodyArr[], int index)
{
    cout << endl;
    cout << "================================================" << endl;
    cout << "              SEARCH MEMBERS                    " << endl;
    cout << "================================================" << endl << endl;
    cout << "Enter a name : ";
    string name;
    cin >> name;
    cout << endl;
    cout << "        ====================" << endl;
    cout << "            RECORD OF " << name << endl;
    cout << "        ====================" << endl << endl;
    bool found = false;
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
    cout << "-------------------------------------------------------" << endl;
    pressAnyKey();
}

void addMembership(string namesArr[], int ageArr[], float weightArr[], float heightArr[], string bodyArr[], int &index, string historyNamesArr[], int historyAgeArr[], float historyWeightArr[], float historyHeightArr[], string historyBodyArr[], int &historyIndex)
{
    clearScreen();
    cout << "================================================" << endl;
    cout << "              ADD MEMBERSHIP                    " << endl;
    cout << "================================================" << endl << endl;
    cout << "Please choose an option for Fee Payment " << endl;
    cout << " 1. Paid "     << endl;
    cout << " 2. Not paid " << endl << endl;
    cout << "Payment option : ";
    int paymentOption;
    cin >> paymentOption;

    if (paymentOption == 1)
    {
        cout << endl;
        cout << "The person has paid the fee." << endl << endl;
        cout << "      ====================================" << endl;
        cout << "                Adding Membership         " << endl;
        cout << "      ====================================" << endl << endl;

        string name, body;
        int age;
        float weight, height;

        cout << "Enter person's name : ";                    cin >> name;
        cout << "Enter person's age : ";                     cin >> age;
        cout << "Enter person's body weight in kg : ";       cin >> weight;
        cout << "Enter person's height in centimeters : ";   cin >> height;
        cout << "Enter person's body type ( lean or bulk ) : "; cin >> body;

        namesArr[index]  = name;
        ageArr[index]    = age;
        weightArr[index] = weight;
        heightArr[index] = height;
        bodyArr[index]   = body;
        index = index + 1;

        saveToHistory(name, age, weight, height, body, historyNamesArr, historyAgeArr, historyWeightArr, historyHeightArr, historyBodyArr, historyIndex);

        cout << endl << "Person's data has been saved. " << endl;
    }
    else if (paymentOption == 2)
    {
        cout << "Person has not submitted the fee yet. Can't add membership record." << endl;
    }
    else
    {
        cout << "Invalid payment option..." << endl;
    }
    cout << endl;
    cout << "-------------------------------------------------------" << endl;
    pressAnyKey();
}

void showHistory(string historyNamesArr[], int historyAgeArr[], float historyWeightArr[], float historyHeightArr[], string historyBodyArr[], int historyIndex)
{
    cout << endl;
    cout << "      ==============================================" << endl;
    cout << "              History of last 5 Memberships         " << endl;
    cout << "      ==============================================" << endl << endl;
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
    cout << "------------------------------------------------------------------" << endl;
    pressAnyKey();
}

void deleteMember(string namesArr[], int ageArr[], float weightArr[], float heightArr[], string bodyArr[], int index)
{
    cout << "      ==============================================" << endl;
    cout << "                   DELETE MEMBERSHIP                " << endl;
    cout << "      ==============================================" << endl << endl;
    cout << "Enter the member's name that you want to delete : ";
    string memberName;
    cin >> memberName;
    bool found = false;
    for (int i = 0; i < index; i++)
    {
        if (namesArr[i] == memberName)
        {
            cout << endl;
            cout << " -------------------Member's previous record------------------- " << endl << endl;
            cout << "Name\t\tAge\t\tWeight\t\tHeight\t\tBody" << endl;
            cout << namesArr[i] << "\t\t" << ageArr[i] << "\t\t" << weightArr[i] << "\t\t" << heightArr[i] << "\t\t" << bodyArr[i] << endl;
            cout << endl;
            cout << "Deleting member's record ...." << endl;
            namesArr[i]  = "";
            ageArr[i]    = 0;
            weightArr[i] = 0;
            heightArr[i] = 0;
            bodyArr[i]   = "";
            found = true;
            cout << "Record deleted against the name " << memberName << "." << endl;
        }
    }
    if (found == false)
    {
        cout << "Record not found against the name " << memberName << endl;
    }
    cout << endl;
    cout << "-------------------------------------------------------" << endl;
    pressAnyKey();
}

void sortMembersByAge(string namesArr[], int ageArr[], float weightArr[], float heightArr[], string bodyArr[], int index)
{
    cout << endl;
    cout << "      ==============================================" << endl;
    cout << "               SORTING ON THE BASIS OF AGE          " << endl;
    cout << "      ==============================================" << endl << endl;

    for (int i = 0; i < index; i++)
    {
        for (int j = i + 1; j < index; j++)
        {
            if (ageArr[i] < ageArr[j])
            {
                string tempName  = namesArr[i];  namesArr[i]  = namesArr[j];  namesArr[j]  = tempName;
                int    tempAge   = ageArr[i];    ageArr[i]    = ageArr[j];    ageArr[j]    = tempAge;
                float  tempW     = weightArr[i]; weightArr[i] = weightArr[j]; weightArr[j] = tempW;
                float  tempH     = heightArr[i]; heightArr[i] = heightArr[j]; heightArr[j] = tempH;
                string tempBody  = bodyArr[i];   bodyArr[i]   = bodyArr[j];   bodyArr[j]   = tempBody;
            }
        }
    }

    cout << "===================================================================" << endl;
    cout << "Name\t\tAge\t\tWeight\t\tHeight\t\tBody" << endl;
    cout << "===================================================================" << endl;
    for (int i = 0; i < index; i++)
    {
        if (namesArr[i] != "")
        {
            cout << namesArr[i] << "\t\t" << ageArr[i] << "\t\t" << weightArr[i] << "\t\t" << heightArr[i] << "\t\t" << bodyArr[i] << endl;
        }
    }
    cout << endl;
    cout << "-------------------------------------------------------" << endl;
    pressAnyKey();
}

void showSupplements(string supplementsArr[], float amount_supplementsArr[])
{
    cout << endl;
    cout << "================================================" << endl;
    cout << "           AVAILABLE SUPPLEMENTS                " << endl;
    cout << "================================================" << endl << endl;
    cout << "Showing you avalible stock of supplements in kilograms." << endl << endl;
    for (int i = 0; i < TOTAL_SUPPS; i++)
    {
        cout << supplementsArr[i] << "\t\t" << amount_supplementsArr[i] << endl;
    }
    cout << "-------------------------------------------------------" << endl;
    pressAnyKey();
}

void addSupplements(string supplementsArr[], float amount_supplementsArr[])
{
    cout << "================================================" << endl;
    cout << "              ADD SUPPLEMENTS                   " << endl;
    cout << "================================================" << endl << endl;
    cout << "Enter the name of the supplement : ";
    string supplement_name;
    cin >> supplement_name;
    bool found = false;
    for (int i = 0; i < TOTAL_SUPPS; i++)
    {
        if (supplementsArr[i] == supplement_name)
        {
            found = true;
            cout << endl << "--------Previous Amount in kg--------" << endl;
            cout << supplementsArr[i] << "\t\t\t" << amount_supplementsArr[i] << endl << endl;
            cout << "Enter the amount added in kg : ";
            float amount_supplement_added;
            cin >> amount_supplement_added;
            amount_supplementsArr[i] = amount_supplementsArr[i] + amount_supplement_added;
            cout << "New amount available in kg : " << amount_supplementsArr[i] << endl;
        }
    }
    if (found == false)
    {
        cout << "No supplement available for such name." << endl;
    }
    cout << endl;
    cout << "-------------------------------------------------------" << endl;
    pressAnyKey();
}

void showTimetable(string genderArr[], string openingTimeArr[], string closingTimeArr[])
{
    cout << "================================================" << endl;
    cout << "                  TIME TABLE                    " << endl;
    cout << "================================================" << endl << endl;
    cout << "Are you male or a female? " << endl << endl;
    cout << "1. Male "   << endl;
    cout << "2. Female " << endl << endl;
    cout << "I choose option : ";
    int genderOption;
    cin >> genderOption;
    cout << endl;
    cout << "-------- Time Table --------" << endl << endl;
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
        cout << "Invalid option entered." << endl;
    }
    cout << endl;
    cout << "-------------------------------------------------------" << endl;
    pressAnyKey();
}

void showFeeStructure(string genderArr[], float feeArr[])
{
    cout << "================================================" << endl;
    cout << "               FEE STRUCTURE                    " << endl;
    cout << "================================================" << endl << endl;
    cout << "Fee structure of GYM is given below." << endl << endl;
    cout << "-----------Fee Structure----------" << endl << endl;
    for (int i = 0; i < TOTAL_GENDERS; i++)
    {
        cout << "Monthly fee for " << genderArr[i] << " is " << feeArr[i] << " Rupees." << endl;
    }
    cout << endl;
    cout << "-------------------------------------------------------" << endl;
    pressAnyKey();
}

void updateFeeStructure(string genderArr[], float feeArr[])
{
    cout << "================================================" << endl;
    cout << "            UPDATE FEE STRUCTURE                " << endl;
    cout << "================================================" << endl << endl;
    cout << "Enter the gender ( Males or Females ) : ";
    string gender_change_fee;
    cin >> gender_change_fee;
    bool found = false;
    for (int i = 0; i < TOTAL_GENDERS; i++)
    {
        if (genderArr[i] == gender_change_fee)
        {
            found = true;
            cout << endl << "-------- Old Fee Structure --------" << endl << endl;
            cout << "Monthly fee for " << genderArr[i] << " is " << feeArr[i] << " Rupees." << endl << endl;
            cout << "Enter new fee for " << genderArr[i] << " : ";
            float new_fee;
            cin >> new_fee;
            feeArr[i] = new_fee;
            cout << endl << "Fee Updated Successfully..." << endl << endl;
            cout << "---------- New Fee Structure ----------" << endl << endl;
            cout << "Monthly fee for " << genderArr[i] << " is " << feeArr[i] << " Rupees." << endl;
        }
    }
    if (found == false)
    {
        cout << "Invalid Input. Word is case sensitive." << endl;
    }
    cout << endl;
    cout << "-------------------------------------------------------" << endl;
    pressAnyKey();
}

void monthlyIncome(float feeArr[])
{
    cout << "================================================" << endl;
    cout << "              MONTHLY INCOME                    " << endl;
    cout << "================================================" << endl << endl;
    float number_of_males, number_of_females;
    cout << "Enter the number of Males in the gym : ";   cin >> number_of_males;
    cout << "Enter the number of Females in the gym : "; cin >> number_of_females;
    float monthly_income = (number_of_males * feeArr[0]) + (number_of_females * feeArr[1]);
    cout << endl;
    cout << "================================================" << endl;
    cout << "           TOTAL MONTHLY EARNING                " << endl;
    cout << "================================================" << endl << endl;
    cout << "The total monthly income is " << monthly_income << " Rupees." << endl;
    cout << endl;
    cout << "-------------------------------------------------------" << endl;
    pressAnyKey();
}

void monthlyProfit(float feeArr[])
{
    cout << "================================================" << endl;
    cout << "              MONTHLY PROFIT                    " << endl;
    cout << "================================================" << endl << endl;
    float number_of_males, number_of_females;
    cout << "Enter the number of Males in the gym : ";   cin >> number_of_males;
    cout << "Enter the number of Females in the gym : "; cin >> number_of_females;
    float monthly_income = (number_of_males * feeArr[0]) + (number_of_females * feeArr[1]);
    cout << endl << "Total monthly income is " << monthly_income << " Rupees." << endl << endl;

    float electricity_bill, gym_rent, other_expenditures;
    cout << "Enter the monthly electricity bill in rupees : "; cin >> electricity_bill;
    cout << "Enter the rent of the gym in rupees : ";          cin >> gym_rent;
    cout << "Enter other expenditures in rupees : ";           cin >> other_expenditures;

    float calculation = monthly_income - (electricity_bill + gym_rent + other_expenditures);
    cout << endl;
    if (calculation == 0)
    {
        cout << "================================================" << endl;
        cout << "                   PROFIT                       " << endl;
        cout << "================================================" << endl << endl;
        cout << "Profit of this month is 0 Rupees." << endl;
    }
    else if (calculation > 0)
    {
        cout << "================================================" << endl;
        cout << "                   PROFIT                       " << endl;
        cout << "================================================" << endl << endl;
        cout << "The profit of this month is " << calculation << " Rupees." << endl;
    }
    else
    {
        cout << "================================================" << endl;
        cout << "                    LOSS                        " << endl;
        cout << "================================================" << endl << endl;
        cout << "You have a loss this month. " << calculation << " Rupees from your pocket." << endl;
    }
    cout << endl;
    cout << "-------------------------------------------------------" << endl;
    pressAnyKey();
}

// =====================================================
//         MANAGER SESSION FUNCTIONS
// =====================================================

void handleManagerMenuOption(string option, string namesArr[], int ageArr[], float weightArr[], float heightArr[], string bodyArr[], int &index, string historyNamesArr[], int historyAgeArr[], float historyWeightArr[], float historyHeightArr[], string historyBodyArr[], int &historyIndex, string supplementsArr[], float amount_supplementsArr[], string genderArr[], string openingTimeArr[], string closingTimeArr[], float feeArr[], string daysArr[], string exerciseArr[])
{
    if      (option == "1")  { showAllMembers   (namesArr, ageArr, weightArr, heightArr, bodyArr, index); }
    else if (option == "2")  { searchMember     (namesArr, ageArr, weightArr, heightArr, bodyArr, index); }
    else if (option == "3")  { addMembership    (namesArr, ageArr, weightArr, heightArr, bodyArr, index, historyNamesArr, historyAgeArr, historyWeightArr, historyHeightArr, historyBodyArr, historyIndex); }
    else if (option == "4")  { showHistory      (historyNamesArr, historyAgeArr, historyWeightArr, historyHeightArr, historyBodyArr, historyIndex); }
    else if (option == "5")  { deleteMember     (namesArr, ageArr, weightArr, heightArr, bodyArr, index); }
    else if (option == "6")  { sortMembersByAge (namesArr, ageArr, weightArr, heightArr, bodyArr, index); }
    else if (option == "7")  { showSupplements  (supplementsArr, amount_supplementsArr); }
    else if (option == "8")  { addSupplements   (supplementsArr, amount_supplementsArr); }
    else if (option == "9")  { showTimetable    (genderArr, openingTimeArr, closingTimeArr); }
    else if (option == "10") { showFeeStructure (genderArr, feeArr); }
    else if (option == "11") { updateFeeStructure(genderArr, feeArr); }
    else if (option == "12") { monthlyIncome    (feeArr); }
    else if (option == "13") { monthlyProfit    (feeArr); }
    else                     { cout << "User entered invalid option." << endl; }
}

void runManagerSession(string namesArr[], int ageArr[], float weightArr[], float heightArr[], string bodyArr[], int &index, string historyNamesArr[], int historyAgeArr[], float historyWeightArr[], float historyHeightArr[], string historyBodyArr[], int &historyIndex, string supplementsArr[], float amount_supplementsArr[], string genderArr[], string openingTimeArr[], string closingTimeArr[], float feeArr[], string daysArr[], string exerciseArr[])
{
    while (true)
    {
        clearScreen();
        managerMenuDisplay();
        string managerOption;
        cin >> managerOption;

        if (managerOption == "14")
        {
            cout << endl << "Logging you out." << endl;
            cout << "-------------------------------------------------------" << endl;
            pressAnyKey();
            break;
        }

        handleManagerMenuOption(managerOption, namesArr, ageArr, weightArr, heightArr, bodyArr, index, historyNamesArr, historyAgeArr, historyWeightArr, historyHeightArr, historyBodyArr, historyIndex, supplementsArr, amount_supplementsArr, genderArr, openingTimeArr, closingTimeArr, feeArr, daysArr, exerciseArr);
    }
}

// =====================================================
//         MEMBER FEATURE FUNCTIONS
// =====================================================

void onlineRegistration(string namesArr[], int ageArr[], float weightArr[], float heightArr[], string bodyArr[], int &index, string historyNamesArr[], int historyAgeArr[], float historyWeightArr[], float historyHeightArr[], string historyBodyArr[], int &historyIndex)
{
    cout << "================================================" << endl;
    cout << "        ONLINE MEMBERSHIP PURCHASE              " << endl;
    cout << "================================================" << endl << endl;
    cout << "For online fee payment : Account number XYZ" << endl << endl;
    cout << "Please choose an option for Fee Payment" << endl;
    cout << " 1. Paid "     << endl;
    cout << " 2. Not paid " << endl;
    cout << "Payment option : ";
    int paymentOption;
    cin >> paymentOption;

    if (paymentOption == 1)
    {
        cout << endl;
        cout << "================================================" << endl;
        cout << "              ADDING MEMBERSHIP                 " << endl;
        cout << "================================================" << endl << endl;

        string name, body;
        int age;
        float weight, height;

        cout << "Enter your name : ";                    cin >> name;
        cout << "Enter your age : ";                     cin >> age;
        cout << "Enter your body weight in kg : ";       cin >> weight;
        cout << "Enter your height in centimeters : ";   cin >> height;
        cout << "Enter your body type ( lean or bulk ) : "; cin >> body;

        namesArr[index]  = name;
        ageArr[index]    = age;
        weightArr[index] = weight;
        heightArr[index] = height;
        bodyArr[index]   = body;
        index = index + 1;

        saveToHistory(name, age, weight, height, body, historyNamesArr, historyAgeArr, historyWeightArr, historyHeightArr, historyBodyArr, historyIndex);

        cout << endl << "Your membership record has been saved." << endl;
    }
    else if (paymentOption == 2)
    {
        cout << endl << "You have not submitted the fee yet. Can't add membership record." << endl;
    }
    else
    {
        cout << endl << "Invalid payment option..." << endl;
    }
    cout << endl;
    cout << "-------------------------------------------------------" << endl;
    pressAnyKey();
}

void checkMembershipRecord(string namesArr[], int ageArr[], float weightArr[], float heightArr[], string bodyArr[], int index)
{
    cout << "================================================" << endl;
    cout << "              MEMBERSHIP RECORD                 " << endl;
    cout << "================================================" << endl << endl;
    cout << "Enter your name : ";
    string name;
    cin >> name;
    cout << endl;
    bool found = false;
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
    cout << "-------------------------------------------------------" << endl;
    pressAnyKey();
}

void viewTimetable(string genderArr[], string openingTimeArr[], string closingTimeArr[])
{
    showTimetable(genderArr, openingTimeArr, closingTimeArr);
}

void viewFeeStructure(string genderArr[], float feeArr[])
{
    showFeeStructure(genderArr, feeArr);
}

void viewWorkoutSchedule(string daysArr[], string exerciseArr[])
{
    cout << "================================================" << endl;
    cout << "         CURRENT WEEKLY EXERCISE PLAN           " << endl;
    cout << "================================================" << endl << endl;
    for (int i = 0; i < TOTAL_DAYS; i++)
    {
        cout << "Day \t\t" << daysArr[i] << "\t\t\t" << exerciseArr[i] << endl;
    }
    cout << endl;
    cout << "-------------------------------------------------------" << endl;
    pressAnyKey();
}

void changeWorkoutSchedule(string daysArr[], string exerciseArr[])
{
    cout << "================================================" << endl;
    cout << "         CURRENT WEEKLY EXERCISE PLAN           " << endl;
    cout << "================================================" << endl << endl;
    for (int i = 0; i < TOTAL_DAYS; i++)
    {
        cout << "Day \t\t" << daysArr[i] << "\t\t\t" << exerciseArr[i] << endl;
    }
    for (int i = 0; i < TOTAL_DAYS; i++)
    {
        cout << endl << "New exercise for " << daysArr[i] << " is : ";
        string new_exercise;
        cin >> new_exercise;
        exerciseArr[i] = new_exercise;
    }
    cout << endl;
    cout << "================================================" << endl;
    cout << "           NEW WEEKLY EXERCISE PLAN             " << endl;
    cout << "================================================" << endl << endl;
    for (int i = 0; i < TOTAL_DAYS; i++)
    {
        cout << "Day \t\t" << daysArr[i] << "\t\t\t" << exerciseArr[i] << endl;
    }
    cout << endl;
    cout << "-------------------------------------------------------" << endl;
    pressAnyKey();
}

void bmiCalculator()
{
    cout << "================================================" << endl;
    cout << "               BMI CALCULATOR                   " << endl;
    cout << "================================================" << endl << endl;
    float weight, height, BMI;
    cout << "Enter your weight in kgs : ";          cin >> weight;
    cout << "Enter your height in centimeters : ";  cin >> height;
    BMI = ((weight * 10000) / (height * height));
    cout << endl;
    cout << "================================================" << endl;
    cout << "                    BMI                         " << endl;
    cout << "================================================" << endl << endl;
    cout << "Your Body Mass Index is : " << BMI << "." << endl;
    if (BMI < 18)
    {
        cout << "You are Underweight. Need to gain some weight." << endl;
    }
    else if (BMI >= 18 && BMI <= 24)
    {
        cout << "Your weight is perfect. Keep up the Good work!!!" << endl;
    }
    else
    {
        cout << "You are overweight. Need to lose some weight." << endl;
    }
    cout << endl;
    cout << "-------------------------------------------------------" << endl;
    pressAnyKey();
}

void dietAndNutritionPlan()
{
    cout << "================================================" << endl;
    cout << "           DIET AND NUTRITION PLAN              " << endl;
    cout << "================================================" << endl << endl;
    float weight, desired_weight;
    cout << "Enter your current weight in kg : ";       cin >> weight;
    cout << "Enter the weight you want to achieve : "; cin >> desired_weight;
    cout << endl;
    if (weight > desired_weight)
    {
        cout << "You need to lose some weight." << endl;
        cout << "1. 120g protein daily"                          << endl;
        cout << "2. 100g fibre daily"                            << endl;
        cout << "3. Minimum Oily foods"                          << endl;
        cout << "4. No Fast Food"                                 << endl;
        cout << "5. Gap of atleast 300 minutes between meals"    << endl;
    }
    else if (weight < desired_weight)
    {
        cout << "You need to gain some weight." << endl << endl;
        cout << "1. 150g protein daily"                          << endl;
        cout << "2. 120g fibre daily"                            << endl;
        cout << "3. Maximum chicken, mutton and beef"            << endl;
        cout << "4. Fast Food only once in a week"               << endl;
        cout << "5. Gap of atleast 200 minutes between meals"    << endl;
    }
    else
    {
        cout << "Your weight is good, Keep your previous Diet!!!" << endl;
    }
    cout << endl;
    cout << "-------------------------------------------------------" << endl;
    pressAnyKey();
}

void workoutPlansAndTraining()
{
    cout << "================================================" << endl;
    cout << "         WORKOUT PLANS AND TRAINING             " << endl;
    cout << "================================================" << endl << endl;
    string body_type, desired_body_type;
    cout << "Enter your body type ( Bulk or Lean ) : ";         cin >> body_type;
    cout << "Enter your desired body type ( Lean or Bulk ) : "; cin >> desired_body_type;
    cout << endl;
    cout << "================================================" << endl;
    cout << "                 WORKOUT PLAN                   " << endl;
    cout << "================================================" << endl << endl;
    if (body_type == "Lean" && desired_body_type == "Bulk")
    {
        cout << "Here is your workout plan." << endl;
        cout << "1. Progressive Overload"         << endl;
        cout << "2. Focus on Compound Movements"  << endl;
        cout << "3. Optimal Rep Range"             << endl;
        cout << "4. Strategic Cardio"              << endl;
        cout << "5. Caloric Surplus"               << endl;
        cout << "6. Min 9 hours of rest"           << endl;
    }
    else if (body_type == "Bulk" && desired_body_type == "Lean")
    {
        cout << "Here is your workout plan." << endl;
        cout << "1. Lift Heavy"                      << endl;
        cout << "2. Reduce Volume, Not load"          << endl;
        cout << "3. Strategic Cardio Integration"     << endl;
        cout << "4. Treadmill Running"                << endl;
        cout << "5. Calorie Deficit"                  << endl;
        cout << "6. Min 7 hours of rest"              << endl;
    }
    else if (body_type == desired_body_type)
    {
        cout << "You already have your desired physique. Stick to your previous plan." << endl;
    }
    else
    {
        cout << "Invalid options. Remember the word is case sensitive." << endl;
    }
    cout << endl;
    cout << "-------------------------------------------------------" << endl;
    pressAnyKey();
}

void gymInstructions()
{
    cout << endl;
    cout << "================================================" << endl;
    cout << "              RULES TO FOLLOW                   " << endl;
    cout << "================================================" << endl << endl;
    cout << "1. Smoking is not allowed."                                     << endl;
    cout << "2. Put the equipment back from where you get it."               << endl;
    cout << "3. Don't Litter."                                               << endl;
    cout << "4. You are not allowed to take any equipment to home."          << endl;
    cout << "5. Fighting is not allowed."                                    << endl;
    cout << "6. Take care of your accessories, yourself."                    << endl;
    cout << "7. Shalwar Kameez and Jeans are not allowed."                   << endl;
    cout << "8. In case of any loss by you, you will pay for it."            << endl;
    cout << "You will be fined if you do not follow the above rules."        << endl;
    cout << endl;
    pressAnyKey();
}

// =====================================================
//         MEMBER SESSION FUNCTIONS
// =====================================================

void handleMemberMenuOption(string option, string namesArr[], int ageArr[], float weightArr[], float heightArr[], string bodyArr[], int &index, string historyNamesArr[], int historyAgeArr[], float historyWeightArr[], float historyHeightArr[], string historyBodyArr[], int &historyIndex, string genderArr[], string openingTimeArr[], string closingTimeArr[], float feeArr[], string daysArr[], string exerciseArr[])
{
    if      (option == "1")  { onlineRegistration    (namesArr, ageArr, weightArr, heightArr, bodyArr, index, historyNamesArr, historyAgeArr, historyWeightArr, historyHeightArr, historyBodyArr, historyIndex); }
    else if (option == "2")  { checkMembershipRecord (namesArr, ageArr, weightArr, heightArr, bodyArr, index); }
    else if (option == "3")  { viewTimetable         (genderArr, openingTimeArr, closingTimeArr); }
    else if (option == "4")  { viewFeeStructure      (genderArr, feeArr); }
    else if (option == "5")  { viewWorkoutSchedule   (daysArr, exerciseArr); }
    else if (option == "6")  { changeWorkoutSchedule (daysArr, exerciseArr); }
    else if (option == "7")  { bmiCalculator         (); }
    else if (option == "8")  { dietAndNutritionPlan  (); }
    else if (option == "9")  { workoutPlansAndTraining(); }
    else if (option == "10") { gymInstructions       (); }
    else                     { cout << "User entered invalid option, Try Again." << endl; pressAnyKey(); }
}

void runMemberSession(string namesArr[], int ageArr[], float weightArr[], float heightArr[], string bodyArr[], int &index, string historyNamesArr[], int historyAgeArr[], float historyWeightArr[], float historyHeightArr[], string historyBodyArr[], int &historyIndex, string genderArr[], string openingTimeArr[], string closingTimeArr[], float feeArr[], string daysArr[], string exerciseArr[])
{
    while (true)
    {
        clearScreen();
        memberMenuDisplay();
        string memberOption;
        cin >> memberOption;
        cout << endl;

        if (memberOption == "11")
        {
            cout << "Exiting the page." << endl;
            cout << "-------------------------------------------------------" << endl;
            pressAnyKey();
            break;
        }

        handleMemberMenuOption(memberOption, namesArr, ageArr, weightArr, heightArr, bodyArr, index, historyNamesArr, historyAgeArr, historyWeightArr, historyHeightArr, historyBodyArr, historyIndex, genderArr, openingTimeArr, closingTimeArr, feeArr, daysArr, exerciseArr);
    }
}

// =====================================================
//         MAIN MENU HANDLER
// =====================================================

void handleUserMenuOption(string option, string namesArr[], int ageArr[], float weightArr[], float heightArr[], string bodyArr[], int &index, string historyNamesArr[], int historyAgeArr[], float historyWeightArr[], float historyHeightArr[], string historyBodyArr[], int &historyIndex, string supplementsArr[], float amount_supplementsArr[], string genderArr[], string openingTimeArr[], string closingTimeArr[], float feeArr[], string daysArr[], string exerciseArr[])
{
    if (option == "1")
    {
        if (managerLogin())
        {
            runManagerSession(namesArr, ageArr, weightArr, heightArr, bodyArr, index, historyNamesArr, historyAgeArr, historyWeightArr, historyHeightArr, historyBodyArr, historyIndex, supplementsArr, amount_supplementsArr, genderArr, openingTimeArr, closingTimeArr, feeArr, daysArr, exerciseArr);
        }
    }
    else if (option == "2")
    {
        runMemberSession(namesArr, ageArr, weightArr, heightArr, bodyArr, index, historyNamesArr, historyAgeArr, historyWeightArr, historyHeightArr, historyBodyArr, historyIndex, genderArr, openingTimeArr, closingTimeArr, feeArr, daysArr, exerciseArr);
    }
    else if (option == "3")
    {
        cout << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "       Thanks for using this software !!!               " << endl;
        cout << "-------------------------------------------------------" << endl;
        exit(0);
    }
    else
    {
        cout << "User entered wrong option, Try again." << endl;
        cout << "Options are 1 , 2 and 3." << endl;
        cout << endl;
        cout << "-------------------------------------------------------" << endl;
        pressAnyKey();
    }
}