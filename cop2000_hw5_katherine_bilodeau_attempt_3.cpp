// Katherine Bilodeau COP2000 HW5

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

// Function Prototypes
int random_game_board_selector (int []);                        // Chooses a random board for the player
void display_board (int [][3]);                                 // Displays the game board chosen from random_game_board_selector
bool test_winner (int, int, int []);                            // Checks the user's answer against the answer board array 
void display_game_instructions ();                              // Displays instructions
void check_for_champ (int []);                                  // Checks to see if all three boards have been answered correctly
bool is_input_valid (int);                                      // Checks to ensure the user entered a number that will work in the program (no zeros)  

int main ()
{
    const int number_of_columns = 3;
    const int number_of_rows = 4;
    // enter the arrays
            
            // answer_board
                    int answer_board [number_of_columns]                = {14, 15, 8}         ;
            
            // used boards (game boards won)
                    bool game_boards_won [number_of_columns]            = {false, false, false}  ;
    const int max_number_of_guesses = 3 ;               
    //call the functions
    display_game_instructions ();
    // The following string of comments is a mess of things failing to work. 
    
        //random_game_board_selector (int used_game_boards []); Why is this function not running? 
        //if (is_input_valid (user_answer)) random_game_board_selector (int used_game_boards []);) (This is another version of the statement above to try to get it to work. )
        //else loop 
            //do
                //ask for guesses
                // guessesmade++ ;
                // (display_board (int current_game_board [][3]); // This is where the game is supposed to come up I think. 
                // test_winner;
                // check_for_champ (int game_boards_won[]);
                // is_input_valid (int user_answer)
                
            //while (guessesmade < max_number_of_guesses)
            
      // Goals      
        // the guesses will need to be kept track of in main, as well as the main game play
        // when the user wins, game_boards_won [generated_random_number]= true
        // everything will need to be run in a do while loop according to the instructions 
    
   
    return 0;
}

// Function Definitions

int random_game_board_selector (int used_game_boards [])
{
    const int number_of_columns = 3;
    //random number generation
        // check to see if the board was previously played (how is this matched to the array, and where?)
        // check with used_game_boards array (if == NULL)
        //return some integer that signifies the random board chosen 
        // this needs to be set up in a loop 
    while (used_game_boards [number_of_columns] == NULL)
    { 
        int min_value      = 0 ; 
        int max_value      = 2 ;
        int generated_random_number = ((rand () % (max_value - min_value + 1 )) + min_value);
        return   generated_random_number ; 
    }
}

void display_board (int current_game_board [][3])
{
    const int number_of_columns = 3;
    const int number_of_rows    = 4;    
    // enter the arrays 
            //enter board 0
                    int game_board0 [number_of_rows][number_of_columns] = { 38, 11  , 83,
                                                                            15, 6   , 33,
                                                                            11, 2   , 20,
                                                                            86, NULL, 95 }  ;  // When entering these arrays I put NULL because the "getting started" video said to. 
                                          
            // enter board 1 
                    int game_board1 [number_of_rows][number_of_columns] = { 28, 10  , 55,
                                                                            89, 17  , 98, 
                                                                            22, 4   , 31,
                                                                            69, NULL, 78 }  ;
                                          
            // enter board 2
                    int game_board2 [number_of_rows][number_of_columns] = { 90, 9   , 45,
                                                                            66, 12  , 48,
                                                                            34, 7   , 70,
                                                                            44, NULL, 26 }  ; 
                                                                            

 const int generated_random_number = 1; // written for code to compile, because generated random number isn't an integer that is usable in the switch statement apparently. 
          
    switch (generated_random_number) // how does the random number connect to the game board array? 
    {
        case 0: 
        {
            // Why are x and y here? What is the purpose? Should be renamed... (I got this code from the textbook)
            for (int x=0; x < number_of_rows; x++)
                {
                    for (int y=0; y < number_of_columns; y++)
                    {
                        cout << setw (8) << game_board0 [x][y] << " ";
                    }
                    cout << endl;
                }
        }
         
         
         case 1: 
        {
            for (int x=0; x < number_of_rows; x++)
                {
                    for (int y=0; y < number_of_columns; y++)
                    {
                        cout << setw (8) << game_board1 [x][y] << " ";
                    }
                    cout << endl;
                }
        }
        
         case 2: 
        {
            for (int x=0; x < number_of_rows; x++)
                {
                    for (int y=0; y < number_of_columns; y++)
                    {
                        cout << setw (8) << game_board2 [x][y] << " ";
                    }
                    cout << endl;
                }
        }
        
      
    }
        
    
}

bool test_winner (int user_answer, int current_game_board_number, int answer_board [])
{
    // write as an if/else statement
    //returns true or false
    // how do you connect the answer board array to the gameplay? 
    // how does the game board number connect to the game board array? 
    
}

void display_game_instructions ()
{
    cout << "Welcome to the Missing Numbers Game. " << endl;
    cout << "A fun brain game... " << endl << endl << endl ;
    cout << "Please enter a whole number to guess the missing number. " << endl;
   
}

void check_for_champ (int game_boards_won[])
{
    if (game_boards_won[0] && game_boards_won[1] && game_boards_won[2] == true) ;
    {
        cout << "Congratulations! You are the champion! " << endl;
    }
}

bool is_input_valid (int user_answer)
{
    if (user_answer >=1)
    return true;
    else
    return false;
    
    
}


