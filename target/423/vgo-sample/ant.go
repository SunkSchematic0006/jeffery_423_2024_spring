package main
// 
// File:   ant.go
// Based on ant.{cpp,h} by Joshua Rubini, October 2011
// 
// ant class includes all basic movement methods,
// energy handling, and a simple means of output
// 
// You may output an ant. For example
//   For an ant my_ant w/ x = 5, y = 6, energy = 40, facing north,
//   the statement: my_ant.output() will output: "(5,6) ^ 40"
//   to the screen.
 //

struct ant {
        
   int x,y
   string dir
   int energy

   void output() {
      write("(" GetX() "," rhs.GetY() ") " Print() " " GetEnergy())
   }

   // ant() constructor. Initializes ant to location (0,0), facing north
   ant() {
      x = 0
      y = 0
      energy = 0
      dir = "^"
   }

   // Accessors: return the requested data member
   int GetX() {
      return x
   }

   int GetY() {
      return y
   }

   int GetEnergy() {
      return energy
   }

   string Print() {
      return dir
   }

   // ChangeEnergy(int) -- Mutator:
    * @param n: amount to add to energy
    * Adds the specified amount to energy
    * (to subtract energy, pass in a negative value)  
    //
   void ChangeEnergy(int n) {
      energy += n
   }

//------------------- ant Methods ----------------------------

// Note on coordinate system:
// This implementation assumes a set of "normal" Euclidean axes. 
// In particular, moving "north" moves the ant "up" the screen, and
// increases its y-coordinate by 1, while moving "south" does the
// opposite.  Similarly, moving "east" moves the ant to the right,
// and increases its x-coordinate by 1.  Therefore, when printing,
// the row and column indices would look like this:
// 
//        +Y
// (MAX_Y-1) |   |   |   |   |   |   |
//           +---+---+---+---+---+---+---
// (MAX_Y-2) |   |   |   |   |   |   |
//           +---+---+---+---+---+---+---
//     ...   |///|///|///|///|///|   |
//           +---+---+---+---+---+---+---
//     ...   |///|///|///|///|///|   |
//           +---+---+---+---+---+---+---
//         2 |0,2|1,2|2,2|///|///|   |
//           +---+---+---+---+---+---+---
//         1 |0,1|1,1|2,1|///|///|   |
//           +---+---+---+---+---+---+---
//         0 |0,0|1,0|2,0|///|///|   |
//        ---+---+---+---+---+---+---+--- 
//      -x   | 0   1   2  ... ...  *   **  +x
//        -y
// 
//    * = MAX_X-2
//   ** = MAX_X-1
// 
// In order to achieve this using normal streaming output commands
// (cout << .... << endl; etc.) you will need to count _down_ the y/row
// values.  Otherwise, when moving in the y direction, your ant will
// appear to move "backwards".
// 
 //

// Note on implementation:
// All movement methods use a simple switch statement off of the current
// direction.  While not necessarily the most concise or general solution,
// it has the advantage of being fairly easy to understand and shows how
// similar the logic for each method is, so it is the method I chose.
 //


   // Left() -- Method:
    * Changes the direction the ant is facing based upon its current
    * facing and energy.  Ants require 1 energy to turn left.  If
    * insufficient energy is available, direction is unchanged and the
    * method returns false, indicating it failed to turn.  Otherwise,
    * energy is decremented, the direction is updated to the new, correct
    * facing, and a value of true is returned to indicate success.
    //
   bool Left() {
      bool ret_val
      ret_val = false
      if (energy > 0) {
         energy -= 1
	 if (dir == "^") { dir = "<" }
         else if (dir == ">") { dir = "^" }
	 else if (dir == "v") { dir = ">" }
	 else if (dir == "<") { dir = "v" }
         ret_val = true
      }
      return ret_val
   }

   // Right() -- Method:
    * Changes the direction the ant is facing based upon its current
    * facing and energy.  Ants require 1 energy to turn right.  If
    * insufficient energy is available, direction is unchanged and the
    * method returns false, indicating it failed to turn.  Otherwise,
    * energy is decremented, the direction is updated to the new, correct
    * facing, and a value of true is returned to indicate success.
    //
   bool Right() {
    bool ret_val
    ret_val = false
    if (energy > 0) {
        energy -= 1
	if (dir == "^") { dir = ">" }
	else if (dir == ">") { dir = "v" }
	else if (dir == "v") { dir = "<" }
	else if (dir == "<") { dir = "^" }
        ret_val = true
    }
    return ret_val
   }

   // Forward() --
    * Changes the location of the ant based upon its current
    * facing and energy.  Ants require 2 energy to move forward.  If
    * insufficient energy is available, location is unchanged and the
    * method returns false, indicating it failed to move.  Otherwise,
    * energy is decremented by 2, the location is updated to the new,
    * correct location, and a value of true is returned to indicate success.
    //
   bool Forward() {
    bool ret_val
    ret_val = false
    if (energy > 1) {
        energy -= 2
	if (dir == "^") { y += 1 }
	else if (dir == ">") { x += 1 }
	else if (dir == "v") { y -= 1 }
	else if (dir == "<") { x -= 1 }
        ret_val = true
    }    
    return ret_val
   }
}
