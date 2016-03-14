#include "Medico.h"

void Medico::cadastrarMedico(){
    string aux_string;

    cout<<"Insira o nome do Medico:"<<endl;
    cin >>aux_string;
    setNomeMedico(aux_string);
    cout<<"Insira a especialidade do Medico:"<<endl;
    cin >>aux_string;
    setEspecialidadeMedico(aux_string);
}

string Medico::getNomeMedico(){
    return this->NomeMedico;
}

void Medico::setNomeMedico(string Nome){
    NomeMedico.assign(Nome);
}

string Medico::getEspecialidadeMedico(){
    return this->Especialidade;
}

void  Medico::setEspecialidadeMedico(string Especialidade){
    Especialidade.assign(Especialidade);
}

bool Medico::validaMedico(string Medico){
    ///se retornar nome medico da tabela medico
        ///return false (invalido)
    ///senao return true(valido)
    return true;
}

