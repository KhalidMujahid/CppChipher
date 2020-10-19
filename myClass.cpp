/*
* C++ Chipher proagram
* Author: khalid Zikirullah
*/


#include <iostream>
#include <vector>
#include "main.h"

//encryption code defination

void ChipherText::encrypt(std::string message)
{
   count = 0;
   textLength = message.length();
   
   do
   {
       encMessages.push_back(message[count]+3);
       
       
       count++;
   }   
   while(count < textLength);
  
   
   
   for(char i: encMessages)
   {
      encresult+= i;
   }
   
   
   std::cout << encresult << std::endl;
  
    
   
   
}

//decryption code defination

void ChipherText::decrypt(std::string message)
{
   count = 0;
   textLength = message.length();
   
   do
   {
       decMessages.push_back(message[count]-3);
       count++;
   }   
   while(count < textLength);
  
   
   
   for(char i: decMessages)
   {
      decresult+= i;
   }
   
   
   std::cout << decresult << std::endl;
}




