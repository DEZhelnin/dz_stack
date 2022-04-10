#include <iostream>
#include <string>
#include "stack.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	elem* stack = nullptr;
	char* str = new char[50];
	cin >> str;
	for (int i = 0; i <= strlen(str); i++)
	{
		if (is_bracket(str, i))
		{
			if (is_open_bracket(str, i))
			{
				char ch = opp_bracket(str, i);
				push(stack, ch, i);
			}
			else
			{
					if (stack != 0 && str[i] != 0) {
						char b;
						int n;
						if (pop(stack, b, n)) {
							if (b == str[i]) {
								continue;
							}
							else
							{
								cout << "ошибка"<<endl;
								cout << i;
								break;
							}
						}
						
					}
					else if (stack == 0 && str[i] != 0)
					{
						cout << "ошибка"<<endl;
						cout << i;
						break;
					}
			} 
		}if (str[i] == 0 && stack != 0) 
		{
			cout << "ошибка"<<endl;
			cout << i;
			break;
		}
		if (stack == 0 && str[i] =='\0') {
			cout << "все ок";
		}
	}
}
