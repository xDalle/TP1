/**
 * @file testes-dominios.h
 * @author Lucas Dalle Rocha
 * @date 27 de Setembro de 2019
 *
 * @brief Descrição de todas as classes de teste de unidade das classes de domínio.
 *
 * Neste arquivo estão as classes de teste de unidade que verificam a presença de exceção ou não.
 */

#ifndef TESTES_DOMINIOS_H
#define TESTES_DOMINIOS_H

#include <iostream>
#include "dominios.h"

using namespace std;

/**
 *  @brief TUBaseDominios.
 *
 *  @section Descrição
 *  Classe para teste inicial das classes de dominio.
 */

class TUBaseDominios{
private:
    virtual void SetUp() = 0;
    virtual void TestarCenarioSucesso() = 0;
    virtual void TestarCenarioFalha() = 0;
    virtual void TearDown() = 0;

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
        TestarCenarioFalha();
        TearDown();
        return estado;
    }

    /**
     * @brief Destrutor de TUBaseDominios.
     */

    virtual ~TUBaseDominios() = default;
};

/**
 *  @brief TUCPF.
 *
 *  @section Descrição
 *  Testa um CPF válido e outros inválidos, verificando suas exceções.
 */

class TUCPF : public TUBaseDominios{
private:
    CPF *cpf;
    const string cpfValido = "596.953.721-71";
    const string cpfInvalidoTAM = "596.953.721-710";
    const string cpfInvalidoDIG = "596-953-721-71";
    const string cpfInvalidoLET = "596.953.72K-71";
    const string cpfInvalidoDV = "596.953.721-70";

    void SetUp(){
        cpf = new CPF();
        estado = true;
    }

    void TearDown(){
        delete cpf;
    }

    void TestarCenarioSucesso();
    void TestarCenarioFalha();
};

/**
 *  @brief TUSenha.
 *
 *  @section Descrição
 *  Testa uma Senha válida e outras inválidas, verificando suas exceções.
 */

class TUSenha : public TUBaseDominios{
private:
    Senha *senha;
    const string senhaValida = "09AzZa";
    const string senhaInvalidaTAM = "09AzZa1";
    const string senhaInvalidaDIG = "09AZ12";
    const string senhaInvalidaREP = "09Az9Z";

    void SetUp(){
        senha = new Senha();
        estado = true;
    }

    void TearDown(){
        delete senha;
    }

    void TestarCenarioSucesso();
    void TestarCenarioFalha();
};

/**
 *  @brief TUCodigoDoJogo.
 *
 *  @section Descrição
 *  Testa um CodigoDoJogo válido e outros inválidos, verificando suas exceções.
 */

class TUCodigoDoJogo : public TUBaseDominios{
private:
    CodigoDoJogo *codigoDoJogo;
    const string codigoDoJogoValido = "190";
    const string codigoDoJogoInvalidoTAM = "1908";
    const string codigoDoJogoInvalidoDIG = "19o";

    void SetUp(){
        codigoDoJogo = new CodigoDoJogo();
        estado = true;
    }

    void TearDown(){
        delete codigoDoJogo;
    }

    void TestarCenarioSucesso();
    void TestarCenarioFalha();
};

/**
 *  @brief TUNomeDoJogo.
 *
 *  @section Descrição
 *  Testa um NomeDoJogo válido e outros inválidos, verificando suas exceções.
 */

class TUNomeDoJogo : public TUBaseDominios{
private:
    NomeDoJogo *nomeDoJogo;
    const string nomeDoJogoValido = "Brasil x Palmeiras";
    const string nomeDoJogoInvalidoTAM = "Brasil x Palmeiras parte 2";
    const string nomeDoJogoInvalidoESP = "Brasil  Palmeiras";
    const string nomeDoJogoInvalidoLET = "7557";
    const string nomeDoJogoInvalidoCAR = "Brasil - Palmeiras";

    void SetUp(){
        nomeDoJogo = new NomeDoJogo();
        estado = true;
    }

    void TearDown(){
        delete nomeDoJogo;
    }

    void TestarCenarioSucesso();
    void TestarCenarioFalha();
};

/**
 *  @brief TUCidade.
 *
 *  @section Descrição
 *  Testa uma Cidade válida e outras inválidas, verificando suas exceções.
 */

class TUCidade : public TUBaseDominios{
private:
    Cidade *cidade;
    const string cidadeValida = "Sao Paulo";
    const string cidadeInvalidaTAM = "Cocalzinho do Sul";
    const string cidadeInvalidaESP = "Sao  Paulo";
    const string cidadeInvalidaLET = "123456789";
    const string cidadeInvalidaPON = "Sao .Paulo";
    const string cidadeInvalidaCAR = "Sao-Paulo";

    void SetUp(){
        cidade = new Cidade();
        estado = true;
    }

    void TearDown(){
        delete cidade;
    }

    void TestarCenarioSucesso();
    void TestarCenarioFalha();
};

/**
 *  @brief TUEstado.
 *
 *  @section Descrição
 *  Testa um Estado válido e outros inválidos, verificando suas exceções.
 */

class TUEstado : public TUBaseDominios{
private:
    Estado *k_estado;
    const string k_estadoValido = "SP";
    const string k_estadoInvalidoTAM = "SPP";
    const string k_estadoInvalidoINE = "SS";

    void SetUp(){
        k_estado = new Estado();
        estado = true;
    }

    void TearDown(){
        delete k_estado;
    }

    void TestarCenarioSucesso();
    void TestarCenarioFalha();
};

/**
 *  @brief TUTipo.
 *
 *  @section Descrição
 *  Testa um Tipo válido e outros inválidos, verificando suas exceções.
 */

class TUTipo : public TUBaseDominios{
private:
    Tipo *tipo;
    const int tipoValido = 4;
    const int tipoInvalidoGRE = 5;
    const int tipoInvalidoLES = 0;

    void SetUp(){
        tipo = new Tipo();
        estado = true;
    }

    void TearDown(){
        delete tipo;
    }

    void TestarCenarioSucesso();
    void TestarCenarioFalha();
};

/**
 *  @brief TUCodigoDaPartida.
 *
 *  @section Descrição
 *  Testa um CodigoDaPartida válido e outros inválidos, verificando suas exceções.
 */

class TUCodigoDaPartida : public TUBaseDominios{
private:
    CodigoDaPartida *codigoDaPartida;
    const string codigoDaPartidaValido = "753";
    const string codigoDaPartidaInvalidoTAM = "7533";
    const string codigoDaPartidaInvalidoDIG = "75z";

    void SetUp(){
        codigoDaPartida = new CodigoDaPartida();
        estado = true;
    }

    void TearDown(){
        delete codigoDaPartida;
    }

    void TestarCenarioSucesso();
    void TestarCenarioFalha();
};

/**
 *  @brief TUData.
 *
 *  @section Descrição
 *  Testa uma Data válida e outras inválidas, verificando suas exceções.
 */

class TUData : public TUBaseDominios{
private:
    Data *data;
    const string dataValida = "08/10/98";
    const string dataInvalidaDIA = "32/01/98";
    const string dataInvalidaMES = "08/13/98";
    const string dataInvalidaANO = "08/10/1998";
    const string dataInvalidaFEV = "29/02/95";
    const string dataInvalidaDMM = "31/06/98";

    void SetUp(){
        data = new Data();
        estado = true;
    }

    void TearDown(){
        delete data;
    }

    void TestarCenarioSucesso();
    void TestarCenarioFalha();
};

/**
 *  @brief TUHorario.
 *
 *  @section Descrição
 *  Testa um Horario válido e outros inválidos, verificando suas exceções.
 */

class TUHorario : public TUBaseDominios{
private:
    Horario *horario;
    const string horarioValido = "19:45";
    const string horarioInvalidoTAM = "19:455";
    const string horarioInvalidoDPT = "194:5";
    const string horarioInvalidoCAR = "19:4r";
    const string horarioInvalidoHOR = "06:00";
    const string horarioInvalidoMIN = "10:10";

    void SetUp(){
        horario = new Horario();
        estado = true;
    }

    void TearDown(){
        delete horario;
    }

    void TestarCenarioSucesso();
    void TestarCenarioFalha();
};

/**
 *  @brief TUPreco.
 *
 *  @section Descrição
 *  Testa um Preco válido e outros inválidos, verificando suas exceções.
 */

class TUPreco : public TUBaseDominios{
private:
    Preco *preco;
    const float precoValido = 783.91;
    const float precoInvalidoMAI = 1083.91;
    const float precoInvalidoMEN = -783.91;

    void SetUp(){
        preco = new Preco();
        estado = true;
    }

    void TearDown(){
        delete preco;
    }

    void TestarCenarioSucesso();
    void TestarCenarioFalha();
};

/**
 *  @brief TUDisponibilidade.
 *
 *  @section Descrição
 *  Testa uma Disponibilidade válida e outras inválidas, verificando suas exceções.
 */

class TUDisponibilidade : public TUBaseDominios{
private:
    Disponibilidade *disponibilidade;
    const int disponibilidadeValida = 127;
    const int disponibilidadeInvalidaMAI = 251;
    const int disponibilidadeInvalidaMEN = -1;

    void SetUp(){
        disponibilidade = new Disponibilidade();
        estado = true;
    }

    void TearDown(){
        delete disponibilidade;
    }

    void TestarCenarioSucesso();
    void TestarCenarioFalha();
};

/**
 *  @brief TUCodigoDeIngresso.
 *
 *  @section Descrição
 *  Testa um CodigoDeIngresso válido e outros inválidos, verificando suas exceções.
 */

class TUCodigoDeIngresso : public TUBaseDominios{
private:
    CodigoDeIngresso *codigoDeIngresso;
    const string codigoDeIngressoValido = "56924";
    const string codigoDeIngressoInvalidoTAM = "5692";
    const string codigoDeIngressoInvalidoCAR = "5692x";

    void SetUp(){
        codigoDeIngresso = new CodigoDeIngresso();
        estado = true;
    }

    void TearDown(){
        delete codigoDeIngresso;
    }

    void TestarCenarioSucesso();
    void TestarCenarioFalha();
};

/**
 *  @brief TUNumeroDeCartaoDeCredito.
 *
 *  @section Descrição
 *  Testa um NumeroDeCartaoDeCredito válido e outros inválidos, verificando suas exceções.
 */

class TUNumeroDeCartaoDeCredito : public TUBaseDominios{
private:
    NumeroDeCartaoDeCredito *numeroDeCartaoDeCredito;
    const string numeroDeCartaoDeCreditoValido = "5369758471992484";
    const string numeroDeCartaoDeCreditoInvalidoTAM = "53697584719924844";
    const string numeroDeCartaoDeCreditoInvalidoDIG = "53697584X19924844";
    const string numeroDeCartaoDeCreditoInvalidoDV = "0000000000000000";

    void SetUp(){
        numeroDeCartaoDeCredito = new NumeroDeCartaoDeCredito();
        estado = true;
    }

    void TearDown(){
        delete numeroDeCartaoDeCredito;
    }

    void TestarCenarioSucesso();
    void TestarCenarioFalha();
};

/**
 *  @brief TUCodigoDeSeguranca.
 *
 *  @section Descrição
 *  Testa um CodigoDeSeguranca válido e outros inválidos, verificando suas exceções.
 */

class TUCodigoDeSeguranca : public TUBaseDominios{
private:
    CodigoDeSeguranca *codigoDeSeguranca;
    const string codigoDeSegurancaValido = "412";
    const string codigoDeSegurancaInvalidoTAM = "4122";
    const string codigoDeSegurancaInvalidoCAR = "4w2";

    void SetUp(){
        codigoDeSeguranca = new CodigoDeSeguranca();
        estado = true;
    }

    void TearDown(){
        delete codigoDeSeguranca;
    }

    void TestarCenarioSucesso();
    void TestarCenarioFalha();
};

/**
 *  @brief TUDataDeValidade.
 *
 *  @section Descrição
 *  Testa uma DataDeValidade válida e outras inválidas, verificando suas exceções.
 */

class TUDataDeValidade : public TUBaseDominios{
private:
    DataDeValidade *dataDeValidade;
    const string dataDeValidadeValida = "02/20";
    const string dataDeValidadeInvalidaTAM = "02//20";
    const string dataDeValidadeInvalidaBAR = "0/220";
    const string dataDeValidadeInvalidaCAR = "02/b0";
    const string dataDeValidadeInvalidaMES = "020/20";
    const string dataDeValidadeInvalidaANO = "02/200";

    void SetUp(){
        dataDeValidade = new DataDeValidade();
        estado = true;
    }

    void TearDown(){
        delete dataDeValidade;
    }

    void TestarCenarioSucesso();
    void TestarCenarioFalha();
};

/**
 *  @brief TUDominios.
 *
 *  @section Descrição
 *  Executa todos os testes de unidade das classes de dominio.
 */

class TUDominios{
private:
    TUCPF *testeDeUnidadeDeCPF;
    TUSenha *testeDeUnidadeDeSenha;
    TUCodigoDoJogo *testeDeUnidadeDeCodigoDoJogo;
    TUNomeDoJogo *testeDeUnidadeDeNomeDoJogo;
    TUCidade *testeDeUnidadeDeCidade;
    TUEstado *testeDeUnidadeDeEstado;
    TUTipo *testeDeUnidadeDeTipo;
    TUCodigoDaPartida *testeDeUnidadeDeCodigoDaPartida;
    TUData *testeDeUnidadeDeData;
    TUHorario *testeDeUnidadeDeHorario;
    TUPreco *testeDeUnidadeDePreco;
    TUDisponibilidade *testeDeUnidadeDeDisponibilidade;
    TUCodigoDeIngresso *testeDeUnidadeDeCodigoDeIngresso;
    TUNumeroDeCartaoDeCredito *testeDeUnidadeDeNumeroDeCartaoDeCredito;
    TUCodigoDeSeguranca *testeDeUnidadeDeCodigoDeSeguranca;
    TUDataDeValidade *testeDeUnidadeDeDataDeValidade;

    void SetUpDominios(){
        testeDeUnidadeDeCPF = new TUCPF();
        testeDeUnidadeDeSenha = new TUSenha();
        testeDeUnidadeDeCodigoDoJogo = new TUCodigoDoJogo();
        testeDeUnidadeDeNomeDoJogo = new TUNomeDoJogo();
        testeDeUnidadeDeCidade = new TUCidade();
        testeDeUnidadeDeEstado = new TUEstado();
        testeDeUnidadeDeTipo = new TUTipo();
        testeDeUnidadeDeCodigoDaPartida = new TUCodigoDaPartida();
        testeDeUnidadeDeData = new TUData();
        testeDeUnidadeDeHorario = new TUHorario();
        testeDeUnidadeDePreco = new TUPreco();
        testeDeUnidadeDeDisponibilidade = new TUDisponibilidade();
        testeDeUnidadeDeCodigoDeIngresso = new TUCodigoDeIngresso();
        testeDeUnidadeDeNumeroDeCartaoDeCredito = new TUNumeroDeCartaoDeCredito();
        testeDeUnidadeDeCodigoDeSeguranca = new TUCodigoDeSeguranca();
        testeDeUnidadeDeDataDeValidade = new TUDataDeValidade();
    }

    void TearDownDominios(){
        delete testeDeUnidadeDeCPF;
        delete testeDeUnidadeDeSenha;
        delete testeDeUnidadeDeCodigoDoJogo;
        delete testeDeUnidadeDeNomeDoJogo;
        delete testeDeUnidadeDeCidade;
        delete testeDeUnidadeDeEstado;
        delete testeDeUnidadeDeTipo;
        delete testeDeUnidadeDeCodigoDaPartida;
        delete testeDeUnidadeDeData;
        delete testeDeUnidadeDeHorario;
        delete testeDeUnidadeDePreco;
        delete testeDeUnidadeDeDisponibilidade;
        delete testeDeUnidadeDeCodigoDeIngresso;
        delete testeDeUnidadeDeNumeroDeCartaoDeCredito;
        delete testeDeUnidadeDeCodigoDeSeguranca;
        delete testeDeUnidadeDeDataDeValidade;
    }

public:

    /**
    * @brief Roda todos os casos de teste de unidade das classes de dominio.
    */

    void RunDominios();
};
#endif // TESTES_DOMINIOS
