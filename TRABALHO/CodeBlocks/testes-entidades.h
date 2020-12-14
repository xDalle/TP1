/**
 * @file testes-entidades.h
 * @author Lucas Dalle Rocha
 * @date 27 de Setembro de 2019
 *
 * @brief Descrição de todas as classes de teste de unidade das classes de entidade.
 *
 * Neste arquivo estão as classes de teste de unidade que verificam a presença de exceção ou não.
 */

#ifndef TESTES_ENTIDADES_H
#define TESTES_ENTIDADES_H

#include "entidades.h"

/**
 *  @brief TUBaseEntidades.
 *
 *  @section Descrição
 *  Classe para teste inicial das classes de entidade.
 */

class TUBaseEntidades{
private:
    virtual void SetUp() = 0;
    virtual void TearDown() = 0;
    virtual void TestarCenarioSucesso() = 0;

protected:

    /**
     *  @brief Atributo booleano que representa se ocorreu sucesso ou falha no teste.
     */

    bool estado;

public:

    /**
     *  @brief Roda os casos particulares dos testes de unidade.
     *  @return 0 se houver alguma falha;
     *  @return 1 se não apresentar falhas.
     */

    int Run(){
        SetUp();
        TestarCenarioSucesso();
        TearDown();
        return estado;
    }

    /**
     * @brief Destrutor de TUBaseEntidades.
     */

    virtual ~TUBaseEntidades() = default;
};

/**
 *  @brief TUUsuario.
 *
 *  @section Descrição
 *  Testa um usuário válido, verificando suas exceções.
 */

class TUUsuario : public TUBaseEntidades{
private:
    Usuario *usuarioValido;
    CPF cpfValido = CPF("596.953.721-71");
    Senha senhaValida = Senha("09AzZa");

    void SetUp(){
        usuarioValido = new Usuario(cpfValido, senhaValida);
        estado = true;
    }

    void TearDown(){
        delete usuarioValido;
    }

    void TestarCenarioSucesso();
};

/**
 *  @brief TUJogo.
 *
 *  @section Descrição
 *  Testa um jogo válido, verificando suas exceções.
 */

class TUJogo : public TUBaseEntidades{
private:
    Jogo *jogoValido;
    CodigoDoJogo codigoDoJogoValido = CodigoDoJogo("190");
    NomeDoJogo nomeDoJogoValido = NomeDoJogo("Brasil x Palmeiras");
    Cidade cidadeValida = Cidade("Sao Paulo");
    Estado estadoValido = Estado("SP");
    Tipo tipoValido = Tipo(4);

    void SetUp(){
        jogoValido = new Jogo(codigoDoJogoValido, nomeDoJogoValido, cidadeValida, estadoValido, tipoValido);
        estado = true;
    }

    void TearDown(){
        delete jogoValido;
    }

    void TestarCenarioSucesso();
};

/**
 *  @brief TUPartida.
 *
 *  @section Descrição
 *  Testa uma partida válida, verificando suas exceções.
 */

class TUPartida : public TUBaseEntidades{
private:
    Partida *partidaValida;
    CodigoDaPartida codigoDaPartidaValido = CodigoDaPartida("753");
    Data dataValida = Data("08/10/98");
    Horario horarioValido = Horario("19:45");
    Preco precoValido = Preco(783.91);
    Disponibilidade disponibilidadeValida = Disponibilidade(127);

    void SetUp(){
        partidaValida = new Partida(codigoDaPartidaValido, dataValida, horarioValido, precoValido, disponibilidadeValida);
        estado = true;
    }

    void TearDown(){
        delete partidaValida;
    }

    void TestarCenarioSucesso();
};

/**
 *  @brief TUIngresso.
 *
 *  @section Descrição
 *  Testa um ingresso válido, verificando suas exceções.
 */

class TUIngresso : public TUBaseEntidades{
private:
    Ingresso *ingressoValido;
    CodigoDeIngresso codigoDeIngressoValido = CodigoDeIngresso("56924");

    void SetUp(){
        ingressoValido = new Ingresso(codigoDeIngressoValido);
        estado = true;
    }

    void TearDown(){
        delete ingressoValido;
    }

    void TestarCenarioSucesso();
};

/**
 *  @brief TUCartaoDeCredito.
 *
 *  @section Descrição
 *  Testa um cartão de crédito válido, verificando suas exceções.
 */

class TUCartaoDeCredito : public TUBaseEntidades{
private:
    CartaoDeCredito *cartaoDeCreditoValido;
    NumeroDeCartaoDeCredito numeroDeCartaoDeCreditoValido = NumeroDeCartaoDeCredito("5369758471992484");
    CodigoDeSeguranca codigoDeSegurancaValido = CodigoDeSeguranca("412");
    DataDeValidade dataDeValidadeValida = DataDeValidade("02/20");

    void SetUp(){
        cartaoDeCreditoValido = new CartaoDeCredito(numeroDeCartaoDeCreditoValido, codigoDeSegurancaValido, dataDeValidadeValida);
        estado = true;
    }

    void TearDown(){
        delete cartaoDeCreditoValido;
    }

    void TestarCenarioSucesso();
};

/**
 *  @brief TUEntidades.
 *
 *  @section Descrição
 *  Executa todos os testes de unidade das classes de entidade.
 */

class TUEntidades{
private:
    TUUsuario *testeDeUnidadeDeUsuario;
    TUJogo *testeDeUnidadeDeJogo;
    TUPartida *testeDeUnidadeDePartida;
    TUIngresso *testeDeUnidadeDeIngresso;
    TUCartaoDeCredito *testeDeUnidadeDeCartaoDeCredito;

    void SetUpEntidades(){
        testeDeUnidadeDeUsuario = new TUUsuario();
        testeDeUnidadeDeJogo = new TUJogo();
        testeDeUnidadeDePartida = new TUPartida();
        testeDeUnidadeDeIngresso = new TUIngresso();
        testeDeUnidadeDeCartaoDeCredito = new TUCartaoDeCredito();
    }

    void TearDownEntidades(){
        delete testeDeUnidadeDeUsuario;
        delete testeDeUnidadeDeJogo;
        delete testeDeUnidadeDePartida;
        delete testeDeUnidadeDeIngresso;
        delete testeDeUnidadeDeCartaoDeCredito;
    }

public:

    /**
    * @brief Roda todos os casos de teste de unidade das classes de entidade.
    */

    void RunEntidades();
};

#endif // TESTES_ENTIDADES_H
