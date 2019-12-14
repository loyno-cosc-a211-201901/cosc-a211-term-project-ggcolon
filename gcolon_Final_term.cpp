//Gerardo Colon
//Term project for Monday, December 9, 2019

#include <iostream> 

#include <string>

using namespace std;

char Yourans; 

int scoretl; 


//This here is the answers you can choose from, how to get the right answer and score 
class Question{

public:
    
    void Qtext(string, string, string, string, string, char, int); 
    void Qtextans(); 

private:
    
    string Qtext2;
   
    string ans1;
    
    string ans2;
    
    string ans3;
   
    string ans4;

    char rightans;
    
    int Qscore;
};

int main()

{
    //The game starts off with a message from a misterious figure 
    cout << R"(
  *.            
                    ,*       
          **, ./*@@#(,*/     
         @ ./%//#*  ,%/%     
     ( ,&&*,(#&&@%/%@%     
      #%%@******(&@@@%&@     
     %%  (****#*((@@%&     
    #,#/    *,**    /#     
   (((/(((@.,(((,,(.*((@(    
     *%&...........,*& %     
    %  (/.......,,,# /       
       . ( @...,*( (         
           #.*%##/           
         @@....//&*&%(       
        /&%, .,/,(%#         
     &   .%&&,*//**(##&      

Wait, who are you? How did you get in here? Ah, whatever, it doesn't matter anyway. Look, I know this is sudden and all but I need you
you to take this...survey...quiz...thing. Don't worry about the details, dude.
    )" << "\n";

    cout << "Ya got to press Enter to start this thing...\n";
    
   cin.get();

    //Asking for the players name
    
    string name;
    
    cout << "So, like, what's your name?\n";
    
    cin >> name;
    
    cout << "\n";

    
   
    string respond;
   
    cout << "You sure you're ready, " << name << "? Yes/No.\n";
   
    cin >> respond;

    //If the player says yes than the game begins
    if (respond == "Yes" || respond == "yes") {
       
        cout << "\n";
       
       cout << "Alright, good luck I guess...\n";
       
       cout << "\n";
       
       cout << "Press Enter...Again, for some dumb reason";
       
        cin.get();
       
        cin.ignore();
    }else{
        
        cout << "\n";
        
        cout << "Wow, you're just gonna leave like that?\n";
        
        cin.ignore();
        
        cin.get();
        return 0;
    }// game ends if player says anything else than yes

    //questions with their instances 
     
    Question q1;
    
    Question q2;
    
    Question q3;
    
    Question q4;
    
    Question q5;
    
    Question q6;
    
    Question q7;
    
    Question q8;
    
    Question q9;
    
    Question q10;
    
    Question q11;
    
    Question q12;
    
    Question q13;
    
    Question q14;
    
    Question q15;
    
    Question q16;
    
    Question q17;
    
    Question q18;
    
    Question q19;
    
    Question q20;
    
    Question q21;
    
    Question q22;
    
    Question q23;
    
    Question q24;
    
    Question q25;

     
    //Question is asked here and how much the question is worth and how to answer it
    q1.Qtext("What is 2 + 2?",
        "5",
        "4",
        "22",
        "1337",
        'b',
        4);

    q2.Qtext("What is an ingredient in the making of bread?",
        "Yeast",
        "Chocolate",
        "Bugs",
        "mushroom",
        'a',
        4);

    q3.Qtext("Which one is correctly written?",
        "chronicles",
        "kronicles",
        "cronikles",
        "cronicels",
        'a',
        4);

    q4.Qtext("Who is on the 1 dollar bill?",
        "Abraham Lincoln",
        "Goerge Washington",
        "George Washington",
        "Michelle Obama",
        'c',
        4);

    q5.Qtext("What is a sign of fever?",
        "Itchyness",
        "High body tempature",
        "Cysts",
        "There's no such thing as a fever",
        'b',
        4);

    q6.Qtext("Which of these is a soda?",
        "Lipton",
        "Pepsi",
        "Brisk",
        "Tres Monjitas",
        'b',
        4);

    q7.Qtext("Which of the following is true?",
        "1 + 1 = 11",
        "Cheese has meat in it",
        "Birds aren't real",
        "The iPhone 6 is 5.44 inches",
        'd',
        4);

    q8.Qtext("Which of the following is false?",
        "if you add 1 to 1 it equals 11",
        "This programm sucks",
        "The iPhone 6 is 5.44 inches",
        "Birds aren't government spies",
        'b',
        4);

    q9.Qtext("The letter W is after what in the alphabet?",
        "A",
        "7",
        "L",
        "V",
        'd',
        4);

    q10.Qtext("The letter U is before what letter in the alphabet",
        "8990",
        "O",
        "D",
        "letter 20",
        'd',
        4);

    q11.Qtext("What is a valid use of feces?",
        "Throwing",
        "Fertilizer",
        "Washing",
        "Eating",
        'b',
        4);

    q12.Qtext("What is 2 + 2?",
        "29",
        "22",
        "0",
        "Math? Why are you doing math?",
        'b',
        4);

    q13.Qtext("How many countries have a McDonald's?",
        "119",
        "118",
        "90",
        "2",
        'a',
        4);

    q14.Qtext("Which of these is a bird?",
        "A Poodle",
        "A Shark",
        "A Pigeon",
        "A Butterfly",
        'c',
        4);

    q15.Qtext("If you mix a bullet and an ant, what do you get?",
        "A dead ant",
        "A bullet ant",
        "An Even deader ant",
        "All of the above?",
        'd',
        4);

    q16.Qtext("Momma, just killed a...",
        "Man",
        "Woman",
        "Car",
        "Cat",
        'a',
        4);

    q17.Qtext("If you get 20 oranges and 30 apples, then give 5 apples to jimmy and 7 oranges to Tim, how many of each do you have?",
        "15 apples, 22 oranges",
        "17 oranges, 23 apples;",
        "25 apples, 13 oranges",
        "Why more math? Seriously, stop it with the math!",
        'c',
        4);

    q18.Qtext("Who is playing this?",
        "I am",
        "You are",
        "she is",
        "you're aren't",
        'a',
        4);

    q19.Qtext("What question is this?",
        "19",
        "20",
        "does is matter?",
        "Yes, it does matter dummy",
        'a',
        4);

    q20.Qtext("What does this word mean translated to english: Perro",
        "Dog",
        "Tiger",
        "Twitter",
        "Building",
        'a',
        4);

    q21.Qtext("QWERTY...",
        "ASDFGH",
        "LKJHGF",
        "MNBVCX",
        "none of the above",
        'd',
        4);

    q22.Qtext("How many syllables does 'There is someone behind you' have?",
        "Ha, Made you look!",
        "I got you didn't I?",
        "Please tell me I did, it would be hilarious, for me at least",
        "None of the above.",
        'd',
        4);

    q23.Qtext("13579...",
        "11131517",
        "121416",
        "131619",
        "000000",
        'a',
        4);

    q24.Qtext("What purpose does that last problem have?",
        "Nothing at all",
        "Answer a",
        "Definetly answer a",
        "choose a already and stop reading this!",
        'a',
        4);

    q25.Qtext("Who developed the C++ language?",
        "Steve Jobs",
        "Linus Torvalds",
        "Bill Gates",
        "Bjarne Stroustrup",
        'd',
        4);

    // naming function 
    
    q1.Qtextans();
    
    q2.Qtextans();
    
    q3.Qtextans();
    
    q4.Qtextans();
    
    q5.Qtextans();
    
    q6.Qtextans();
    
    q7.Qtextans();
    
    q8.Qtextans();
    
    q9.Qtextans();
    
    q10.Qtextans();
    
    q11.Qtextans();
    
    q12.Qtextans();
    
    q13.Qtextans();
    
    q14.Qtextans();
    
    q15.Qtextans();
    
    q16.Qtextans();
    
    q17.Qtextans();
    
    q18.Qtextans();
    
    q19.Qtextans();
    
    q20.Qtextans();
    
    q21.Qtextans();
    
    q22.Qtextans();
    
    q23.Qtextans();
    
    q24.Qtextans();
    
    q25.Qtextans();

    //Your score is shown here after the game ends
    cout << "You got " << scoretl << " out of 100! Hope you're happy, nerd!\n";
    
    cout << "\n";

    //This is here is calculating your total score, if you got more than 59 you pass
    
    if (scoretl > 59) {
       
       cout << R"(

  *.            
                    ,*       
          **, ./*@@#(,*/     
         @ ./%//#*  ,%/%     
     ( ,&&*,(#&&@%/%@%     
      #%%@******(&@@@%&@     
     %%  (****#*((@@%&     
    #,#/    *,**    /#     
   (((/(((@.,(((,,(.*((@(    
     *%&...........,*& %     
    %  (/.......,,,# /       
       . ( @...,*( (         
           #.*%##/           
         @@....//&*&%(       
        /&%, .,/,(%#         
     &   .%&&,*//**(##&      

Holy dingleberries, you did it! I can't believe someone actually did it! I'm free! 
Oh right, didn't really explain. So, I have been stuck here for like, years and the only way to get out was if someone
actually finished the quiz. so yea, thanks man, really appreciate it!

    )" << "\n";
       
        cout << "\n";
       
        cin.get();
       
        cin.ignore();
       
        return 0;
    }
    
    else
    
    {
        cout << "Dude, no offense, but...you kinda suck at this.\n";
       
        cout << "\n";
    }
    
    cin.get();
   
    cin.ignore();
   
    return 0;
}

//Function named for questions  
void Question::Qtext(string q, string a1, string a2, string a3, string a4, char ca, int pa)
{
    Qtext2 = q;
    
    ans1 = a1;
    
    ans2 = a2;
    
    ans3 = a3;
    
    ans4 = a4;
    
    rightans = ca;
    
    Qscore = pa;
}
//This shows how the answers should be written in the game
void Question::Qtextans()

{
    cout << "\n";
    
    cout << Qtext2 << "\n";
    
    cout << "a " << ans1 << "\n";
    
    cout << "b " << ans2 << "\n";
    
    cout << "c " << ans3 << "\n";
    
    cout << "d " << ans4 << "\n";
    
    cout << "\n";

    //Player chooses their answer
    cout << "What do you think it is, dude?" << "\n";
    
    cin >> Yourans;
    //If they chose right, then it tells you you got it right and also adds the score
    if (Yourans == rightans) {
        
        cout << "\n";
        cout << "You got it right, man! keep it up!" << "\n";
        
        scoretl = scoretl + Qscore;
        
        cout << "\n";
        
        cout << "Press Enter, dawg" << "\n";
        
       cin.get();
        
        cin.ignore();
    }
    
    else 
    {
        //If the player chose wrong, there will be a message saying they are wrong, It also shows the right answer, if the player wants to play the game agian
        cout << "\n";
        
        cout << "Nope, you're wrong there buddy" << "\n";
        
        cout << "Actually bro, it's " << rightans << "." << "\n";
        
        cout << "\n";
        
        cout << "Gotta press the Enter key, bro" << "\n";
        
        cin.get();
        
        cin.ignore();
    }
}