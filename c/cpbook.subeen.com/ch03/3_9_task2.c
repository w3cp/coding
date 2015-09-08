/*
// program : 3.9 task2

// 2015-09-08-  -  

// code cpbook.subeen.com

// MD ANWAR HOSSAIN 
// http://w3cp.blogspot.com

// https://github.com/w3cp/
// https://github.com/w3cp/coding/
*/


 #include <stdio.h>  
  
 int main()   
 {   
     int number, remainder;  
      
     number = 5;        
     remainder = number - ( 2 * ( number / 2 ) );   
     
     if(remainder == 0) {   
         printf("The number is even\n");   
     }   
     else {   
         printf("The number is odd\n");   
     }
        
     return 0;   
 }  
 