#ifndef _patient_HPP_
#define _patient_HPP_

using namespace std;

#include <string>
#include "../enuns/enumStageOfPatientCare.h"

// uma classe que representa um nó de produtos;
// representa um nó de uma lista encadeada de produto
class Patient
{

private:
    int id; // Ponteiro para o produto cadastrado e exibido no menu
    string name;
    int age;
    string complaint;
    int priority;
    int arrival;
    StageOfPatientCare stagePatient;

public:
    Patient();                                                                                                   // construtor vazio;
    Patient(const string &name, int age, const string &complaint, int priority, int arrival, StageOfPatientCare statusPatient); // Item(const Item& copyItem); // construtor parametrizado

    int getId() const;
    void setId(int newId);

    string getName() const;
    void setName(string newName);

    int getAge() const;
    void setAge(int newAge);

    string getComplaint() const;
    void setComplaint(int newComplaint);

    int getPriority() const;
    void setPriority(int newPriority);

    int getArrival() const;
    void setArrival(int newArrival);

    StageOfPatientCare getStatusPatient();
    void setStatusPatient(StageOfPatientCare newStatusPatient);

    ~Patient();
};

#endif
