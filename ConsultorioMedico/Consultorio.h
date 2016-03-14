//#include "Consulta.h"
#include "ComunicadorBD.h"
#include "Visual.h"

using namespace std;

class Consultorio{

    ComunicadorBD* Comunicador;
    int input;
    bool Running;

    public:
        Consultorio();

        void RunApplication();
        void handleInput(int input);

};
