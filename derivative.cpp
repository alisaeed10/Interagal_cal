#include "derivative.h"

derivCal::derivCal()
{
    equation = "No equation inputted";
    var = '0';
};

derivCal::derivCal(string equation, char var)
{
    this->equation = equation;
    this->var = var;
};

vector<char> derivCal::parseString(string equation)
{
    vector<char> result;
    for(int i = 0; i < equation.length(); i++)
    {
        result.push_back(equation[i]);
    }

    return result;
};

string derivCal::getString()
{
    return equation;
};

vector<char> derivCal::getVector()
{
    return eq;
};

char derivCal::getVar()
{
    return var;
}