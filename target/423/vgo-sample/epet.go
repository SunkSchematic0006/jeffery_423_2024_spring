package main
// declaration of the pet class
struct pet {
     int hunger	// data member
     int happy		// data member
     string name	// data member

   // Constructor, creates a new pet with starting values. //
     pet(){
        hunger = 50
        happy = 50
        write("Pet's name? (One word) ")
        name = read()
     }

   // Member function play(), allows playing with a pet. //
   void play()
   {
      int choice
      write( "What should we play?" )
      write( " Fetch (1) \n Roll over (2) \n" )
      choice = read()
      if (choice == 1) {
        happy += 10
        hunger += 5
	}
      else if (choice == 2) {
        happy += 5
        hunger += 1
	}
      else {
        write( "Not a valid choice." )
      }
   }

   // Member function feed(), allows the user to feed a pet. //
   void feed(){
      write("\nMMM, Yummy!\n")
      hunger -= 5
   }

   // Member function print(), prints information about a pet. //
   void print(){
      write( "\nYour pet "  name  " is " )
      write( "Happy: "  happy )
      write( "Hungry: "  hunger )
      }

   // Member function check_health(), checks the health of a pet. //
   int check_health(){
      if (hunger >= 100) {
         write( "\nYour pet has starved.\n" )
         return 1
      }
      if(happy <= 0){
         write( "\nYour pet has died of a broken heart." )
         return 1
      }
      return 0
      }
 }


 int main()
 {
    pet pet1
    int choice 
    int health_check
    do {
       pet1.print()
       write("What would you like to do with your pet?\n")
       write(" Play (1) \n Feed (2) \n Exit (0) \n")
       choice = read()
       switch (choice) {
       case 1:
          pet1.play()
          break
       case 2:
          pet1.feed()
          break
          }
       health_check = pet1.check_health()
    } while (choice != 0 && health_check != 1)
    write("Press enter to exit.")
    read()
    return 0
  }


