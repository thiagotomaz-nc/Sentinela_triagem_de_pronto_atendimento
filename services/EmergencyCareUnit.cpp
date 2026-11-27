#include "../models/EmergencyCareUnit.hpp"

// implementação da classe Hospital
EmergencyCareUnit::EmergencyCareUnit()
{
    this->nameEmergencyCareUnit = "UPA Sentila";
}

EmergencyCareUnit::EmergencyCareUnit(const string &nameEmergencyCareUnit)
{
    this->nameEmergencyCareUnit = nameEmergencyCareUnit;
}

string EmergencyCareUnit::getNameEmergencyCareUnit()
{
    return this->nameEmergencyCareUnit;
}

int EmergencyCareUnit::getCountListShifts()
{
    return this->listShifts.size();
}

void EmergencyCareUnit::AddListShifts(Shift shift)
{
    this->listShifts.push_back(shift);
}

EmergencyCareUnit::~EmergencyCareUnit()
{
    this->listShifts.clear();
    this->nameEmergencyCareUnit = "";
    cout << "Sistema UPA finalizado, dados removidos da memoria!\n\nAte mais!!\n[ remetente: destrutor da UPA ]\n\n" << endl;
}
