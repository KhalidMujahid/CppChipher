/*
* C++ Chipher proagram
* Author: khalid Zikirullah
* Header file
 function prototype 
*/

#include <iostream>
#include <string>
#include <vector>

class ChipherText
{
private:
 int textLength;
 int count;
 std::string encresult;
 std::string decresult;
 
 //storage for the user text
 std::vector<char> encMessages;
 std::vector<char> decMessages;
public:
  //encryption function
  void encrypt(std::string message);
  //encryption function
  void decrypt(std::string message);
};







