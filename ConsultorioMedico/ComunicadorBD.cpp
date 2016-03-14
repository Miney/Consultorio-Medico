#include "ComunicadorBD.h"

using namespace std;

ComunicadorBD::ComunicadorBD(){

    if(sqlite3_open("database.sqlite", &database) == SQLITE_OK) {
        cout<<"It's working! It's working!"<<endl;
    } else {
        cout<<"I have a bad feeling about this."<<endl;
    }
}

bool ComunicadorBD::procuraBD(string Nome, string tabela){
    if(tabela.compare("medico")==0){
        ///procura nome na tabela medico, se achar retorna true
    }
    else if(tabela.compare("paciente")==0){
        ///procura nome na tabela paciente, se achar retorna true
    }
    else{
        ///procura na tabela consulta
    }
    return false;
}

bool ComunicadorBD::inserePacienteBD(){
    Paciente P;
    string aux;
    P.cadastrarPaciente();
    aux = P.getNomePaciente();
    if(procuraBD(aux, "paciente")==true){
        return false;
    }
    else{
        ///insere banco de dados
    }
    return true;
}

bool ComunicadorBD::insereMedicoBD(){
    Medico M;
    string aux;
    M.cadastrarMedico();
    aux = M.getNomeMedico();
    if(procuraBD(aux, "medico")== true){
        return false;
    }
    else{
        ///insere banco de dados
    }
    return true;
}

/*bool ComunicadorBD::agendarConsulta(){

}*/


