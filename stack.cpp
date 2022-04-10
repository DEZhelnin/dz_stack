#include <iostream>
#include "stack.h"
using namespace std;

void push(elem*& stack, char s, int value) {
	elem* newel = new elem;
	newel->value = value;
	newel->s = s;
	if (!stack) {
		stack = newel;
		return;
	}
	newel->next = stack;
	stack = newel;
}

bool pop(elem*& stack,  char& s, int& value) {
	if (!stack) {
		cout << "empty";
		return false;
	}
	elem* cur = stack;
	value = cur->value;
	s = cur->s;
	stack = cur->next;
	delete cur;
	return true;
}

void showStack(elem*& stack) {

	while (stack) {
		int value;
		char s;
		if (pop(stack, s, value)) {
			cout << value << " ";
			cout << s;
		}
	}
}

bool peek(elem* stack, char& s, int& value)
{
	if(!stack)
	{
		return false;
	}
	else
	{
		s = stack->s;
		value = stack->value;
		return true;
	}
}
bool is_bracket(char* str, int i)
{
	if (str[i] == '[' || str[i] == ']' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}' || str[i] == '<' || str[i] == '>') {
		return true;
	}
	else return false;
 }
bool is_open_bracket(char* str, int i)
{
	if (str[i] == '[' ||   str[i] == '(' ||  str[i] == '{' ||  str[i] == '<' ) {
		return true;
	}
	else return false;
}

char opp_bracket(char* str, int i)
{

	if (str[i] == '[' ) {
		return ']';
	}
	if (  str[i] == '(' ) {
		return ')';
	}
	if ( str[i] == '{' ) {
		return '}';
	}
	if ( str[i] == '<') {
		return '>';
	}
}

