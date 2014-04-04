#include <iostream>
using namespace std;

#define TWODIGIT_START 10 
#define TWODIGIT_END 99
#define THREEDIGIT_START 100
#define THREEDIGIT_END 999
#define FOURDIGIT_START 1000
#define FOURDIGIT_END 999



enum digit{digit2=2,digit3=3,digit4=4};
class Poly{

public:
    
  Poly(int init=0): number(init),highest(0){};
	int riverseDigit(int, int);
	void runPolyndrome(digit);

private:
	int number;
	int highest;
};

int Poly::riverseDigit(int start, int final){

  int slit;  int checkMe;
  int  sign; int inv;
  if (start || final != 0){
    for(int s = start; s <= final; s++){
      for(int p=s; p <= final; p++){
        inv = 0;
        slit=s*p;
        checkMe=slit;
        sign = checkMe>0?1:-1;
        checkMe = checkMe * sign;

        while(checkMe > 0){
          inv = inv * 10 + (checkMe%10);
          checkMe = checkMe / 10;
        }
   
        if(slit == inv && slit > highest)
          highest = slit;
      } 
    }              
  }
  return highest;
}

void Poly::runPolyndrome(digit starInputDigit){
//run the iteration of number  
    switch(starInputDigit){

	    case digit2:
	   	  cout<<"the largest polyndrome :"
        <<riverseDigit(TWODIGIT_START,TWODIGIT_END)<<endl;
				break;
			case digit3:
        cout<<"the largest polyndrome :"
        <<riverseDigit(THREEDIGIT_START,THREEDIGIT_END)<<endl;  			
				break;
      case digit4:
        cout<<"the largest polyndrome :"
        <<riverseDigit(FOURDIGIT_START,FOURDIGIT_END)<<endl;
				break;
			default:
        cout<<"the largest polyndrome :"<<"out of digit"<<endl;      
			   break;	
		
	}
	
}	

int main(){

	Poly polyndrome(2);
  digit myDigit=digit3;
  polyndrome.runPolyndrome(myDigit);

	return 0;
}



//the psudocode
// 1.input digit polyndrome.
// 2.do calculation times from the lowest
// digit to the highest digit 
// 3.while the calculation determine is it polyndrome or not
// 4. if yes put it into variable
// 5. the next iteration do comparison the highest number
// betwen the existing polyndrome and the new one
// which is the highest poly put into the variable

