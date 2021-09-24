#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;


int main()
{
    const int MAX = 20; //max characters in string
    char str[MAX]; //string variable str
    // cout << "\nEnter a string: ";
    // cout << "You entered: " << str << endl;

    // printf("Enter text. Press enter on blank line to exit.\n");
    // scanf("%[^$]", str);
    // cout<<str<<endl;
    // return 0;

}



/*
int main(){
    int MAX =10;
    char arr[MAX];
    // only take the first MAX charactes into the input
    cin>>setw(MAX)>>arr;
    cout<<arr<<endl;
    /////////////////////
    // !!! starts reading after the MAX' th character
    char arr1[MAX];
    cin>>arr1;
    cout<<arr1<<endl;
}
*/











/**************************************************/
/*
    DIFFERENT METHODS OF READING STRING

    1.  using setw from <iomanip>
        char arr[arr_length]
        int len = min(<<no_of_char_to_read_from_big_string>>, arr_length)
        cin>>setw(len)>>arr;

    2.  To read with spaces
        char arr[arr_length]
        cin.get(arr, arr_length)

    3.  To real a string with spaces
        string s;
        getline(cin, s);

    4.  To read until a special character
        char arr[arr_length]
        char ch = <<special_character>>
        cin.get(arr, arr_length, ch)

    5.  To real until special character
        printf("Enter text. Press enter on blank line to exit.\n");
        scanf("%[^$]", str);


    

*/