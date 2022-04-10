#pragma once
struct elem

{
	char s;
	int value ;
	elem* next = nullptr;

};

void push(elem*& stack, char s, int value);
bool pop(elem*& stack,char& s, int& value);
void showStack(elem*& stack);
bool peek(elem* stack, char& s, int& value);
bool is_bracket(char* str, int i);
bool is_open_bracket(char* str, int i);
char opp_bracket(char* str, int i);
