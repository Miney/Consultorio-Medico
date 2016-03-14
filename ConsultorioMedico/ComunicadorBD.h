#include "Consulta.h"
#include <string>
#include "sqlite3.h"

class ComunicadorBD{

    sqlite3 *database;

    public:
        ComunicadorBD();

        bool procuraBD(string Nome, string tabela);

        bool inserePacienteBD();
        bool alterarPacienteBD();

        bool insereMedicoBD();
        bool alterarMedicoBD();

        bool agendarConsulta();
        bool alterarConsulta();

        void closeDatabase();///vai ser chamado quando sair da aplicacao
};
