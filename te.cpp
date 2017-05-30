#include <iostream>
#include <cstdlib> 

using namespace std;

int prompt_menu_item()
{
    int variant;
    cout << "Main menu\n" << endl;
    cout << "1. Play\n"
         << "2. Exit\n"<<endl;
    cout << ">>> ";
    cin >> variant;
    return variant;
}

int main(int argc, char* argv[])
{
    int variant = prompt_menu_item(); 

    switch (variant) {
        case 1:
            cout << "Play" << endl;
            system("start hangman.exe");
           // system("cls");
            return 1;
            break;
        case 2:
            cout << "Exit" << endl;
            exit(EXIT_SUCCESS);
			break;  
		default:        
			cerr<<"Error"<<endl;
			system("cls");
			return prompt_menu_item();
		//	exit(EXIT_FAILURE);
    }
    return 0;
}
