#include<iostream>
using namespace std;
int main() {
	string movie_name;
	float adult_ticket, child_ticket, no_of_adult, no_of_child, charity, total, total_charity, rem;
	cout << " Enter the movie name : ";
	cin >> movie_name;
	cout << "Enter the adult ticket price : ";
	cin >> adult_ticket;
	cout << "Enter the child ticket price : ";
	cin >> child_ticket;
	cout << "Enter the number of adult tickets sold : ";
	cin >> no_of_adult;
	cout << "Enter the number of child tickets sold : ";
	cin >> no_of_child;
	cout << "Enter the percentage amount to be donated to charity : ";
	cin >> charity;
	total = (adult_ticket * no_of_adult) + (child_ticket * no_of_child);
	total_charity = ((adult_ticket * no_of_adult) + (child_ticket * no_of_child)) * (charity / 100);
	rem = total - total_charity;
	cout << "\n \n";
	cout << " Movie : " << movie_name << endl;
	cout << " Total amount generated from the tickets : " << total << endl;
	cout << " Donation to charity : " << total_charity << endl;
	cout << " Total Remaining amount : " << rem << endl;


}