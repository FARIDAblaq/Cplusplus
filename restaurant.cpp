
 /**
 * @author: Farida Eleshin
 * @version:1.0.1
 * @param: int amount, int number
 */
 #include <iostream>

 using namespace std;

 /**Things restaurant can do**/

//order function that tells you where to order
 void order(){
     cout<<"You can place your order here! \n";
 }

//ready function tells you that your food is ready
 void ready(){
     cout<<"Your food is ready!\n";
 }

//tells you the price of your food
 int fdprice (int amount){
     float VAT = 12.5;
     return amount * VAT;
 }

//tells you the number of takeaways you have
 int takeaways(int number){
     return number;
 }
