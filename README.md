# CppChipher
  A short intro and How to use the program
  
  Program Hint:
   
   This program convert your readable text into a chipher text... 
   
  How does it works:
    
    This program shift all your text to the right by three(3) to form the chipher text.(encryption) while to convert (decrypt) the chipher text back to the readable text, it shift to the left by three(3).
    
    To be able to achived this you will use the
    * encrypt() function for encryption 
     decrypt() function  for  decryption
     
     
   How to use it:
  
  
  *Firstly:
    Create an object of the class named (ChipherText) to be able to use the encrypt() and decrypt() functions/methods
  Code sample:
  
   ChipherText objName;
   
  Secondly:
    
     Use this your object name to access the encrypt and decrypt funtion.
     
     Code sample:
     
       objName.encrypt("hello cryptography") // output khoor#fu|swrjudsk|
       
       Now to decrypt:
       
       objName.decrypt("khoor#fu|swrjudsk|"); //output hello cryptography
       
    
    
    END.
    
