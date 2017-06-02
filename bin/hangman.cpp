#include <iostream>
#include <string>
using namespace std;

int main()
{
  system("cls");
  system("color E");
  int c;
  cout << "Please enter word to guess" << endl;
  string word;
  getline(cin, word);
  string copy = word;
  string Underscore;
  for(int i=0; i!=word.length(); i++)
  {
    if(word.at(i) == ' ')
    {
      Underscore += " ";
    }else{
      Underscore += "_";
    }
  }
  for(int i=0; i!=50; ++i)
  {
    cout << endl;
  }
  string guess;
  int wrong=0;
  while(1){
    if(wrong == 6)
    {
      cout << "You lost, word is " << "word" << endl;
      break;
    }
    system("cls");
    cout << Underscore << endl;
    cout << "There are " << word.length() << " letters" << endl;
    cout << "You have " << 6 - wrong << " more tries left" << endl;
    if(Underscore == word)
    {
      cout << "You win" << endl;
      cout << "You won" << endl;
      cout << "You win" << endl;
      system("PAUSE");
      return main();
      break;
    }
    cout << "Guess a letter " << endl;
    getline(cin, guess);
    if(guess.length() > 1)
    {
      if(guess == word)
      {
        cout << "you win " << endl;
        system("PAUSE");
        cout <<"Play again? Yes-1 No-0" << endl;
        cin >>c;
        if (c==0)
        {
        	break;
		}
		else
		{
				return main();
		}
        break;
      }
      else
      {
        cout << "wrong word " << endl;
        wrong++;
      }
    } else if(copy.find(guess) != -1)
    {
        while(copy.find(guess) != -1)
        {
          Underscore.replace(copy.find(guess), 1, guess);
          copy.replace(copy.find(guess), 1, "_");
        }
    }
    else
    {
      cout << "That's wrong" << endl;
      wrong++;
    }
    cout << endl;
  }
  return 0;
}

