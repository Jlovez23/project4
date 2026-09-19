include libraries

prototype advance();
prototype printLane();
prototype isWinner();

create constant for track length of 14
create constant for start of 0
create constant for horseCount of 5

function main(){
  create array with variables for horses and values of distance in track;
  create bool variable keepGoing set to true
  while loop with keepGoing variable
    for i in range of 0 to horseCount
      printLane(i,array) to generate map
      advance(i,array) 
      won = isWinner(i,array)
      if won = true
        print "horse" + horse number + "has won!"
        keepGoing = false
    

function advance(horse number, array);
  randint between 0-1 for advancement
  provided horses distance added with advancement
  

function printLane(array);
    for j in range of start to horses[horse number]
      print .
      if j = horse number
        print horse number

function isWinner();
  result = false
  given horse number in array
  if horses value is equal to track
    result = true   
    
