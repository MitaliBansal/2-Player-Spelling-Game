#include<iostream>
#include<string>
using namespace std;

int main(){
	int length,mistakes,flag;
	char ch;
    string input,output;	
    cout<<"Enter a word: ";
	cin>>input;
	length=input.size();
	system("CLS");
	cout<<"Puzzle :";
	output=input;
	for(int i=0;input[i]!='\0';i++)
    {
   	  switch(input[i]){
   	  	case 'a':
   	  	case 'e':
   	  	case 'i':
   	  	case 'o':
   	  	case 'u':
   	  	case 'A':
   	  	case 'E':
   	  	case 'I':
   	  	case 'O':
   	  	case 'U':
   	  		cout<<input[i]<<" ";
		    continue;  	
   	  }
      
	  cout<<"_ ";
      output[i]='_';
    }
    cout<<output;
	cout<<"\n"<<"How many mistakes can 2nd player commit?"<<"\n";
	cin>>mistakes;
	cout<<"\nNow 2nd player can start playing:\n";
	while(mistakes>0)
    {
       cout<<"\nEnter a character :";
       cin>>ch;
       flag=0;
       for(int i=0;i<length;i++)
       {
         if(ch==input[i])
         {
           output[i]=input[i];
           flag++;
         }
       }
       for(int i=0;i<length;i++)
         cout<<output[i]<<" ";
       if(input==output)
         break;
       if(flag==0)
         cout<<"\nU r left with "<<--mistakes<<" chances.";
    }
    if(mistakes==0)
      cout<<"\nU lost the game.\nRight word was "<<input;
    else
      cout<<"\nU won.";
    return 0;	
}
