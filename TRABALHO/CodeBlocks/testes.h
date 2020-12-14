/**
 * @file testes.h
 * @author Lucas Dalle Rocha
 * @date 27 de Setembro de 2019
 *
 * @brief Realiza todos os testes de unidade das classes de dominio e entidade.
 *
 * Neste arquivo está a classe que executa os testes de unidade.
 */

#ifndef TESTES_H
#define TESTES_H

#include "testes-dominios.h"
#include "testes-entidades.h"

using namespace std;

/**
 *  @brief Teste.
 *  @author Lucas Dalle Rocha
 *
 *  @section Descrição
 *  Executa todos os testes de unidade (dominio e entidade)
 */

class Teste{
private:
    TUDominios *testeDeUnidadeDeDominios;
    TUEntidades *testeDeUnidadeDeEntidades;

    void SetUpTestes(){
        testeDeUnidadeDeDominios = new TUDominios();
        testeDeUnidadeDeEntidades = new TUEntidades();
    }

    void RunTestes(){
        testeDeUnidadeDeDominios->RunDominios();
        testeDeUnidadeDeEntidades->RunEntidades();
    }

    void TearDownTestes(){
        delete testeDeUnidadeDeDominios;
        delete testeDeUnidadeDeEntidades;
    }

public:

    /**
     *  @brief Função Execute(): Executa as funções necessárias para realizar os testes de unidade.
     */

    void Execute(){
        SetUpTestes();
        RunTestes();
        TearDownTestes();
    }
};

#endif // TESTES_H
