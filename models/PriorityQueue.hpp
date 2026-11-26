#ifndef _PriorityQueue_HPP_
#define _PriorityQueue_HPP_
 
#include <list>
#include "patient.hpp"

//fila de prioridade (heap de pacientes)

class PriorityQueue
{
    private:
        patient* pacientesPriority; //vtor de pacientes
        int size;
        int length;
    
    public:
        PriorityQueue();
        ~PriorityQueue();

        bool RegisterArrival();
        patient consultNext();
        bool ReclassifyPatient();
        bool RegisterWithdrawal();
        list<PriorityQueue> ListWaitingQueue();
 
        void setSize(int newSize);
        int getSize();
        void setLength(int newLength);
        int getLength();
 
        void heapify();
        void heapifyUp();
        void heapifyDown();
        void priorityUpdate();
};

#endif