#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char user_input[100]{};
  char user_output[100]{};
  int n{};
  
  cout << "Enter a word: ";
  const int N = 100;
	int varAfterArray;

	char x = cin.get();				
	int i = 0;						
	while (x != '\n' && i < N-1){	
		user_input[i] = x;			
		i++;						
		x = cin.get();				
	}
	user_input[i] = 0;	

	varAfterArray = 1;

  for (int i = 0; i < strlen(user_input); i++){
    if ((user_input[i]>='A') and (user_input[i]<='Z'))
    {
      n = user_input[i] - 65;
      user_output[i] = 90 - n;
    }

    else if ((user_input[i]>='a') and (user_input[i]<='z'))
    {
      n = user_input[i] - 97;
      user_output[i] = 122 - n;
    }

    else if ((user_input[i]>='0') and (user_input[i]<='9'))
    {
      user_output[i] = user_input[i] + 140;
    }
    
    else
    {
      user_output[i] = user_input[i];
    }
    
  }
  
  cout << user_output;

  return 0;
  
}