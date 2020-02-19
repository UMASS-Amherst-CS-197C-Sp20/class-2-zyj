//INSTRUCTIONS
//Your parser will read from input.txt
//input.txt consists of a series inputs that you need to read.
//each input is proceeded by a flag.
//Each flag will be either I, C, or F.
//I means int, C means char, F means float.

//So for example

//I 7963467 
//means int 7963467

//C H
//means char H

//F 0.7896
//means float 0.7896

//Your parser must read in each input, and then print it to the correct file.
//ints go in ints.txt
//chars go in chars.txt
//floats go in floats.txt

//CODE BEGINS HERE
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char buff[255];
  ssize_t read;

  
  FILE* fp1 = fopen("chars.txt", "w");

  FILE* fp2 = fopen("floats.txt", "w");

  FILE* fp3 = fopen("ints.txt", "w");

  FILE* out = fopen("input.txt", "r");

  while((read = fscanf(out, "%s", buff)) != -1){
    if(buff[0] == 'I'){
      fscanf(out, "%s", buff);
      fprintf(fp3, "%s ", buff);
    }
    else if(buff[0] == 'C'){
      fscanf(out, "%s", buff);
      fprintf(fp1, "%s ", buff);
    }
    else{
      fscanf(out, "%s", buff);
      fprintf(fp2, "%s ", buff);
    }
  }

  fclose(out);

  return 0;
}
//include fprintf and fscanf

//begin your main function

//open ints.txt, chars.txt, and floats.txt for writing
//open input.txt for reading
//don't forget that the file access mode is different for each!

//create a char variable to hold the flags you read	

//create an int, char, and float variable to hold the int, char, and float values you read

//while fscanf does not return an EOF error
//read in a flag from input.txt

//if it stands for an int
//read an int from input.txt
//write the int to ints.txt

//if it stands for a char
//read a char from input.txt
//write the char to chars.txt

//if it stands for a float
//read a float from input.txt
//write the float to floats.txt

//once fscanf returns and EOF error return a successful exit status

