#include "../models/Patient.hpp"

// implementação da classe patient
// construtor vazio{}
Patient::Patient() {}

// Item(const Item& copyItem){} // construtor parametrizado
Patient::Patient(const string &name, int age, const string &complaint, int priority, int arrival, StageOfPatientCare statusPatient)
{
    this->id = -1;
    this->name = name;
    this->age = age;
    this->complaint = complaint;
    this->arrival = arrival;
    this->stagePatient = statusPatient;
}

int Patient::getId() const
{
    return this->id;
}

void Patient::setId(int newId)
{
    this->id = newId;
}

string Patient::getName() const {
    return this->name;
}
void Patient::setName(string newName)
{
    this->name = newName;
}

int Patient::getAge() const {
    return this->age;
}
void Patient::setAge(int newAge) {
    this->age=newAge;
}

string Patient::getComplaint() const {
    return this->complaint;
}
void Patient::setComplaint(int newComplaint) {
    this->complaint = newComplaint;
}

int Patient::getPriority() const {
    return this->priority;
}
void Patient::setPriority(int newPriority) {
    this->priority = newPriority;
}

int Patient::getArrival() const {
    return this->arrival;
}
void Patient::setArrival(int newArrival) {
    this->arrival = newArrival;
}

StageOfPatientCare Patient::getStatusPatient()
{
    return this->stagePatient;
}

void Patient::setStatusPatient(StageOfPatientCare newStagePatient)
{
    this->stagePatient = newStagePatient;
}

Patient::~Patient() {}
