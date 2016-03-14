#include<string>
#include<iostream>

using namespace std;

class Medico{
    private:
        string NomeMedico;
        string Especialidade;

    public:
        void cadastrarMedico();
        void deletarMedico();

        string getNomeMedico();
        void setNomeMedico(string Nome);

        string getEspecialidadeMedico();
        void setEspecialidadeMedico(string Especialidade);

        bool validaMedico(string Nome);
};
