#include "../models/Shifts.hpp"

// implementação da classe Shifts

Shift::Shift()
{
    this->shiftDate = time(0);
    this->shiftStartTime = 0;
    this->shiftEndTime = 360;
}

Shift::Shift(int shiftStartTime, int shiftEndTime)
{
    this->shiftDate = time(0);
    this->shiftStartTime = shiftStartTime;
    this->shiftEndTime = shiftEndTime;
    this->shiftStatus = true;
}

void Shift::AdvanceClock(int minutes)
{
    this->shiftClock += minutes;
}

int Shift::getShiftClock()
{
    return this->shiftClock;
}

string Shift::getShiftDateBR()
{
    tm* dataAtual = localtime(&this->shiftDate);
    int dia = dataAtual->tm_mday;
    int mes = 1 + dataAtual->tm_mon;     // tm_mon vai de 0 a 11, por isso soma 1
    int ano = 1900 + dataAtual->tm_year; // tm_year conta anos desde 1900

    return "Data: "+ to_string(dia) + "-" + to_string(mes) +"-"+to_string(ano);
}


int Shift::getShiftStartTime()
{
    return this->shiftStartTime;
}

void Shift::setShiftStartTime(int newShiftStartTime)
{
    this->shiftStartTime = newShiftStartTime;
}

int Shift::getShiftEndTime()
{
    return this->shiftEndTime;
}

void Shift::setShiftEndTime(int newShiftEndTime)
{
    this->shiftEndTime=newShiftEndTime;
}

void Shift::generateReport()
{
    // TODO implementar posteriormente
}

void Shift::shiftToStart()
{
    this->shiftStatus = true;
}

void Shift::shiftClose()
{
    this->shiftStatus = false;
}

bool Shift::getShiftStatus() {
    return this->shiftStatus;
}

void Shift::shiftShowResume() {}
