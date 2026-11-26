#ifndef _QueuePatientCareHistory_HPP_
#define _QueuePatientCareHistory_HPP_
 
#include "patient.hpp"
#include "NoQueuePatientCareHistory.hpp"

class QueuePatientCareHistory
{
 
private:
    NoQueuePatientCareHistory* head;
    NoQueuePatientCareHistory* tail;
    int n_elements;
 
public:
    QueuePatientCareHistory();
    ~QueuePatientCareHistory();
 
    void enqueue(patient paciente);
    void dequeue();
    bool isEmpty();
    patient getPeek();
    void showQueuePatientCareHistory();
};
 
#endif
