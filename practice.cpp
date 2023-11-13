
#include<iostream>
#include<iomanip>
#include<sstream>
#include<vector>


template <typename T>
T calculatePercentage(T value, double totalIncome) {
    return (value / totalIncome) * 100;
}

// Recursive template function to calculate percentages for each argument
template <typename T, typename... Args>
std::vector<double> calculatePercentage(T& result, double totalIncome, Args&&... args) {

    result = 0.00;

    std::vector<double> individualPercentages;
    ((individualPercentages.push_back(calculatePercentage(std::forward<args>(args), totalIncome))), ...);
    
    for(double percentage : individualPercentages){
        result += percentage;
    }
    return individualPercentages;
}


bool isDouble(const std::string& input){
    std::istringstream iss(input);
    int value;
    return iss >> value && iss.eof(); 
}

double calculateIncome(double yourIncome, double theirIncome){
    double totalIncome = theirIncome + yourIncome;
    return totalIncome;
}

double calculateExpense(double housingExpense, double transportationExpense, double eatingOutExpense, double clothingExpense, double personalExpense, double groceriesExpense, double utilitiesExpense, double billsExpense){
    double totalExpense = housingExpense + transportationExpense + eatingOutExpense + clothingExpense + personalExpense + groceriesExpense + utilitiesExpense + billsExpense;
    return totalExpense;
}

double moneyRemaining(double totalIncome, double totalExpense){
    double amountRemaining = totalIncome - totalExpense;
    return amountRemaining;
}




int main(){

std::string theirIncomeStr;
std::string yourIncomeStr;
std::string housingExpenseStr;
std::string transportationExpenseStr;
std::string eatingOutExpenseStr;
std::string clothingExpenseStr;
std::string personalExpenseStr;
std::string groceriesExpenseStr;
std::string utilitiesExpenseStr;
std::string billsExpenseStr;

bool doSave;
bool doInvest;

double yourIncome;
double theirIncome;
double totalIncome;
double totalExpense;
double housingExpense;
double transportationExpense;
double eatingOutExpense;
double clothingExpense;
double personalExpense;
double groceriesExpense;
double utilitiesExpense;
double billsExpense;
double amountRemaining;
double saveAmount;
double investAmount;

double totalExpensePercent = 0.00;
double housingPercent;
double transportationPercent;
double eatingOutPercent;
double clothingPercent;
double personalPercent;
double groceriesPercent;
double utilitiesPercent;
double billsPercent;
double savePercent;
double investPercent;

double result = 0.00;



std::cout << std::setprecision(2) << std::fixed << std::endl;



    do{
    std::cout << "Please enter your income. " << std::endl;
    std::getline(std::cin, yourIncomeStr);
    

    if (isDouble(yourIncomeStr)){
        yourIncome = std::stod(yourIncomeStr);
        std::cout << "Your income is $" << yourIncome << ". " << std::endl;
         std::cout << std::endl;
        break;
    } 
    else {
        std::cout << "You have entered an invalid input, please try again by entering a dollar amount. " << std::endl;
    }
}while(true);

    do{
    std::cout << "Please enter their income. " << std::endl;
    std::getline(std::cin, theirIncomeStr);
    

    if (isDouble(theirIncomeStr)){
        theirIncome = std::stod(theirIncomeStr);
        std::cout << "Their income is $" << theirIncome << ". " << std::endl;
        std::cout << std::endl;
     
        break;
    } 
    else {
        std::cout << "You have entered an invalid input, please try again by entering a dollar amount. " << std::endl;
    }
}while(true);

    totalIncome = calculateIncome(yourIncome, theirIncome);

    do{
    std::cout << "What is your housing expense? " << std::endl;
    std::getline(std::cin, housingExpenseStr);

    if(isDouble(housingExpenseStr)){
        housingExpense = std::stod(housingExpenseStr);
        std::cout << "Your housing expense is $" << housingExpense << ". " << std::endl;
        std::cout << std::endl;
        break;
    }
    else {
        std::cout << "Invalid input, please try again. " << std::endl;
    }    
}while(true);

    do{
    std::cout << "What is your transportation expense? " << std::endl;
    std::getline(std::cin, transportationExpenseStr);

    if(isDouble(transportationExpenseStr)){
        transportationExpense = std::stod(transportationExpenseStr);
        std::cout << "Your transportation expense is $" << transportationExpense << ". " << std::endl;
        std::cout << std::endl;
        break;
    }
    else {
        std::cout << "Invalid input, please try again. " << std::endl;
    }    
}while(true);

do{
    std::cout << "What is your eating out expense? " << std::endl;
    std::getline(std::cin, eatingOutExpenseStr);

    if(isDouble(eatingOutExpenseStr)){
        eatingOutExpense = std::stod(eatingOutExpenseStr);
        std::cout << "Your eating out expense is $" << eatingOutExpense << ". " << std::endl;
        std::cout << std::endl;
        break;
    }
    else {
        std::cout << "Invalid input, please try again. " << std::endl;
    }    
}while(true);

do{
    std::cout << "What is your clothing expense? " << std::endl;
    std::getline(std::cin, clothingExpenseStr);

    if(isDouble(clothingExpenseStr)){
        clothingExpense = std::stod(clothingExpenseStr);
        std::cout << "Your clothing expense is $" << clothingExpense << ". " << std::endl;
        std::cout << std::endl;
        break;
    }
    else {
        std::cout << "Invalid input, please try again. " << std::endl;
    }    
}while(true);

do{
    std::cout << "What is your personal expense? " << std::endl;
    std::getline(std::cin, personalExpenseStr);

    if(isDouble(personalExpenseStr)){
        personalExpense = std::stod(personalExpenseStr);
        std::cout << "Your personal expense is $" << personalExpense << ". " << std::endl;
        std::cout << std::endl;
        break;
    }
    else {
        std::cout << "Invalid input, please try again. " << std::endl;
    }    
}while(true);

do{
    std::cout << "What is your groceries expense? " << std::endl;
    std::getline(std::cin, groceriesExpenseStr);

    if(isDouble(groceriesExpenseStr)){
        groceriesExpense = std::stod(groceriesExpenseStr);
        std::cout << "Your groceries expense is $" << groceriesExpense << ". " << std::endl;
        std::cout << std::endl;
        break;
    }
    else {
        std::cout << "Invalid input, please try again. " << std::endl;
    }    
}while(true);

do{
    std::cout << "What is your utilities expense? " << std::endl;
    std::getline(std::cin, utilitiesExpenseStr);

    if(isDouble(utilitiesExpenseStr)){
        utilitiesExpense = std::stod(utilitiesExpenseStr);
        std::cout << "Your utilities expense is $" << utilitiesExpense << ". " << std::endl;
        std::cout << std::endl;
        break;
    }
    else {
        std::cout << "Invalid input, please try again. " << std::endl;
    }    
}while(true);

do{
    std::cout << "What is your bills expense? " << std::endl;
    std::getline(std::cin, billsExpenseStr);

    if(isDouble(billsExpenseStr)){
        billsExpense = std::stod(billsExpenseStr);
        std::cout << "Your bills expense is $" << billsExpense << ". " << std::endl;
        std::cout << std::endl;
        break;
    }
    else {
        std::cout << "Invalid input, please try again. " << std::endl;
    }    
}while(true);

totalExpense = calculateExpense(housingExpense, transportationExpense, eatingOutExpense, clothingExpense, personalExpense, groceriesExpense, utilitiesExpense, billsExpense);
amountRemaining = moneyRemaining(totalIncome, totalExpense);

totalExpensePercent= 0.00;
 
std::vector<double> individualPercentages = calculatePercentage(totalExpensePercent, totalExpense, housingExpense, transportationExpense, eatingOutExpense, clothingExpense, personalExpense, groceriesExpense, utilitiesExpense, billsExpense);

std::cout << "Total expense: $" << totalExpense << std::endl;
std::cout << "Money remaining: $" << amountRemaining << std::endl;

for (size_t i = 0; i < individualPercentages.size(); ++i) {
        std::cout << "Expense " << i + 1 << " percentage: " << individualPercentages[i] << "%" << std::endl;
    }

    return 0;
}

