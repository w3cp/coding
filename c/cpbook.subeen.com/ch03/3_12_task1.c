/*
// program : 3.12 task1

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
     char ch;
     
     scanf( "%c" , &ch );
     
     if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {  
         printf("%c is vowel\n", ch);  
     }  
     else {  
         printf("%c is consonant\n", ch);  
     }  
     
     return 0;
 }