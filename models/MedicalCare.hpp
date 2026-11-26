#ifndef _MEDICAL_CARE_
#define _MEDICAL_CARE_

#include <string>
#include <list>
#include "patient.hpp"

class MedicalCare{
    private:
        list<patient*>listaDeAtendimento;

    public:
        MedicalCare();
        ~MedicalCare();

        patient chamarProximoPaciente();
        bool concluirAtendimento(const string& prontuario);
};


#endif