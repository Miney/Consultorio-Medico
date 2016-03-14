#include "Paciente.h"

void Paciente::cadastrarPaciente(){
    string aux_string;
    int aux_int;

    cout<<"Insira o nome do Paciente:"<<endl;
    cin >>aux_string;
    setNomePaciente(aux_string);
    cout<<"Insira o endereco do Paciente"<<endl;
    cin >>aux_string;
    setEnderecoPaciente(aux_string);
    cout<<"Insira o telefone do Paciente"<<endl;
    cin >>aux_string;
    setTelefonePaciente(aux_string);
    cout<<"Insira a idade do Paciente:"<<endl;
    cin >>aux_int;
    setIdadePaciente(aux_int);
}

void Paciente::procurarPaciente(){
    string aux_string;
    cout<<"Insira o nome do Paciente:"<<endl;
    cin >>aux_string;
    setNomePaciente(aux_string);
}

string Paciente::getNomePaciente(){
    return Nome_Paciente;
}

void Paciente::setNomePaciente(string Nome){
    Nome_Paciente.assign(Nome);
}

string Paciente::getEnderecoPaciente(){
    return Endereco_Paciente;
}

void Paciente::setEnderecoPaciente(string Endereco){
    Endereco_Paciente.assign(Endereco);
}

string Paciente::getTelefonePaciente(){
    return Telefone_Paciente;
}

void Paciente::setTelefonePaciente(string Telefone){
    Telefone_Paciente.assign(Telefone);
}

int Paciente::getIdadePaciente(){
    return Idade_Paciente;
}

void Paciente::setIdadePaciente(int Idade){
    Idade_Paciente = Idade;
}
