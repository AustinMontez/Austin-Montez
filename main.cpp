// Unit5 Assignment, Austin Montez, Dr.t
// 11-12-2019
#include <iostream>
#include <cmath>
#include <string>
#include "Input_Validation_Extended.h"
using namespace std;


class Cost // Cost c in int main()
{
  protected: // cost per credit hour, book cost per month, room and board per month, food cost per month, travel cost per month.
    
    double creditHour; 
    double bookCost; 
    double roomAndBoard;
    double foodCost;
    double travelCost;
    string schoolName;

  public:
    Cost(double ch, double bc, double rb, double fc, double tc, string sn) : creditHour(ch), bookCost(bc), roomAndBoard(rb) , foodCost(fc), travelCost(tc), schoolName(sn) { } 
    /*==================================================================================*/// Sets and gets for all the variables in Cost 
    void setCreditHour(double ch) {creditHour = ch;} // All of the variables on the left
    double getCreditHour()const {return creditHour;}

    void setBookCost(double bc) {bookCost = bc;}
    double getBookCost()const {return bookCost;}

    void setRoomAndBoard(double rb) {roomAndBoard = rb;}
    double getRoomAndBoard()const {return roomAndBoard;}

    void setFoodCost(double fc) {foodCost = fc;}
    double getFoodCost()const {return foodCost;}

    void setTravelCost(double tc) {travelCost = tc;}
    double getTravelCost()const {return travelCost;}

    void setSchoolName(string sn) {schoolName = sn;}
    string getSchoolName()const {return schoolName;}

    
};

/*======================================================*/

class FullTime : public Cost
{
  private: // For full time semester
    double tuition, room, travel, food, books, total;
    static const int hours = 12;
    static const int monthsInSemester = 4;
    static const int hoursPerClass = 3;

  public: 
  FullTime(double ch,double bc, double rb, double tc, double fc, string sn) : Cost(ch,bc,rb,fc,tc,sn ){};
   
   double calculateTuition()
   {
     return (creditHour * hours);
   }
   double calculateRoomAndBoard()
   {
     return (roomAndBoard * monthsInSemester);
   }
   double calculateTravel()
   {
     return (travelCost * monthsInSemester);
   }
   double calculateFoodCost()
   {
     return (foodCost * monthsInSemester);
   }
   double calculateBookCost()
   {
     return ((hours / hoursPerClass) * bookCost);
   }
   double calculateTotal()
   {
     return (calculateTuition() + calculateRoomAndBoard() + calculateTravel() + calculateFoodCost() + calculateBookCost());
   }

    void showFullTime() // FULL TIME SEMESTER
    {
      cout << "\nCost Per Semester (Fall/Spring/Summer)\tFull Time:\n\n" << "School: " << getSchoolName() << "\nTuition: $" << calculateTuition()  << "\n" << "Room and Board: $" << calculateRoomAndBoard() << "\n" << "Travel: $" << calculateTravel() << "\n" << "Food: $" << calculateFoodCost() << "\n" << "Books: $" << calculateBookCost() << "\n" << "Total: $" << calculateTotal() << endl;
    }
    
    
};
/*======================================================*/

class PartTime : public Cost // PART TIME SEMESTER
{
  private: // For part time semester
    double tuition, room, travel, food, books, total;
    static const int hours = 9;
    static const int monthsInSemester = 4;
    static const int hoursPerClass = 3;
  public:
   PartTime(double ch, double bc, double rb, double fc, double tc, string sn) : Cost(ch,bc,rb,fc,tc,sn) {};

    double calculateTuition()
   {
     return (creditHour * hours);
   }
   double calculateRoomAndBoard()
   {
     return (roomAndBoard * monthsInSemester);
   }
   double calculateTravel()
   {
     return (travelCost * monthsInSemester);
   }
   double calculateFoodCost()
   {
     return (foodCost * monthsInSemester);
   }
   double calculateBookCost()
   {
     return ((hours / hoursPerClass) * bookCost);
   }
   double calculateTotal()
   {
     return (calculateTuition() + calculateRoomAndBoard() + calculateTravel() + calculateFoodCost() + calculateBookCost());
   }

    void showPartTime()
    {
      cout << "\nCost Per Semester (Fall/Spring/Summer)\tPart Time:\n\n" << "School: " << getSchoolName() << "\nTuition: $" << calculateTuition()  << "\n" << "Room and Board: $" << calculateRoomAndBoard() << "\n" << "Travel: $" << calculateTravel() << "\n" << "Food: $" << calculateFoodCost() << "\n" << "Books: $" << calculateBookCost() << "\n" << "Total: $" << calculateTotal() << endl;
    }
};

/*======================================================*/

class HalfTime : public Cost // HALF TIME SEMESTER
{
  private: // For half time semester
    double tuition, room, travel, food, books, total;
    static const int hours = 6;
    static const int monthsInSemester = 4;
    static const int hoursPerClass = 3;
  public: HalfTime(double ch, double bc, double rb, double fc, double tc, string sn): Cost(ch,bc,rb,fc,tc,sn) { }
  double calculateTuition()
   {
     return (creditHour * hours);
   }
   double calculateRoomAndBoard()
   {
     return (roomAndBoard * monthsInSemester);
   }
   double calculateTravel()
   {
     return (travelCost * monthsInSemester);
   }
   double calculateFoodCost()
   {
     return (foodCost * monthsInSemester);
   }
   double calculateBookCost()
   {
     return ((hours / hoursPerClass) * bookCost);
   }
   double calculateTotal()
   {
     return (calculateTuition() + calculateRoomAndBoard() + calculateTravel() + calculateFoodCost() + calculateBookCost());
   }

    void showHalfTime()
    {
      cout << "\nCost Per Semester (Fall/Spring/Summer)\tHalf Time:\n\n" << "School: " << getSchoolName() << "\nTuition: $" << calculateTuition()  << "\n" << "Room and Board: $" << calculateRoomAndBoard() << "\n" << "Travel: $" << calculateTravel() << "\n" << "Food: $" << calculateFoodCost() << "\n" << "Books: $" << calculateBookCost() << "\n" << "Total: $" << calculateTotal() << endl;
    }
};
class Question
{
  private:
    int timeToCompleteFTSEM, timeToCompletePTSEM, timeToCompleteHTSEM; // Time to complete per semester
    double tuitionFTSEM, tuitionPTSEM, tuitionHTSEM; // Tuition per semester 
    double timeToCompleteFTYears, timeToCompletePTYears, timeToCompleteHTYears; // Time to complete in years
    double tuitionFTYEARS, tuitionPTYEARS, tuitionHTYEARS; // Yearly tuition 
  public:
    Question(int ttcFTSEM, int ttcPTSEM, int ttcHTSEM, double tFTSEM, double tPTSEM, double tHTSEM, double ttcFTY, double ttcPTy, double ttcHTy, double tFTYEARS, double tPTYEARS, double tHTYEARS) : timeToCompleteFTSEM(ttcFTSEM), timeToCompletePTSEM(ttcPTSEM), timeToCompleteHTSEM(ttcHTSEM), tuitionFTSEM(tFTSEM), tuitionPTSEM(tPTSEM), tuitionHTSEM(tHTSEM), timeToCompleteFTYears(ttcFTY), timeToCompletePTYears(ttcPTy), timeToCompleteHTYears(ttcHTy), tuitionFTYEARS(tFTYEARS), tuitionPTYEARS(tPTYEARS), tuitionHTYEARS(tHTYEARS) {}
};

int main() 
{
  const int hoursPerClass = 3;
  const int monthsInSemester = 4;
  const int hoursDegree = 60;
  const int semesterAYear = 3;
 
  FullTime FT(64,100,400,200,120,"TCC");
 PartTime PT(64,100,400,200,120,"TCC");
  HalfTime HT(64,100,400,200,120,"TCC");

  double newCreditHour, newBookCost, newRoom, newFood, newTravel;
  string newSchoolName;

  FT.showFullTime();
  cout << "\n";
  PT.showPartTime();
  cout << "\n";
  HT.showHalfTime();

  cout << "\nWhat is the Cost per credit hour?" << endl;
  newCreditHour = validateDouble(newCreditHour);
  FT.setCreditHour(newCreditHour);
  PT.setCreditHour(newCreditHour);
  HT.setCreditHour(newCreditHour);

  cout << "What is the Book Cost per Class? " << endl;
  newBookCost = validateDouble(newBookCost);
  FT.setBookCost(newBookCost);
  PT.setCreditHour(newCreditHour);
  HT.setCreditHour(newCreditHour);

  cout << "What is the Room and Board Cost per Month? " << endl;
  newRoom = validateDouble(newRoom);
  FT.setRoomAndBoard(newRoom);
  PT.setRoomAndBoard(newRoom);
  HT.setRoomAndBoard(newRoom);

  cout << "What is the Food Cost per Month? " << endl;
  newFood = validateDouble(newFood);
  FT.setFoodCost(newFood);
  PT.setFoodCost(newFood);
  HT.setFoodCost(newFood);

  cout << "What is the Travel Cost Per Month? " << endl;
  newTravel = validateDouble(newTravel);
  FT.setTravelCost(newTravel);
  PT.setTravelCost(newTravel);
  HT.setTravelCost(newTravel);

  cout << "What is the name of the School? " << endl;
  newSchoolName = validateString(newSchoolName);
  FT.setSchoolName(newSchoolName);
  PT.setSchoolName(newSchoolName);
  HT.setSchoolName(newSchoolName);
  
FT.showFullTime();
PT.showPartTime();
HT.showHalfTime();

return 0;
}