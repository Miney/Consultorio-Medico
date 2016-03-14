#include "Visual.h"
#include <iostream>
using namespace std;

void showMenu(){
/*cout<<"  /\\  _ \                                  /\\_ \\  /\\ \\__                __"<<endl;
cout<<"  \\ \\ \\/\\_\\    ___     ___     ____  __  __\\//\\ \\ \\ \\  _\\   ___   _ __ /\\_\\     ___   "<<endl;
cout<<"   \\ \\ \\/_/_  / __ \\ /  _  \\  /  __\\/\\ \\/\\ \\ \\ \\ \\ \\ \\ \\/  / __ \\/\\  __\\/\\ \\   / __ \\ "<<endl;
cout<<"    \\ \\ \\L\\ \\/\\ \\L\\ \\/\\ \\/\\ \\/\\__   \\ \\ \\_\\ \\ \\_\\ \\_\\ \\ \\_/\\ \\L\\ \\ \\ \\/ \\ \\ \\ /\\ \\L\\ \\"<<endl;
cout<<"     \\ \\____/\\ \\____/\\ \\_\\ \\_\\/\\____/\\ \\____/ /\\____\\\\ \\__\\ \\____/\\ \\_\\  \\ \\_\\\\ \\____/"<<endl;
cout<<"      \\/___/  \\/___/  \\/_/\\/_/\\/___/  \\/___/  \\/____/ \\/__/\\/___/  \\/_/   \\/_/ \\/___/ "<<endl;
cout<<"         / \\_/ \\           /\\ \\  __                  "<<endl;
cout<<"        /\\      \\     __   \\_\\ \\/\\_\\    ___    ___   "<<endl;
cout<<"        \\ \\ \\__\\ \\  / __ \\ / _  \\/\\ \\  / ___\\ / __ \\ "<<endl;
cout<<"         \\ \\ \\_/\\ \\/\\  __//\\ \\L\\ \\ \\ \\/\\ \\__//\\ \\L\\ \\"<<endl;
cout<<"          \\ \\_\\\\ \\_\\ \\____\\ \\____\\ \\_\\ \\____\\ \\____/"<<endl;
cout<<"           \\/_/ \\/_/\\/____/\\/___ /\\/_/\\/____/\\/___/ "<<endl<<endl;*/
cout<<"CONSULTORIO MEDICO"<<endl<<endl;
cout<<"Operacoes disponíveis:"<<endl;
cout<<"1- Cadastrar paciente"<<endl;
cout<<"2- Procurar paciente"<<endl;
cout<<"3- Atualizar paciente"<<endl;
cout<<"4- Descadastrar paciente"<<endl;
cout<<"5- Cadastrar medico"<<endl;
cout<<"6- Procurar medico"<<endl;
cout<<"7- Atualizar medico"<<endl;
cout<<"8- Descadastrar medico"<<endl;
cout<<"9- Marcar consulta"<<endl;
cout<<"10- Procurar consulta"<<endl;
cout<<"11- Remarcar consulta"<<endl;
cout<<"12- Cancelar consulta"<<endl;
cout<<"13- listar todas as consultas marcadas"<<endl;
cout<<"14- listar todos os medicos cadastrados"<<endl;
cout<<"15- listar todos os pacientes cadastrados"<<endl;
cout<<"16- listar todos os pacientes de um medico"<<endl;
cout<<"17- listar todos os pacientes de todos os medicos"<<endl;
cout<<"18- listar todos os medicos de um paciente"<<endl;
cout<<"19- listar todos os medicos de  todos os pacientes"<<endl;
cout<<"20- listar todas as consultas de um paciente"<<endl;
cout<<"21- listar todas as consultas de um medico"<<endl;
cout<<"22- listar pacientes cadastrados sem medico"<<endl;
cout<<"23- listar medicos cadastrados sem pacientes"<<endl;
cout<<"24- SAIR"<<endl;
cout<<"Favor escolher uma opção:"<<endl;
}

void opcaoInvalida(){
    cout<<"Opcao inserida invalida"<<endl;
}

void solicitacaoNaoConcluida(){
    cout<<"Nao foi possivel concluir sua solicitacao"<<endl;
}

void solicitacaoConcluida(){
    cout<<"Solicitacao concluida con sucesso!"<<endl;
}

