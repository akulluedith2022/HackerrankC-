/*
this is a programme that lists the instructions for a
computer to find the upstairs bathroom.

Dear Reader,
Here's a short description of the layout of the house
in mind, given the current location of the computer
is the living room.

The living room has a flight of 10 stairs to the right, 
directly opposite the house entrance going up the next 
floor. This is so since the computer is facing the 
TV screen.

the stairs lead up to a hallway that's about 10m long,
with 2 rooms on either side of it.
the bathroom is 3.5m into the hallway to the right.
*/

#include <iostream>
using namespace std;

int main(){
    cout << "1. Turn 90 degrees clockwise and move straight (walk function) until you meet an 
    obstacle (which is the foot of the staircase\n";
   
    cout << "2. Raise right limb by 0.15m, move the same limb forward by the foot 
    length\n";

    cout << "3. Repeat the step 2 for left limb\n";
    
    cout << "4. Repeat the steps 2,3 int(number_of_stairs/2) times for left and int(number_of_stairs/2) + 1 for the starting limb\n";
    //if there are four stairs and we started with the right foot, the left is raised twice but the right is raised 2 + 1 times
    //at the end of step 4, you are now (10 - footlength)m at the beginning of the hallway and (3.5 - footlength)m away from the bathroom door.
    cout << "5. walk() function until total distance moved (summation_footlength + distance_between_footsteps) == 3.5m\n";
    
    cout << "6. turn 90 degrees clockwise\n";

    return 0;
}