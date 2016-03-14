#include "Consultorio.h"
//#include "Visual.h"
#include <iostream>

using namespace std;

Consultorio::Consultorio(){
    Comunicador = new ComunicadorBD();
}

void Consultorio::RunApplication(){
    Running = true;

    while(Running == true){
        showMenu();
        cin >> input;
        handleInput(input);
    }
}

void Consultorio::handleInput(int input){
    string aux;
    switch(input){
        case(1):
            if(Comunicador->inserePacienteBD()==false){
                solicitacaoNaoConcluida();
            }
            solicitacaoConcluida();
            //P_aux.cadastrarPaciente();
            //manda paciente pro auxiliar comunicar com o bd
            //cout<<"Cadastro pacientes"<<endl;
            break;
        case(2):
            cout<<"Insira o nome do paciente a ser procurado"<<endl;
            cin>>aux;
            if(Comunicador->procuraBD(aux, "paciente")==true){
                cout<<"Paciente se encontra no sistema"<<endl;
            }
            else{
                cout<<"Informacao nao se encontra no sistema"<<endl;
            }
            /*se buscar paciente for true, encontrado, senao, nao esta no nosso sistema*/
            break;
        case(3):
            //if(Comunicador->alterarPacienteBD()==false){
            //    solicitacaoNaoConcluida();
            //}
            //solicitacaoConcluida();
            break;
        case(4):
            ///descadastrar

            break;
        case(5):
            ///cadastrar medico
            break;
        case(6):
            ///procurar medico
            break;
        case(7):
            ///atualizar medico
            break;
        case(8):
            ///descadastrar medico
            break;
        case(9):
            ///marcar consulta
            break;
        case(10):
            ///procurar consulta
            break;
        case(11):
            ///remarcar consulta
            break;
        case(12):
            ///cancelar consulta
            break;
        case(13):
            ///listar consultas marcadas
            break;
        case(14):
            ///listar medicos cadastrados
            break;
        case(15):
            ///listar pacientes cadastrados
            break;
        case(16):
            ///listar pacientes de um medico
            break;
        case(17):
            ///listar pacientes de medicos
            break;
        case(18):
            ///listar medicos de um paciente
            break;
        case(19):
            ///listar medicos dos pacientes
            break;
        case(20):
            ///listar consultas de um paciente
            break;
        case(21):
            ///listar consultas de um medico
            break;
        case(22):
           ///listar pacientes cadastrados sem medico
            break;
        case(23):
            ///listar medicos sem paciente
            break;
        case(24):
            Running = false;
            break;
        default:
            opcaoInvalida();
    }
}
