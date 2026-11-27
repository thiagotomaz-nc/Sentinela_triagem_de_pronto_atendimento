#include "models/EmergencyCareUnit.hpp"
#include "models/Shifts.hpp"
#include "models/MedicalCare.hpp"
#include "models/patient.hpp"

#include <iostream>
#include <vector>

using namespace std;

// FUNCOES
void patientRegistrationMenu();

// configurações
void deleteTerminal();
void menuDividers();
void messagesSucess(string messsage);
void messagesErrorsWarning(string messsage);

int main()
{
    bool repeat = true;
    int response = 0;
    EmergencyCareUnit healthUnit;
    Shift shift;

    cout
        << endl;

    // criar um order, através dos produtos, podendo inclusive cadastrar novos produtos, editar, excluir (desativas), consultar
    do
    {
        cout << "\n Menu de triagem da " << healthUnit.getNameEmergencyCareUnit() << endl;
        cout << "**********************************************************" << endl;
        cout << "1 - Iniciar Plantao" << endl;
        cout << "2 - Finalizar Plantao" << endl;
        cout << "3 - Registrar Chegada" << endl;
        cout << "4 - Chamar proximo paciente" << endl;
        cout << "5 - Consultar proximo" << endl;
        cout << "6 - Historico" << endl;
        cout << "7 - Reclassificar paciente" << endl;
        cout << "8 - Registrar Desistencia" << endl;
        cout << "9 - Listar fila de espera" << endl;
        cout << "10 - Avançar relogio" << endl;
        cout << "11 - Desfazer ultima acao" << endl;
        cout << "12 - Relatorio do plantao" << endl;
        cout << "13 - Sair do sistema" << endl;
        cout << "----------------------------------------------" << endl;
        cout << "\nDigite a opcao desejada: ";
        cin >> response;

        deleteTerminal();

        switch (response)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        case 11:
            break;
        case 12:
            break;
        case 13:
            /* code */
            repeat = false;
            break;

        default:
            messagesErrorsWarning("Opcao invalida! Tente novamente.");
            continue;
        }
    } while (repeat);

    return 0;
}

// =======================================================
// MENU CADASTRAR patient
// =======================================================
// Menu de gerenciamento dos pedidos
void patientRegistrationMenu()
{

    int responseMenuOrder = 0;
    bool repeat = true;

    menuDividers();
    do
    {
        cout << "Menu - Cadastrar paciente" << endl;
        cout << "**********************************************************" << endl;
        cout << "1 - " << endl;
        cout << "2 - " << endl;
        cout << "3 - " << endl;
        cout << "4 - " << endl;
        cout << "5 - " << endl;
        cout << "6 - " << endl;
        cout << "7 - " << endl;
        cout << "8 - " << endl;
        cout << "---------------------------------------------------------" << endl;
        cout << "\nDigite a opcao desejada: ";
        cin >> responseMenuOrder;
        cout << "---------------------------------------------------------" << endl;

        deleteTerminal();

        switch (responseMenuOrder)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:

            break;
        case 6:
            menuDividers();
            break;
        case 7:
            break;
        case 8:
            repeat = false;
            break;
        default:
            messagesErrorsWarning("Opção invalida, tente novamente!");
            break;
        }
    } while (repeat);
}

// =======================================================
// CONFIGURÇÕES
// =======================================================
void menuDividers()
{
    cout << "------------------------------------------------------------------" << endl;
    cout << endl;
}

void deleteTerminal()
{
    system("cls");
}

void messagesSucess(string messsage)
{
    cout << "\n---------------------------------------------------------\n";
    cout << messsage << "\n";
    cout << "---------------------------------------------------------\n\n";
}

void messagesErrorsWarning(string messsage)
{
    cout << "\n<>-_-<><>-_-<><>-_-<><>-_-<><>-_-<><>-_-<><>-_-<><>-_-<><>-_-<><>-_-<>\n";
    cout << messsage << "\n";
    cout << "<>-_-<><>-_-<><>-_-<><>-_-<><>-_-<><>-_-<><>-_-<><>-_-<><>-_-<><>-_-<>\n\n";
}
