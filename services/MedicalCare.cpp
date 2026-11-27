#include "../models/MedicalCare.hpp"

// implementação da classe MedicalCare
MedicalCare::MedicalCare()
{
    // inicialmente vazio, Mas pode vim uma referencia da fila de prioridade, e do historico do paciente
    // pois é essa classe que vai remover o proximo da fila de prioridade
    // e que vai gerar o historico de atendimento do cliente
}

void MedicalCare::callTheNextPatient()
{
    // verificar se na fila de prioridde existe paciente, qual o paciente, pega a referencia;
    // adicionar na lista de ponteiros dos pacientes
    // adicionar no historico dos pacientes
}

bool MedicalCare::concludeHospitalEncounter(string medicalReport)
{
    // atribuir ao paciente tal, os medicamentos
}

MedicalCare::~MedicalCare()
{
    if (this->listOfPatientsEncounters.size() > 0)
    {
        this->listOfPatientsEncounters.clear();
    }
}
