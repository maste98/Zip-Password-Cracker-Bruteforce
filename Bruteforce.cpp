#include <iostream>
#include <string>
using namespace std;

int main()
{
    string password;
    string entered="";
   //char d[2]={'a','b'};
   //char e='b';
   //string t=string(1,d[0])+string(1,d[1]);
   //cout << t;

    int counter =0;
    cout << "Enter a password 1-8 characters long"<< endl;
    cin >> password;
    while(password.length()>8){
        cout << "Password does not meet requrirments, try again" << endl;
        cin >> password;
    }
     //string characters="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUFWXYZ0123456789.,#!_?$";
     const char characters[70]=
    { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
	  'h', 'i', 'j', 'k', 'l', 'm', 'n',
	  'o', 'p', 'q', 'r', 's', 't', 'u',
	  'v', 'w', 'x', 'y', 'z',

	  'A', 'B', 'C', 'D', 'E', 'F', 'G',
	  'H', 'I', 'J', 'K', 'L', 'M', 'N',
	  'O', 'P', 'Q', 'R', 'S', 'T', 'U',
	  'V', 'W', 'X', 'Y', 'Z',

	  '0','1','2','3','4','5','6','7','8','9',

	  '.',',','#','!','?','_','%','$'

    };

	for(int a=0;a<70;a++){
	    entered=characters[a];
	    if(entered==password){
	        cout << "Found "+entered<< endl;
	        return 0;
	    }
	}

	 if(password!=entered){
	 for(int a=0;a<70;a++){
	     for(int b=0;b<70;b++){
	         entered=string(1,characters[a])+string(1,characters[b]);

	         if(entered==password){
	            cout << "Found "+entered<< endl;
	            return 0;
	           }
	     }
	 }
	 }
	 if(password!=entered){
	 for(int a=0;a<70;a++){
	     for(int b=0;b<70;b++){
	         for(int c=0;c<70;c++){
	         entered=string(1,characters[a])+string(1,characters[b])+string(1,characters[c]);

	         if(entered==password){
	            cout << "Found "+entered<< endl;
	            return 0;
	           }
	         }
	     }
	 }
	 }

	 if(password!=entered){
	 for(int a=0;a<70;a++){
	     for(int b=0;b<70;b++){
	         for(int c=0;c<70;c++){
	             for(int d=0;d<70;d++){
	         entered=string(1,characters[a])+string(1,characters[b])+string(1,characters[c])+string(1,characters[d]);

	         if(entered==password){
	            cout << "Found "+entered<< endl;
	            return 0;
	           }
	             }
	         }
	     }
	 }
	 }
	    if(password!=entered){
	 for(int a=0;a<70;a++){
	     for(int b=0;b<70;b++){
	         for(int c=0;c<70;c++){
	             for(int d=0;d<70;d++){
	                 for(int e=0;e<70;e++){
	         entered=string(1,characters[a])+string(1,characters[b])+string(1,characters[c])+string(1,characters[d])+string(1,characters[e]);

	         if(entered==password){
	            cout << "Found "+entered<< endl;
	            return 0;
	           }
	                 }
	             }
	         }
	     }
	 }
	 }
	 if(password!=entered){
	 for(int a=0;a<70;a++){
	     for(int b=0;b<70;b++){
	         for(int c=0;c<70;c++){
	             for(int d=0;d<70;d++){
	                 for(int e=0;e<70;e++){
	                     for(int f=0;f<70;f++){
	         entered=string(1,characters[a])+string(1,characters[b])+string(1,characters[c])+string(1,characters[d])+string(1,characters[e])+string(1,characters[f]);

	         if(entered==password){
	            cout << "Found "+entered<< endl;
	            return 0;
	           }
	                     }
	                 }
	             }
	         }
	     }
	 }
	 }
	 if(password!=entered){
	 for(int a=0;a<70;a++){
	     for(int b=0;b<70;b++){
	         for(int c=0;c<70;c++){
	             for(int d=0;d<70;d++){
	                 for(int e=0;e<70;e++){
	                     for(int f=0;f<70;f++){
	                         for(int g=0;g<70;g++){
	         entered=string(1,characters[a])+string(1,characters[b])+string(1,characters[c])+string(1,characters[d])+string(1,characters[e])+string(1,characters[f])+string(1,characters[g]);

	         if(entered==password){
	            cout << "Found "+entered<< endl;
	            return 0;
	           }
	                         }
	                     }
	                 }
	             }
	         }
	     }
	 }
	 }
	 if(password!=entered){
	 for(int a=0;a<70;a++){
	     for(int b=0;b<70;b++){
	         for(int c=0;c<70;c++){
	             for(int d=0;d<70;d++){
	                 for(int e=0;e<70;e++){
	                     for(int f=0;f<70;f++){
	                         for(int g=0;g<70;g++){
	                             for(int h=0;h<70;h++){
	         entered=string(1,characters[a])+string(1,characters[b])+string(1,characters[c])+string(1,characters[d])+string(1,characters[e])+string(1,characters[f])+string(1,characters[g])+string(1,characters[h]);

	         if(entered==password){
	            cout << "Found "+entered<< endl;
	            return 0;
	           }
	                             }
	                         }
	                     }
	                 }
	             }
	         }
	     }
	 }
	 }
	  if(password!=entered)
	  cout << "Not Found" << endl;
}

