#ifndef _NoQueuePatientCareHistory_HPP_
#define _NoQueuePatientCareHistory_HPP_

#include "patient.hpp"

// Nó da fila histórico de pacientes atendidos
struct NoQueuePatientCareHistory
{
    Patient Patient;
    NoQueuePatientCareHistory *nextHistoryPatient;
};

#endif
