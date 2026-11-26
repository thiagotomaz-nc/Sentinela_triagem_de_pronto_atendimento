#ifndef _Shifts_HPP_
#define _Shifts_HPP_

#include <string>
#include "MedicalCare.hpp"

class Shifts {
    private:
        //Date shiftDate;
        int StartTimeOfShift;
        int EndTimeOfShift;
        int shiftReport;
        MedicalCare HospitalCare;
    public:
        void avancarRelogio(int minutos);

        //Date getDataPlantao();

        int getHoraInicioPlantao();
        void setHoraInicioPlantao(int novaHoraInicio);

        int getHoraFimPlantao();
        void setHorafimPlanato(int novaHoraFim);

        void gerarRelatorio();
        void iniciarPlantao();
        void fecharPlantao();

        bool getInicioPlantao();  
};

#endif