#include <iostream>
using namespace std;

int main(){
	
	cout << "********Personal Information********" << endl;
	
	string lastname;
	string name;
	int age;
	
	
	
	
	cout << "Enter your name: ";
 	getline(cin, name );
 	
 	cout << "Enter your last name: ";
 	getline(cin, lastname);
 	
 	cout << "How old are you?: " ;
 	cin >> age;
 	
 	 
 	
 	 if(age >= 15){
 		cout << "Thank you for your information !";
	 }
 		
 	
 	
	
	
	
	return 0;
}
