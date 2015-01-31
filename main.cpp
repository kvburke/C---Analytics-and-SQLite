#include "Engine.h" /*Reference header and namespace*/

using namespace std;

int main() /*Main function*/

{
    Engine engine;
    engine.createtable(); /*creates table in database */
    engine.displaymoneyvstime(); /*displaymoneyvstime - displays table*/
    engine.inputmoneyvstime(5,10); /*inputmoneyvstime - inputs record into table */
    engine.meanmoney(3,6);  /*meanmoney - calculates average over a specific day range*/

}
                            /*example: engine.inputmoneyvstime(5,10) Inputs record Day-5 Money-10*/
                            /*example: engine.meanmoney(2,4) Calculates average over days 2 to 4*/
