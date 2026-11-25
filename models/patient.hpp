#ifndef _patient_HPP_
#define _patient_HPP_

using namespace std;

#include <string>

// uma classe que representa um nó de produtos;
// representa um nó de uma lista encadeada de produto
class patient
{

private:
    int id; // Ponteiro para o produto cadastrado e exibido no menu
    string nome;
    int idade;
    string queixa;
    int prioridade;
    int chegada;

public:
    patient(); // construtor vazio;
                // Item(const Item& copyItem); // construtor de copia
};

#endif
