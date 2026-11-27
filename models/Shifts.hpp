#ifndef _SHIFTS_HPP_
#define _SHIFTS_HPP_

#include <string>
using namespace std;
#include <iostream>
#include <ctime>

#include "MedicalCare.hpp"

class Shift
{
private:
    time_t shiftDate;
    string shiftName;
    int shiftClock;
    int shiftStartTime;
    int shiftEndTime;
    bool shiftStatus;
    int shiftReport;
    MedicalCare HospitalCare;
public:
    Shift();
    Shift(int shiftStartTime, int shiftEndTime);

    void AdvanceClock(int minutes);
    int getShiftClock();

    string getShiftDateBR();

    int getShiftStartTime();
    void setShiftStartTime(int novaHoraInicio);

    int getShiftEndTime();
    void setShiftEndTime(int novaHoraFim);

    void generateReport();
    void shiftToStart();
    void shiftClose();

    bool getShiftStatus();
    void shiftShowResume();
};

#endif
