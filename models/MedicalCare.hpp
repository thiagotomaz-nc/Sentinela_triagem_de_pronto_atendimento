#ifndef _MEDICAL_CARE_
#define _MEDICAL_CARE_

#include <string>
#include <list>
#include "patient.hpp"
#include <iostream>

using namespace std;

class MedicalCare
{
private:
    list<Patient *> listOfPatientsEncounters;

public:
    MedicalCare();

    void callTheNextPatient();
    bool concludeHospitalEncounter(string medicalReport);

    ~MedicalCare();
};

#endif
