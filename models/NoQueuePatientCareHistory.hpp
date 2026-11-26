#ifndef _NoQueuePatientCareHistory_HPP_
#define _NoQueuePatientCareHistory_HPP_

#include "patient.hpp"

// Nó da fila histórico de pacientes atendidos
struct NoQueuePatientCareHistory
{
    patient Patient;
    NoQueuePatientCareHistory* nextHistoryPatient;
};

#endif