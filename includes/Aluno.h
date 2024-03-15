#pragma once
#include <iostream>
#include "Pessoa.h"
#include "Medidas.h"
#include "Treino.h"

class Aluno: public Pessoa
{
    private:
        Medidas medidas;
        Treino treinos;

    public:
        int treino = 0;
        Aluno();
        Aluno(string nomeCompleto, int idade, Medidas medidas, Treino treinos);
        
        Medidas getMedidas();
        Treino getTreino();

        void setTreino(Treino treinos);
        void setMedidas(Medidas medidas);  
        void exibir();
        void menu();
};
