#include<stdio.h>
#include<stdlib.h>
void main()
{
	int ch1,ch2;   //integer variables created for storing ascii values of characters inside the files
	FILE *fp1=fopen("studentname.txt","r"); // creating file pointers to access data inside files
	FILE *fp2=fopen("usn.txt","r");
	FILE *fp3=fopen("output.txt","w");
	if(fp1==NULL || fp2==NULL)  //if files are not opened due to various reasons then NULL would be returned 
	{
		printf("Cannot open requested file\n");
		exit(0);
	}
	fprintf(fp3,"Student name\tUSN\n"); //printing the column names on the output files
	ch1=fgetc(fp1); //to get the data of file character by character we use the function "fgetc(FILE POINTER)";
	ch2=fgetc(fp2);
	while(ch1 != EOF || ch2 != EOF) // checks whether "End Of File" has been reached or not
	{
			while(ch1 != '\n') //if the character is a not a "new line character" (\n) then we would enter the loop
			{
				fputc(ch1,fp3); // writing the data character wise on to the output file
				ch1=fgetc(fp1); // get the next data of first file
			}
			ch1=fgetc(fp1);
			fputc(' ',fp3); // PLEASE NOTE : Enter the names of student iff no. of characters is 7 or 8! Can't explain in one line!
			fputc('\t',fp3); //Inserting a tab space(4spaces)
			while(ch2 != '\n') // repaeating the above for next file
			{
				fputc(ch2,fp3);
				ch2=fgetc(fp2);
			}
			ch2=fgetc(fp2);
			fputc('\n',fp3);// inserting a new line character after writing the complete details of the line
	}
	printf("Please Open file output.txt\n");
	fclose(fp1); // closing all files "THIS IS A MUST"
	fclose(fp2);
	fclose(fp3);
}
// Do not hesitate to drop a mail to sameerasy7@gmail.com if you have any queries!
