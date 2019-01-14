/*
Author: 
*/

#include "Example.h"
 
// Constructor //////////////////////
Example::Example(int givenValue)
{
  // initialize this instance's variables
  someValue = givenValue; 
}


// Public Methods ///////////////////
void Example::doSomething(void)
{
    doSomethingSecret();
}


// Private Methods /////////////// 
void Example::doSomethingSecret(void)
{ 
}