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
    patient(int id, const string& nome, int idade, const string& queixa);         // Item(const Item& copyItem); // construtor de copia
    ~patient();

    int getId() const;
    void setId();

    string getNome()const;
    void setNome();

    int getIdade() const;
    void setIdade();

    string getQueixa() const;
    void setQueixa();

    int getPrioridade()const;
    void setPrioridade();

    int getChegada ()const;
    void setChegada();


};

#endif
