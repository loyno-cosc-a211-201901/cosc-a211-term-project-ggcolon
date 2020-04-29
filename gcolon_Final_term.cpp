//Gerardo Colon
//Final programming project 
//4/28/2020
//This is a story based trial and error game. You have to pick the right options to win, if you do not pick the right options you will have to start over. Only by picking the correct options in the correct order will you be able to beat the game.


#include <iostream>


using namespace std;
 
int main()

{

    //Story line begins here. 
    cout << "Hey! Hey you, you're finally awake." << endl;
    
    //This is just to separate each dialouge box, as they tend to cluster up and look confusing.
 cout << "------------------------------------------------------------------------------" << endl;
  
    cout << "Stranger: You were trying to cross the border, walked into that imperial ambush right? It was the same with me. These Imperials have no class." << endl;
  
cout << "------------------------------------------------------------------------------" << endl;
    
    cout << "Guard: Quite, prisoners!" << endl;
    
cout << "------------------------------------------------------------------------------" << endl;
    
    cout << "Stranger: Say, I don't recall ever seeing you in battle. Are you new around here?" <<endl;
    
    //This is the function that helps keep your name in check for usage in all the dialouges.
    char name[50];
    
      cout << "What is your name, stranger?" << endl;
    
    //This is to actually get your name.
    cin.getline(name, 50);
    
cout << "------------------------------------------------------------------------------" << endl;
    
    
    cout << "Well then " << name << " how about we work together, get out of here?" << endl;
    
    //This function is used to start separate paths to take for the story line 
    int choiceOne_Path;
  
  cout << "------------------------------------------------------------------------------" << endl;
    
    cout << "* What will you do? *" << endl;
  
  cout << "------------------------------------------------------------------------------" << endl;
    
    cout << "* Type in '1' to help the Stranger escape. *" << endl;
  
  cout << "------------------------------------------------------------------------------" << endl;
    
    cout << "* Type in '2' to do nothing. *" << endl;
  
  cout << "------------------------------------------------------------------------------" << endl;
    //If you type in the wrong answer, it will retry and ask the same question.
    retry:
  
    cout << "* Type in your choice, then press Enter to continue: *" << endl;
    
cout << "------------------------------------------------------------------------------" << endl;
  
    cin >> choiceOne_Path;
    
    //Here we have the first choice to pick for the path.
    if(choiceOne_Path == 1)
  
    {
  
    cout << "------------------------------------------------------------------------------" << endl;
    
  
        cout << "Stranger: Perfect, I knew I could count on you " << name << "! I have a plan, so get ready..." << endl;
  
  cout << "------------------------------------------------------------------------------" << endl;
    
        cout << "Guard: I thought I told you to shut up!" << endl;
  
  cout << "------------------------------------------------------------------------------" << endl;
    
        cout << "You see the guard get close to you and the Stranger. The Stranger suddenly rushes the guard and tackles him to the ground." << endl;
       
    cout << "------------------------------------------------------------------------------" << endl;
    
        cout << "Stanger: Now " << name << "! Get his weapon!" << endl;
        
        
    }
   
    //Make an else statement for the second path to choose.
    else if(choiceOne_Path == 2)
  
    {
  
    cout << "------------------------------------------------------------------------------" << endl;
    
  
        cout << "Stanger: What! Do you not want to get out of here! This is insane!" << endl;
  
  cout << "------------------------------------------------------------------------------" << endl;
    
        cout << "Guard, hey I though I told you to shut up! " << endl;
  
  cout << "------------------------------------------------------------------------------" << endl;
    
        cout << "You see the guard approach the Stranger. The Stranger tries to rush down the guard, but fails." << endl;
       
    cout << "------------------------------------------------------------------------------" << endl;
    
        cout << "Guard: You slippery little worm!" << endl;
        
    cout << "------------------------------------------------------------------------------" << endl;
    
        cout << "The guard knocks down the Stranger, and begins to try and contain the struggling man." << endl;
        
    cout << "------------------------------------------------------------------------------" << endl;
        
        cout << "After some more struggling the Stranger finally gets subdued, seemingly knocked out. The guard throws the Stranger back into the cell you are in." << endl;
    
     cout << "------------------------------------------------------------------------------" << endl;
       
        cout << "Guard: You two will be here for a long time..." << endl;
    
     cout << "------------------------------------------------------------------------------" << endl;
        
        cout << "You stay in the cell for god knows how long, until eventually, you wither away into nothingness." << endl;
    
      cout << "------------------------------------------------------------------------------" << endl;
    
        cout << "You have lost..." << endl;
        
    cout << "------------------------------------------------------------------------------" << endl;\
         //Game ends since you lost
         return 0; 
      
    
    }
    //This else is just in case the player types in the wrong answer. It will bring them back to the right answers.
    else
  
    {
        cout << "You can't type that! Press '1' or '2', nothing else works." << endl;
   
        goto retry;
    }
 
//The switch here is used to go to be able to keep branching the paths from the different choices that are made. 

switch(choiceOne_Path)
   
    {
        //Choices in correlation to choice 1 
        case 1: cout << "* What will you do? *" << endl;
      
       int choiceOne_Path;
    
cout << "------------------------------------------------------------------------------" << endl;
    
    cout << "* Type in '1' to get the weapon. *" << endl;
  
  cout << "------------------------------------------------------------------------------" << endl;
    
    cout << "* Type in '2' to do nothing. *" << endl;
  
  cout << "------------------------------------------------------------------------------" << endl;
    
    cin >> choiceOne_Path;
    
    if(choiceOne_Path == 1)
    
    {
     cout << "------------------------------------------------------------------------------" << endl;
        
        cout << "You pick up the weapon, a standard sword, and use the blunt end of the blade to hit the guards head and knock him out." << endl;
        
     cout << "------------------------------------------------------------------------------" << endl;
     
        cout << "Stranger: Phew, nice work there " << name << ", Let's see if there's an exit to this place." << endl;
        
     cout << "------------------------------------------------------------------------------" << endl;
    
        cout << "You look around and do not see any clear exists, just a a lot of doors. The stone walls surrounding you are old,  moss growing all over them." << endl;
        
     cout << "------------------------------------------------------------------------------" << endl;
         
         cout << "Stranger: Oh right, where are my manners? The name's Aaron, and don't you forget it." << endl; 
         
    cout << "------------------------------------------------------------------------------" << endl;
    
    
    }
    
    else if(choiceOne_Path == 2)
    
    {
    
     cout << "------------------------------------------------------------------------------" << endl;
    
    cout << "Stranger: What are you doing!" << name << ", get the weapon! Help me here!" << endl;
    
      cout << "------------------------------------------------------------------------------" << endl;
        
        cout << "After some more struggling the Stranger finally gets subdued, seemingly knocked out. The guard throws the Stranger back into the cell you are in." << endl;
    
     cout << "------------------------------------------------------------------------------" << endl;
       
        cout << "Guard: You two will be here for a long time..." << endl;
    
     cout << "------------------------------------------------------------------------------" << endl;
        
        cout << "You stay in the cell for god knows how long, until eventually, you wither away into nothingness." << endl;
    
      cout << "------------------------------------------------------------------------------" << endl;
    
        cout << "You have lost..." << endl;
        
    cout << "------------------------------------------------------------------------------" << endl;
         
         return 0; 
        
    }
    
    else
    
    {
         cout << "You can't type that! Press '1' or '2', nothing else works." << endl;
   
    
        goto retry;
    }
      
        
     
    //Since with picking option 2 you would've lost, then there is techniacally no branching path, so just continue.
   
   cout << "Aaron: So, now that we have taken out the guard, we have to find a way out. Follow me, I think I remember the way." << endl;
   
  cout << "------------------------------------------------------------------------------" << endl;
   
    cout << "* What will you do? *" << endl;
    
  cout << "------------------------------------------------------------------------------" << endl;
    
    cout << "* Type '1' to follow Aaron. *" << endl;
    
cout << "------------------------------------------------------------------------------" << endl;
    
    cout << "* Type '2' to go find your own way out. *" << endl;
    
cout << "------------------------------------------------------------------------------" << endl;
    
    cout << "* What is your choice? *";
    
    cin >> choiceOne_Path;
    
    
    if(choiceOne_Path == 1)
    
    {
    
      cout << "------------------------------------------------------------------------------" << endl;
    
        cout << "Aaron: Alright, I'm pretty the guard brought us in from the 3rd door to the right over there. Let us go." << endl;
        
    cout << "------------------------------------------------------------------------------" << endl;
    
        cout << "You and Aaron enter the door, to see that it leads to a long and barely lit hallway " << endl;
        
     cout << "------------------------------------------------------------------------------" << endl;
    
        cout << "Aaron: Ooooooohhh, Chilling! Well, let's go!" << endl;
        
    cout << "------------------------------------------------------------------------------" << endl;
        
        cout << "You've been walking for a while, no ending in site for the long corridor you cureently reside in. Then out of nowhere you hear a rumbling coming from behind." << endl;
        
    cout << "------------------------------------------------------------------------------" << endl;
        
        cout << "Aaron: Hey, that wouldn't happen to be your stomache, now wouldn't it?" << endl;
        
    cout << "------------------------------------------------------------------------------" << endl;
        
        cout << "The rumbling got closer, soon sounding like a large amount of footsteps." << endl; 
        
    cout << "------------------------------------------------------------------------------" << endl;
        
        cout << "Guard: There they are! Get them!" << endl;
        
    cout << "------------------------------------------------------------------------------" << endl;
        
        cout << "Aaron: RUUUUUUUUUNNNNN!!!!!" << endl; 
        
    cout << "------------------------------------------------------------------------------" << endl;
        
        cout << "You bolt forward, not wanting to get caught by the gaurds again. Soon enough you see Aaron trip besides you. He calls for help." << endl;
        
    cout << "------------------------------------------------------------------------------" << endl;
        
        
        
        
    }
    
    
    
    else if(choiceOne_Path == 2)
    
    {
    
        cout << "Aaron: You sure there " << name << "? Well suit yourself, I'll be going over there if you change your mind." << endl;
        
    cout << "------------------------------------------------------------------------------" << endl;
    
        cout << "You see Aaron enter a seemingly random door, he looks back once more before fully exiting your sight. You look around to see if there is any easy way out. You see two immediate options." << endl;
        
    cout << "------------------------------------------------------------------------------" << endl;
    
        cout << "First, you see a window above you that is radiating light, probably leading outside whatever prison/dungeon you are currently in." << endl;
        
    cout << "------------------------------------------------------------------------------" << endl;
    
        cout << "Second, you see that there is a sizeable crack in a wall near you, it looks unstable enough for you to break it with a heavy object." << endl;
        
    cout << "------------------------------------------------------------------------------" << endl;
    
    cout << "But as soon as you were going think about your options, a army of guards come in and swarm you, ending your escape. They shove you back into your cell and interrogate you for Aaron's location. you sadly give in after much pain and you pass out." << endl; 
    
      cout << "------------------------------------------------------------------------------" << endl;
    
    cout << "You stay in the cell for god knows how long, until eventually, you wither away into nothingness." << endl;
    
      cout << "------------------------------------------------------------------------------" << endl;
    
        cout << "You have lost..." << endl;
        
    cout << "------------------------------------------------------------------------------" << endl;
    
    return 0;
    
       
    }
    else
    {
        cout << "You can't type that! Press '1' or '2', nothing else works." << endl;
    
        goto retry;
    }
    
        
    }
    
}
    