//dfa that accepts atleast 2 strings or more
//alphabet = {a,b}
#include <iostream>
#include<string>

using namespace std;

   //initialize dfa variable
  // A=0,B=1,C=2
    int dfa =0;
  //function for state A
    void stateA (char n)
    {   
     /*here if char is a or b
     there is a transition
     from stateA to StateB*/
        if ((n=='a')||(n=='A')||(n=='b')||(n=='B'))
        dfa=1;     
    }
    //function for state B
    void stateB (char n)
    {   
        /*here if char is a or b
     there is a transition
     from stateB to StateC*/
        if ((n=='a')||(n=='A')||(n=='b')||(n=='B'))
        dfa=2;
    }
    //function for state C
    void stateC (char n)
    {   
       /*here if char is a or b
       transition remains in stateC*/
        if ((n=='a')||(n=='A')||(n=='b')||(n=='B'))
        dfa=2;
    }
    //checking each character's acceptance
    bool isAccept(string strr)
    {   
        //convert string to character array
         // create a new array of chars to copy to (+1 for a null terminator)
        char* str = new char[strr.length() + 1];
        // make sure that the new string is null terminated
        str[strr.length()] = '\0';
        for(int i=0; i<strr.length() ;i++)
        {   
            str[i]=strr[i];
            if (dfa==0)
            stateA(str[i]);
            else if (dfa==1)
            stateB(str[i]);
            else 
            stateC(str[i]);
        }
        return (dfa==2);
      //since stateC is final state
    }
	int main() {
    string str1="a";
    //checking if string is accepted
    if (isAccept(str1)==true)
    cout<<"Accepted"<<endl;
    else
    cout<<"not Accepted"<<endl;
    string str2="abababab";
    //checking if string is accepted
    if (isAccept(str2)==true)
    cout<<"Accepted"<<endl;
    else
    cout<<"not Accepted"<<endl;
	return 0;
	    
	}

