//
// Created by david anthony on 25/03/2025.
//
#include <iostream>
using namespace std;

int main(){
    float nm = 200.0;
    int age = 21;
    cout << "Your current age is and nm is " << nm << " and " << age << " " << endl;
    double new_age = {23.4};
    double old_age = {21.4};
    double current_age = {new_age + old_age};
    int shoe_size;
    double height;
    cout << "Your supper age is " << current_age + old_age - new_age << endl;
    cout <<"Enter your shoe size and height:" << endl;
    cin >> shoe_size >> height;
    cout<< "Your shoe size is " << shoe_size << "\nYour height is " << height << endl;
    return 0;
}