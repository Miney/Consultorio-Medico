#include <string>
#include <iostream>

using namespace std;

class Paciente{

    private:

        string Nome_Paciente;
        string Endereco_Paciente;
        string Telefone_Paciente;
        int    Idade_Paciente;

    public:

        void cadastrarPaciente();
        void deletarPaciente();

        void procurarPaciente();

        string getNomePaciente();
        void setNomePaciente(string Nome);

        string getEnderecoPaciente();
        void setEnderecoPaciente(string Endereco);

        string getTelefonePaciente();
        void setTelefonePaciente(string Telefone);

        int getIdadePaciente();
        void setIdadePaciente(int Idade);
};
