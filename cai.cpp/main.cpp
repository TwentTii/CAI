/******************************************************************************

Level One::
Write a program that will help an elementary-school student learn multiplication.  
Use the rand function to produce two positive one-digit integers.  
The program should then prompt the user with a question, such as:  How much is 6 times 7?
The student inputs the answer. Next, the program checks the student's answer.  
If it's correct display the message "Very good!" If it's incorrect display the message "No. Please try again." 
and let the student try the same question repeatedly until the student finally gets it correct.
A separate function should be used to generate each new question.  
This function should be called once when the application begins execution and each time the user answers the question correctly.

*******************************************************************************/

#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;

int amountOfQuestions {10}; // amount of questions
float answer; // floating - point answer

// multiplcation
int mult(int level) 
{
  int score{0};
   for (size_t i = 0; i < amountOfQuestions; i++)
   {
      // user's score
      score == 0;
      // time seed
      srand(time(NULL));
      //setting value 1
      int num1{rand() % level + 1};
      //settting value 2
      int num2{rand() % level + 1};
      // random response variable
      int response{rand() % 4 + 1};
      // solution variable
      int solution = num1 + num2;

      cout << "what is " << num1 << "+" << num2 << "\n" << num1 << " + " << num2 << " = ";
      cin >> answer;
      cout << '\n';

      if (answer == num1 * num2)
      {
         score++;
         switch (response)
         {
         case 1:
         cout << "Very good!" << endl;
            break;

         case 2:
         cout << "Excellent!" << endl;
            break;

         case 3:
         cout << "Nice work!" << endl;
            break;

         case 4:
         cout << "Keep up the good work!" << endl;
            break;

         default:
         cout << "Error. Please restart the program.\n";
            break;
         }
         cout << "score: "<< score << '\n' << endl;
      }

      else
    {
         switch (response)
         {
         case 1:
         cout << "No. Please try again." << endl;
            break;

         case 2:
         cout << "Wrong. Try once more." << endl;
            break;

         case 3:
         cout << "Don't give up!" << endl;
            break;

         case 4:
         cout << "No. Keep trying." << endl;
            break;

         default:
         cout << "Error. Please restart the program.\n";
            break;
         }
         cout << "score: "<< score << '\n'<< endl;
      }
   }
   return score;
}

// subtraction
int sub(int level) {
   int score{0};

   for (size_t i = 0; i < amountOfQuestions; i++)
   {
      // user's score
      score == 0;
      // time seed
      srand(time(NULL));
      //setting value 1
      int num1{rand() % level + 1};
      //settting value 2
      int num2{rand() % level + 1};
      // random response variable
      int response{rand() % 4 + 1};
      // solution variable
      int solution = num1 - num2;

      cout << "what is " << num1 << "-" << num2 << "\n answer: ";
      cin >> answer;
      cout << '\n';

      if (answer == num1 - num2) {
         score++;
         switch (response)
         {
         case 1:
         cout << "Very good!" << endl;
            break;

         case 2:
         cout << "Excellent!" << endl;
            break;

         case 3:
         cout << "Nice work!" << endl;
            break;

         case 4:
         cout << "Keep up the good work!" << endl;
            break;

         default:
         cout << "Error. Please restart the program.\n";
            break;
         }
         cout << "score: "<< score << '\n' << endl;
      }

      else {
         switch (response)
         {
         case 1:
         cout << "No. Please try again." << endl;
            break;

         case 2:
         cout << "Wrong. Try once more." << endl;
            break;

         case 3:
         cout << "Don't give up!" << endl;
            break;

         case 4:
         cout << "No. Keep trying." << endl;
            break;

         default:
         cout << "Error. Please restart the program.\n";
            break;
         }
         cout << "score: "<< score << '\n'<< endl;
      }
   }
   return score;
}
// addition
int add(int level) {
   int score{0};

for (size_t i = 0; i < amountOfQuestions; i++)
{
   // user's score
   score == 0;
   // time seed
   srand(time(NULL));
   // setting value 1
   int num1{rand() % level + 1};
   // settting value 2
   int num2{rand() % level + 1};
   // random response variable
   int response{rand() % 4 + 1};
   // solution variable
   int solution = num1 + num2;

   cout << "what is " << num1 << "+" << num2 << "\n answer: ";
   cin >> answer;
   cout << '\n';

   if (answer == num1 + num2) {
      score++;
      switch (response)
      {
      case 1:
      cout << "Very good!" << endl;
         break;

      case 2:
      cout << "Excellent!" << endl;
         break;

      case 3:
      cout << "Nice work!" << endl;
         break;

      case 4:
      cout << "Keep up the good work!" << endl;
         break;

      default:
         cout << "Error. Please restart the program.\n";
         break;
      }
      cout << "score: "<< score << '\n' << endl;
   }

   else {
      switch (response)
      {
      case 1:
      cout << "No. Please try again." << endl;
         break;

      case 2:
      cout << "Put your back into it!" << endl;
         break;

      case 3:
      cout << "Don't give up!" << endl;
         break;

      case 4:
      cout << "Sorry. Try again." << endl;
         break;

      default:
         cout << "Error. Please restart the program.\n";
         break;
      }
      cout << "You scored : "<< score << "\n"<< endl;
   }
}
return score;
}
// division
int div(int level) {
   int score{0};

for (size_t i = 0; i < amountOfQuestions; i++)
{
   // user's score
   score == 0;
   // time seed
   srand(time(NULL));
   // setting value 1
   int num1{rand() % level + 1};
   // settting value 2
   int num2{rand() % level + 1};
   // random response variable
   int response{rand() % 4 + 1};
   // solution variable
   int solution = num1 + num2;

   cout << "what is " << num1 << "+" << num2 << "\n" << num1 << " + " << num2 << " = ";
   cin >> answer;
   cout << '\n';

   if (answer == num1 + num2) {
      score++;
      switch (response)
      {
      case 1:
      cout << "Very good!" << endl;
         break;

      case 2:
      cout << "Excellent!" << endl;
         break;

      case 3:
      cout << "Nice work!" << endl;
         break;

      case 4:
      cout << "Keep up the good work!" << endl;
         break;

      default:
         cout << "Error. Please restart the program.\n";
         break;
      }
      cout << "You scored : "<< score << "\n" << endl;
   }

   else {
      switch (response)
      {
      case 1:
      cout << "No. Please try again." << endl;
         break;

      case 2:
      cout << "Wrong. Try once more." << endl;
         break;

      case 3:
      cout << "Don't give up!" << endl;
         break;

      case 4:
      cout << "No. Keep trying." << endl;
         break;

      default:
         cout << "Error. Please restart the program.\n";
         break;
      }
      cout << "You scored :  "<< score << "%\n"<< endl;
   }
}
return score;
}

// random
int rand(int level) {
   // user's score
   int score {0};
   // time seed
   srand(time(NULL));
   // setting value 1
   int num1{rand() % level + 1};
   // settting value 2
   int num2{rand() % level + 1};
   // random response variable
   int response{rand() % 4 + 1};
   // solution variable
   int solution = num1 / num2;


   switch (rand() % 4 + 1) {
      case 1:
         cout << "what is " << num1 << "/" << num2 << "\n answer: ";
         cin >> answer;
         cout << '\n';
         if (answer == num1 / num2) {
            score++;
            switch (response)
            {
            case 1:
            cout << "Very good!" << endl;
               break;

            case 2:
            cout << "Excellent!" << endl;
               break;

            case 3:
            cout << "Nice work!" << endl;
               break;

            case 4:
            cout << "Keep up the good work!" << endl;
               break;

            default:
            cout << "Error. Please restart the program.\n";
               break;
            }
            cout << "score: "<< score << '\n' << endl;
         }
         else {
            switch (response)
            {
            case 1:
            cout << "No. Please try again." << endl;
               break;

            case 2:
            cout << "Wrong. Try once more." << endl;
               break;

            case 3:
            cout << "Don't give up!" << endl;
               break;

            case 4:
            cout << "No. Keep trying." << endl;
               break;

            default:
            cout << "Error. Please restart the program.\n";
               break;
            }
            cout << "score: "<< score << '\n'<< endl;
         }
         break;
      case 2:
         cout << "what is " << num1 << "*" << num2 << "\n answer: ";
         cin >> answer;
         cout << '\n';
         if (answer == num1 * num2) {
            score++;
            switch (response)
            {
            case 1:
            cout << "Very good!" << endl;
               break;

            case 2:
            cout << "Excellent!" << endl;
               break;

            case 3:
            cout << "Nice work!" << endl;
               break;

            case 4:
            cout << "Keep up the good work!" << endl;
               break;

            default:
            cout << "Error. Please restart the program.\n";
               break;
            }
            cout << "score: "<< score << '\n' << endl;
         }
         else {
            switch (response)
            {
            case 1:
            cout << "No. Please try again." << endl;
               break;

            case 2:
            cout << "Wrong. Try once more." << endl;
               break;

            case 3:
            cout << "Don't give up!" << endl;
               break;

            case 4:
            cout << "No. Keep trying." << endl;
               break;

            default:
            cout << "Error. Please restart the program.\n";
               break;
            }
            cout << "score: "<< score << '\n'<< endl;
         }
         break;
      case 3:
         cout << "what is " << num1 << "+" << num2 << "\n answer: ";
         cin >> answer;
         cout << '\n';
         if (answer == num1 + num2) {
            score++;
            switch (response)
            {
            case 1:
            cout << "Very good!" << endl;
               break;

            case 2:
            cout << "Excellent!" << endl;
               break;

            case 3:
            cout << "Nice work!" << endl;
               break;

            case 4:
            cout << "Keep up the good work!" << endl;
               break;

            default:
            cout << "Error. Please restart the program.\n";
               break;
            }
            cout << "score: "<< score << '\n' << endl;
         }
         else {
            switch (response)
            {
            case 1:
            cout << "No. Please try again." << endl;
               break;

            case 2:
            cout << "Wrong. Try once more." << endl;
               break;

            case 3:
            cout << "Don't give up!" << endl;
               break;

            case 4:
            cout << "No. Keep trying." << endl;
               break;

            default:
               cout << "An error has occured. Please restart the program \n";
               break;
            }
            cout << "score: "<< score << '\n'<< endl;
         }
         break;
      case 4:
         cout << "what is " << num1 << "-" << num2 << "\n answer: ";
         cin >> answer;
         cout << '\n';
         if (answer == num1 - num2) {
            score++;
            switch (response)
            {
            case 1:
            cout << "Very good!" << endl;
               break;

            case 2:
            cout << "Excellent!" << endl;
               break;

            case 3:
            cout << "Nice work!" << endl;
               break;

            case 4:
            cout << "Keep up the good work!" << endl;
               break;

            default:
               cout << "Error. Please restart the program \n";
               break;
            }
            cout << "score : "<< score << "\n" << endl;
         }
         else {
            switch (response)
            {
            case 1:
            cout << "No. Please try again." << endl;
               break;

            case 2:
            cout << "Wrong. Try once more." << endl;
               break;

            case 3:
            cout << "Don't give up!" << endl;
               break;

            case 4:
            cout << "No. Keep trying." << endl;
               break;

            default:
            cout << "Error. Please restart the program.\n";
               break;
            }
            cout << "score: "<< score << "\n"<< endl;
         }
         break;


return score;

// the main function

}

}

//main
int main(int argc, char const *argv[]){
   int level;
   int eq;
   cout << "please choose an equation type (1,2,3,4) : ";
   cin >> eq;

   switch (eq) {
      case 1:
         cout << "Choose a level 1 - 3 : ";
         cin >> level;
         switch (level) {
            case 1:
               if (add(10) >= 7.5) {
                  cout << "Congrats you passed!!";
               }
               else{
                  cout << "STUDY MORE!!";
               }
            break;
            case 2:
               if (add(100) >= 7.5) {
                  cout << "Congrats you passed!!";
               }
               else{
                  cout << "STUDY MORE!!";
               }
            break;
            case 3:
               if (add(1000) >= 7.5) {
                  cout << "Congrats you passed!!";
               }
               else{
                  cout << "STUDY MORE!!";
               }
            break;
         }
         break;
      case 2:
         cout << "Please select a level(1,2,3): ";
         cin >> level;
         switch (level) {
            case 1:
               if (sub(10) >= 7.5) {
                  cout << "Congrats you passed!!";
               }
               else{
                  cout << "STUDY MORE!!";
               }
            break;
            case 2:
               if (sub(100) >= 7.5) {
                  cout << "Congrats you passed!!";
               }
               else{
                  cout << "STUDY MORE!!";
               }
            break;
            case 3:
               if (sub(1000) >= 7.5) {
                  cout << "Congrats you passed!!";
               }
               else{
                  cout << "STUDY MORE!!";
               }
            break;
         }
         break;
      case 3:
         cout << "Please select a level(1,2,3): ";
         cin >> level;
         switch (level) {
            case 1:
               if (mult(10) >= 7.5) {
                  cout << "Congrats you passed!!";
               }
               else{
                  cout << "STUDY MORE!!";
               }
            break;
            case 2:
               if (mult(100) >= 7.5) {
                  cout << "Congrats you passed!!";
               }
               else{
                  cout << "STUDY MORE!!";
               }
            break;
            case 3:
               if (mult(1000) >= 7.5) {
                  cout << "Congrats you passed!!";
               }
               else{
                  cout << "STUDY MORE!!";
               }
            break;
         }
         break;
      case 4:
         cout << "Please select a level(1,2,3): ";
         cin >> level;
         switch (level) {
            case 1:
               if (div(10) >= 7.5) {
                  cout << "Congrats you passed!!";
               }
               else{
                  cout << "STUDY MORE!!";
               }
            break;
            case 2:
               if (div(100) >= 7.5) {
                  cout << "Congrats you passed!!";
               }
               else{
                  cout << "STUDY MORE!!";
               }
            break;
            case 3:
               if (div(1000) >= 7.5) {
                  cout << "Congrats you passed!!";
               }
               else{
                  cout << "STUDY MORE!!";
               }
            break;
         }
         break;
      case 5:
      cout << "Please select a level(1,2,3): ";
      cin >> level;
      switch (level) {
         case 1:
            if (rand(10) >= 7.5) {
               cout << "Congrats you passed!!";
            }
            else{
               cout << "STUDY MORE!!";
            }
         break;
         case 2:
            if (rand(100) >= 7.5) {
               cout << "Congrats you passed!!";
            }
            else{
               cout << "STUDY MORE!!";
            }
         break;
         case 3:
            if (rand (1000) >= 7.5) {
               cout << "Congrats you passed!!";
            }
            else{
               cout << "STUDY MORE!!";
            }
      }
   }
   return 0;
}

