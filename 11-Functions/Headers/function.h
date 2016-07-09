
#ifndef FUNCTION_H
#define FUNCTION_H 

void display();

void dis(int, int); //pass args

int multi(int, int); //pass args and return

//to make a default parameter the function prototype needs 
// > to contain the default value not the function definition 
void default_func(int x, int y, int z = 10);

#endif

