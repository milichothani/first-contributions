//Checking if the entered string is plaindrome or not and also reversing it.
//A palindrome is a word, sentence, verse, or even number that reads the same backward or forward.



#include<iostream>
#include<string.h>
//#define max 50;
 using namespace std;

class STACK {
private:
char a[50];
int top;
public:
STACK(){
top=-1;
}
void push(char c){
top++;
a[top] = c;
a[top+1]='\0';
cout<<endl<<c<<" is pushed in STACK!";
}
void reverse(){
char str[50];
cout<<"\n\nReverse string is : ";
for(int i=top,j=0; i>=0; i--,j++){
cout<<a[i];
str[j]=a[i];
}
cout<<endl;
}
void convert(char str[]){
int j,k,len = strlen(str);
for(j=0, k=0; j<len; j++){
if( ( (int)str[j] >= 97 && (int)str[j] <=122 ) || ( (int)str[j] >= 65 && (int)str[j] <=90 )){
if( (int)str[j] <=90 ){
str[k] = (char)( (int)str[j] + 32 );
}
else{
str[k] = str[j];
}
k++;
}
}
str[k]='\0';
cout<<endl<<"Converted String : "<<str<<"\n";
}
void palindrome(){
char str[50];
int i,j;
for(i=top,j=0; i>=0; i--,j++){
str[j]=a[i];
}
str[j]='\0';
if(strcmp(str,a) == 0)
cout<<"\nSTRING IS PLAINDROME!!";
else
cout<<"\nSTRING IS NOT PLAINDROME!!!";
}
};
int main()
{
STACK obj;
char str[50];
int i=0;
cout<<"\nEnter string to be reversed and check is it palindrome or not : \n\n";
cin.getline(str , 50);
obj.convert(str);
while(str[i] != '\0'){
obj.push(str[i]);
i++;
}
obj.palindrome();
obj.reverse();
}

//expected output:
/*Enter string to be reversed and check is it palindrome or not : 

Poor Dan! is in A Droop.

Converted String : poordanisinadroop

p is pushed in STACK!
o is pushed in STACK!
o is pushed in STACK!
r is pushed in STACK!
d is pushed in STACK!
a is pushed in STACK!
n is pushed in STACK!
i is pushed in STACK!
s is pushed in STACK!
i is pushed in STACK!
n is pushed in STACK!
a is pushed in STACK!
d is pushed in STACK!
r is pushed in STACK!
o is pushed in STACK!
o is pushed in STACK!
p is pushed in STACK!
STRING IS PLAINDROME!!

Reverse string is : poordanisinadroop 

Enter string to be reversed and check is it palindrome or not : 

Hi my name is Mili

Converted String : himynameismili

h is pushed in STACK!
i is pushed in STACK!
m is pushed in STACK!
y is pushed in STACK!
n is pushed in STACK!
a is pushed in STACK!
m is pushed in STACK!
e is pushed in STACK!
i is pushed in STACK!
s is pushed in STACK!
m is pushed in STACK!
i is pushed in STACK!
l is pushed in STACK!
i is pushed in STACK!
STRING IS NOT PLAINDROME!!!

Reverse string is : ilimsiemanymih */
