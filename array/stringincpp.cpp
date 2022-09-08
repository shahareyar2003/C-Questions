#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter string: ";
    cin >> str;
    cout << "Initially string is: " << str << endl;
    str.push_back('s');
    cout << "String after push_back('s') is: " << str << endl;
    str.pop_back();
    cout << "String after pop_back() is: " << str << endl;

    /*
    Capacity Functions:-
        1. capaity():- This function returns the capacity allocated to the string, which can be equal to or more than the size of the string.
        2. resize():- This function changes the size of the string, the size can be increased or decreased.
        3. length():- This function finds the length of the string.
        4. shrink_to_fit():- This function decreases the capacity of the string and makes it equal to the minimum capacity of the string.
    */
    cout << "The capacity of string is : ";
    cout << str.capacity() << endl;

    // str.resize(10);
    // cout << "The string after resize operation is : ";
    // cout << str << endl;

    cout << "The length of the string is :" << str.length() << endl;

    /*
    Iterator functions:-
        1. begin():- This function returns an iterator to the beginning of the string.
        2. end():- This function returns an iterator to the end of the string.
        3. rbegin():- This function returns a reverse iterator pointing at the end of the string.
        4. rend():- This function returns a reverse iterator pointing at beginning of the string.
    */
    string ::iterator it1 = str.begin();
    string ::iterator it2 = str.end();
    for (it1; it1 != it2; it1++)
    {
        cout << *it1 << " ";
    }
    cout << endl;
    string ::reverse_iterator it3 = str.rbegin();
    string ::reverse_iterator it4 = str.rend();
    for (it3; it3 != it4; it3++)
    {
        cout << *it3 << " ";
    }

    /*
    Manipulating Functions:-
        1. copy(“char array”, len, pos):- This function copies the substring in the target character array mentioned in its arguments.
        2. swap():- This function swaps one string with other.
    */
   cout<<endl;
    char c[50];
    str.copy(c,4,0);
    cout << "The new copied character array is : ";
    cout << c << endl;
    return 0;
}