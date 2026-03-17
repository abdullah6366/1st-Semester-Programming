// University LMS System : 
#include<iostream>
using namespace std;
int main()
{
    string name=""; int age=0; string course = "";
    for (int i =1 ; i<=3; i++){
        string username; int password;
        cout<<"Enter the username : ";
        cin>>username;
        cout<<"Enter the password : ";
        cin>>password;
        if(username=="admin"&& password==1234){
            cout<<"Login Successful "<<endl;
            break;}
        else { cout<<"Wrong login"<<endl;}
        if ( i==3 && !(username== "admin" && password == 1234 )){
            cout<<"Too many attempts. Program end."<<endl; }}
    
    cout<<"\n\n"<<endl;
    for( int i =1; i<=4; i++){
    cout<<"------- University Management System -------"<<endl;
    cout<<"1. Add Student "<<endl;
    cout<<"2. View Student "<<endl;
    cout<<"3. Add course "<<endl;
    cout<<"4. Exit "<<endl;
    int option;
    cout<<"Choose an option ( 1 to 4 ) : ";
    cin >>option;
    if ( option == 1 ){
    
        cout<<"Enter Student name : ";
        cin>>name;
        cout<<"Enter student age : ";
        cin>>age;
        cout<<"Student Added Successfully !!!"<<endl;}
        else if ( option == 2 ){
            if ( name != ""){ cout<<"Student Name : "<< name<<endl;
            cout<<"Student age : "<<age <<endl;}
            else { cout << "No student recoed found"<<endl;}}
          else if ( option == 3){
            cout<<"Enter course name : ";
            cin >> course;
            cout<<"Course Added : "<<course<<endl;}
            else if (option == 4 ){
            cout<<"Program exit "<<endl;
            break; }
            else {
                cout<<"Invalid option "<<endl;  }

          }  
        }
