/*
student name:nikita lama
subject     :programming fundamental
roll no     :20
lab no      :14
program     :write a c program to check character assigned from user is vowel or not
date        :21 dec,2016
*/
#include<stdio.h>
int main(){
	char ch;
	printf("Enter any character\n");
	scanf("%c",&ch);
	if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("it is vowel letter");

} 
else
{
	printf("it is not vowel letter");
}
return 0;
}
