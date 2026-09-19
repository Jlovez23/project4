#include <iostream>
#include <random>

void advance(int hn, int* horses);
void printLane(int hn, int* horses);
bool isWinner(int hn, int* horses);

const int track=14;
const int horseCount=5;

int main(){
   int horses[horseCount] = {0,0,0,0,0};
   bool keepGoing = true;
   int i=0;
   bool won = false;
   while (keepGoing){
     for (i=0; i <horseCount; i++){
	 printLane(i,horses);
         advance(i,horses);
	 won = isWinner(i,horses);
	 if (won == true){
	    std::cout << "horse" << i << " has won! \n";
	    keepGoing = false;
	 }
     } // end of for
     std::cout << "Press enter to continue! \n";
     std::cin.get();
   } // end of while
} //end of main

void advance(int hn, int* horses){
	std::random_device rd;
	std::uniform_int_distribution<int> dist(0,1);
	int movedist=dist(rd);
	horses[hn] += movedist;
} //end advance

void printLane(int hn, int* horses){
    int j=0;
    for (j=0 ; j<track ; j++){
	if (j==horses[hn]){
	  std::cout << hn;
        } // end if
	std::cout << ".";
    }
    std::cout << "\n";
} //end printLane

bool isWinner(int hn, int* horses){
   bool result = false;
   if (horses[hn] == track){
     result = true;
   } //end if
   return result;
} // end isWinner
