#ifndef _Hospital_HPP_
#define _Hospital_HPP_

#include <string>
#include <list>
#include "Shifts.hpp"

class Hospital
{
 
    private:
        list<Shifts> listShifts;
        string nameHospital;

    public: 
        Hospital(); 
        Hospital(const string& nomeHospital); 
        ~Hospital();
};

#endif