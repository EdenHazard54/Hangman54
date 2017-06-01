#include <iostream>
#include <cstdlib> 

using namespace std;

int prompt_menu_item()
{
    system("color E");
	int variant;
    cout << "Main menu\n" << endl;
    cout << "1. Play\n"
         << "2. Exit\n"<<endl;
    cout << ">>> ";
    cin >> variant;
    return variant;
}

int main()
{
    int variant = prompt_menu_item(); 

    switch (variant) {
        case 1:
            cout << "Play" << endl;
            system("start hangman.exe");
            system("cls");
            return main();
            break;
        case 2:
            cout << "Exit" << endl;
            exit(EXIT_SUCCESS);
			break;  
		default:        
			cout<<"Error"<<endl;
			system("cls");
			return main();
		//	exit(EXIT_FAILURE);
    }
    return 0;
}
