#include "../../std_lib_facilities.h"

int main()
{
    cout << "Enter the name of the person you want to write to(make it up if you don't have any)\n";
    string first_name;
    cin >> first_name;

    cout << "\nDear " << first_name << ",\n\n";
    cout << "\tHow are you? I am fine. I miss you.\n";
    cout << "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.\n";
    cout << "Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.\n";
    cout << "Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.\n";
    cout << "Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.\n\n";

    cout << "Please enter the first name of another friend: \n";
    string friend_name;
    cin >> friend_name;

    cout << "\nHave you seen " << friend_name << " lately?\n\n";

    cout << "Is your friend male or female? (m/f)\n";
    char friend_gender = 0;
    cin >> friend_gender;

    if(friend_gender == 'm') cout << "\nIf you see " << friend_name << ", please ask him to call me.\n";
    else if(friend_gender == 'f') cout << "\nIf you see " << friend_name << ", please ask her to call me.\n";
    else error("Ur stoopid");

    cout << "Please enter the recipients age: \n";
    int age = 0;
    cin >> age;

    if((age<=0) || (age>=110)) error(" you're kidding! ");

    cout << "\nI hear you just had a birthday and you are " << age << " years old.\n";

    if(age<12) cout << "Next year you will be " << age+1 << ".\n";
    if(age==17) cout << "Next year you will be able to vote.\n";
    if(age>70) cout << "I hope you are enjoying retirement\n";

    cout << "\nYours sincerely,\n\n" << first_name;

    return 0;
}
