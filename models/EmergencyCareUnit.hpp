#ifndef _HEALT_UNIT_HPP_
#define _HEALT_UNIT_HPP_

#include "Shifts.hpp"
#include <list>
#include <string>
#include <iostream>

using namespace std;

// unidade de saude
class EmergencyCareUnit
{

private:
    list<Shift> listShifts;
    string nameEmergencyCareUnit;

public:
    EmergencyCareUnit();
    EmergencyCareUnit(const string &nameEmergencyCareUnit); // Construtor parametrizado (recebe o nome)
    string getNameEmergencyCareUnit();
    int getCountListShifts();
    void AddListShifts(Shift shift);
    ~EmergencyCareUnit();
};

#endif
