/**
 * @file dominios.h
 * @author Lucas Dalle Rocha
 * @date 27 de Setembro de 2019
 *
 * @brief Descrição de todas as classes de domínio.
 *
 * Neste arquivo estão as classes de domínio, isto é, as classes que armazenarão os dados integrados às classes de entidade.
 */

#ifndef DOMINIOS_H
#define DOMINIOS_H

#include <iostream>

using namespace std;

/**
 *  @brief CPF.
 *  @author Lucas Dalle Rocha
 *
 *  @section Descrição
 *  Formato XXX.XXX.XXX-XX onde X é dígito (0 – 9). O número de CPF deve
 *  incluir dígitos verificadores calculados por meio de algoritmo apropriado.
 */

class CPF{
private:
    string cpf;
    const static int TAMANHO = 14, PONTO_UM = 3, PONTO_DOIS = 7, TRACO = 11;
    void Validar(string);

public:

    /**
     *  @brief Seta cpf para a classe CPF
     */

    void SetCPF(string);

    /**
     *  @brief Retorna cpf da classe CPF
     *
     *  @return cpf
     */

    string GetCPF() const{
        return cpf;
    }

    /**
     *  @brief Construtor para objeto de um CPF
     *
     *  @section Descrição
     *  Essa classe armazena um objeto de CPF.
     */

    explicit CPF(const string &cpf){
        SetCPF(cpf);
    }

    /**
     *  @brief Construtor padrão da classe CPF
     */

     CPF() = default;
};

/**
 *  @brief Senha.
 *  @author Lucas Dalle Rocha
 *
 *  @section Descrição
 *  Formato XXXXXX onde X pode ser letra (A – Z a – z) ou dígito (0 a 9). Não
 *  há caracteres repetidos. Há pelo menos uma letra maiúscula, uma minúscula e
 *  um dígito.
 */

class Senha{
private:
    string senha;
    const static int TAMANHO_MAX = 6;
    void Validar(string);

public:

    /**
     *  @brief Seta senha para a classe Senha
     */

     void SetSenha(string);

     /**
     *  @brief Retorna senha da classe Senha
     *
     *  @return senha
     */

     string GetSenha() const{
        return senha;
     }

     /**
     *  @brief Construtor para objeto de uma Senha
     *
     *  @section Descrição
     *  Essa classe armazena um objeto de Senha.
     */

     explicit Senha(const string &senha){
        SetSenha(senha);
     }

     /**
     *  @brief Construtor padrão da classe Senha
     */

     Senha() = default;
};

/**
 *  @brief Código do Jogo.
 *  @author Lucas Dalle Rocha
 *
 *  @section Descrição
 *  Formato XXX onde X é dígito (0 – 9).
 */

class CodigoDoJogo{
private:
    string codigoDoJogo;
    const static int TAMANHO = 3;
    void Validar(string);

public:

    /**
     *  @brief Seta codigoDoJogo para a classe CodigoDoJogo
     */

    void SetCodigoDoJogo(string);

    /**
     *  @brief Retorna codigoDoJogo da classe CodigoDoJogo
     *
     *  @return codigoDoJogo
     */

     string GetCodigoDoJogo() const{
        return codigoDoJogo;
     }

     /**
     *  @brief Construtor para objeto de um CodigoDoJogo
     *
     *  @section Descrição
     *  Essa classe armazena um objeto de CodigoDoJogo.
     */

     explicit CodigoDoJogo(const string &codigoDoJogo){
        SetCodigoDoJogo(codigoDoJogo);
     }

     /**
     *  @brief Construtor padrão da classe CodigoDoJogo
     */

     CodigoDoJogo() = default;
};

/**
 *  @brief Nome do Jogo.
 *  @author Lucas Dalle Rocha
 *
 *  @section Descrição
 *  Formato XXXXXXXXXXXXXXXXXXXX onde cada X pode ser letra, dígito
 *  ou espaço. Pelos menos um caractere é letra. Não podem existir espaços em
 *  sequência.
 */

class NomeDoJogo{
private:
    string nomeDoJogo;
    const static int TAMANHO_MAX = 20;
    void Validar(string);

public:

    /**
     *  @brief Seta nomeDoJogo para a classe NomeDoJogo
     */

    void SetNomeDoJogo(string);

    /**
     *  @brief Retorna nomeDoJogo da classe NomeDoJogo
     *
     *  @return nomeDoJogo
     */

     string GetNomeDoJogo() const{
        return nomeDoJogo;
     }

     /**
     *  @brief Construtor para objeto de um NomeDoJogo
     *
     *  @section Descrição
     *  Essa classe armazena um objeto de NomeDoJogo.
     */

     explicit NomeDoJogo(const string &nomeDoJogo){
        SetNomeDoJogo(nomeDoJogo);
     }

     /**
     *  @brief Construtor padrão da classe NomeDoJogo
     */

     NomeDoJogo() = default;
};

/**
 *  @brief Cidade.
 *  @author Lucas Dalle Rocha
 *
 *  @section Descrição
 *  Formato XXXXXXXXXXXXXXX . Cada X pode ser letra, espaço ou ponto.
 *  Pelos menos um caracter é letra. Não há espaços seguidos. Ponto é precedido
 *  por letra.
 */

class Cidade{
private:
    string cidade;
    const static int TAMANHO_MAX = 15;
    void Validar(string);

public:

    /**
     *  @brief Seta cidade para a classe Cidade
     */

     void SetCidade(string);

     /**
     *  @brief Retorna cidade da classe Cidade
     *
     *  @return cidade
     */

     string GetCidade() const{
        return cidade;
     }

     /**
     *  @brief Construtor para objeto de uma Cidade
     *
     *  @section Descrição
     *  Essa classe armazena um objeto de Cidade.
     */

     explicit Cidade(const string &cidade){
        SetCidade(cidade);
     }

     /**
     *  @brief Construtor padrão da classe Cidade
     */

     Cidade() = default;
};

/**
 *  @brief Estado.
 *  @author Lucas Dalle Rocha
 *
 *  @section Descrição
 *  AC, AL, AP, AM, BA, CE, DF, ES, GO, MA, MT, MS, MG, PA, PB, PR, PE,
 *  PI, RJ, RN, RS, RO, RR, SC, SP, SE, TO
 */

class Estado{
private:
    string estado;
    const static int TAMANHO = 2;
    void Validar(string);

public:

    /**
     *  @brief Seta estado para a classe Estado
     */

     void SetEstado(string);

     /**
     *  @brief Retorna estado da classe Estado
     *
     *  @return estado
     */

     string GetEstado() const{
        return estado;
     }

     /**
     *  @brief Construtor para objeto de um Estado
     *
     *  @section Descrição
     *  Essa classe armazena um objeto de Estado.
     */

     explicit Estado(const string &estado){
        SetEstado(estado);
     }

     /**
     *  @brief Construtor padrão da classe Estado
     */

     Estado() = default;
};

/**
 *  @brief Tipo.
 *  @author Lucas Dalle Rocha
 *
 *  @section Descrição
 *  Formato X onde X é dígito de 1 a 4. O dígito 1 identifica LOCAL, 2 identifica
 *  ESTADUAL, 3 identifica NACIONAL e 4 identifica INTERNACIONAL.
 */

class Tipo{
private:
    int tipo;
    const static int FLOOR = 1, CEIL = 4;
    void Validar(int);

public:

    /**
     *  @brief Seta tipo para a classe Tipo
     */

     void SetTipo(int);

     /**
     *  @brief Retorna tipo da classe Tipo
     *
     *  @return tipo
     */

     int GetTipo() const{
        return tipo;
     }

     /**
     *  @brief Construtor para objeto de um Tipo
     *
     *  @section Descrição
     *  Essa classe armazena um objeto de Tipo.
     */

     explicit Tipo(const int &tipo){
        SetTipo(tipo);
     }

     /**
     *  @brief Construtor padrão da classe Tipo
     */

     Tipo() = default;
};

/**
 *  @brief Código da Partida.
 *  @author Lucas Dalle Rocha
 *
 *  @section Descrição
 *  Formato XXX onde X é dígito (0 – 9).
 */

class CodigoDaPartida{
private:
    string codigoDaPartida;
    const static int TAMANHO = 3;
    void Validar(string);

public:

    /**
     *  @brief Seta codigoDaPartida para a classe CodigoDaPartida
     */

     void SetCodigoDaPartida(string);

     /**
     *  @brief Retorna codigoDaPartida da classe CodigoDaPartida
     *
     *  @return codigoDaPartida
     */

     string GetCodigoDaPartida() const{
        return codigoDaPartida;
     }

     /**
     *  @brief Construtor para objeto de um CodigoDaPartida
     *
     *  @section Descrição
     *  Essa classe armazena um objeto de CodigoDaPartida.
     */

     explicit CodigoDaPartida(const string &codigoDaPartida){
        SetCodigoDaPartida(codigoDaPartida);
     }

     /**
     *  @brief Construtor padrão da classe CodigoDaPartida
     */

     CodigoDaPartida() = default;
};

/**
 *  @brief Data.
 *  @author Lucas Dalle Rocha
 *
 *  @section Descrição
 *  Formato DD/MM/AA. DD é número de 1 e 31. MM é número de 1 e 12. AA é
 *  número de 00 a 99. O valor da data deve considerar a ocorrência de anos
 *  bissextos.
 */

class Data{
private:
    string data;
    const static int DIA_MIN = 1, DIA_MAX = 31, MES_MIN = 1, MES_MAX = 12, ANO_MIN = 0, ANO_MAX = 99;
    const static int DIA_FEVEREIRO = 28, PRIMEIRA_BARRA = 2, SEGUNDA_BARRA = 5, TAMANHO_MAX = 8;
    const static int MAIOR_NUM = 2, FEVEREIRO = 2, ABRIL = 4, JUNHO = 6, SETEMBRO = 9, NOVEMBRO = 11;
    void Validar(string);

public:

    /**
     *  @brief Seta data para a classe Data
     */

     void SetData(string);

     /**
     *  @brief Retorna data da classe Data
     *
     *  @return data
     */

     string GetData() const{
        return data;
     }

     /**
     *  @brief Construtor para objeto de uma Data
     *
     *  @section Descrição
     *  Essa classe armazena um objeto de Data.
     */

     explicit Data(const string &data){
        SetData(data);
     }

     /**
     *  @brief Construtor padrão da classe Data
     */

     Data() = default;
};

/**
 *  @brief Horário.
 *  @author Lucas Dalle Rocha
 *
 *  @section Descrição
 *  Formato HH:MM onde HH é número de 07 a 22 e MM é 00, 15, 30 ou 45.
 */

class Horario{
private:
    string horario;
    const static int TAMANHO = 5, DOIS_PONTOS = 2, MAIOR_NUM = 2;
    const static int HORA_MAX = 22, HORA_MIN = 7;
    void Validar(string);

public:

    /**
     *  @brief Seta horario para a classe Horario
     */

     void SetHorario(string);

     /**
     *  @brief Retorna horario da classe Horario
     *
     *  @return horario
     */

     string GetHorario() const{
        return horario;
     }

     /**
     *  @brief Construtor para objeto de um Horario
     *
     *  @section Descrição
     *  Essa classe armazena um objeto de Horario.
     */

     explicit Horario(const string &horario){
        SetHorario(horario);
     }

     /**
     *  @brief Construtor padrão da classe Horario
     */

     Horario() = default;
};

/**
 *  @brief Preço.
 *  @author Lucas Dalle Rocha
 *
 *  @section Descrição
 *  R$ 0,00 a R$ 1.000,00.
 */

class Preco{
private:
    float preco;
    const static int FLOOR = 0, CEIL = 1000;
    void Validar(float);

public:

    /**
     *  @brief Seta preco para a classe Preco
     */

     void SetPreco(float);

     /**
     *  @brief Retorna preco da classe Preco
     *
     *  @return preco
     */

     float GetPreco() const{
        return preco;
     }

     /**
     *  @brief Construtor para objeto de um Preco
     *
     *  @section Descrição
     *  Essa classe armazena um objeto de Preco.
     */

     explicit Preco(const float &preco){
        SetPreco(preco);
     }

     /**
     *  @brief Construtor padrão da classe Preco
     */

     Preco() = default;
};

/**
 *  @brief Disponibilidade.
 *  @author Lucas Dalle Rocha
 *
 *  @section Descrição
 *  0 a 250.
 */

class Disponibilidade{
private:
    int disponibilidade;
    const static int FLOOR = 0, CEIL = 250;
    void Validar(int);

public:

    /**
     *  @brief Seta disponibilidade para a classe Disponibilidade
     */

     void SetDisponibilidade(int);

     /**
     *  @brief Retorna disponibilidade da classe Disponibilidade
     *
     *  @return disponibilidade
     */

     int GetDisponibilidade() const{
        return disponibilidade;
     }

     /**
     *  @brief Construtor para objeto de uma Disponibilidade
     *
     *  @section Descrição
     *  Essa classe armazena um objeto de Disponibilidade.
     */

     explicit Disponibilidade(const int &disponibilidade){
        SetDisponibilidade(disponibilidade);
     }

     /**
     *  @brief Construtor padrão da classe Disponibilidade
     */

     Disponibilidade() = default;
};

/**
 *  @brief Código de ingresso.
 *  @author Lucas Dalle Rocha
 *
 *  @section Descrição
 *  Formato XXXXX onde X é dígito (0 – 9).
 */

class CodigoDeIngresso{
private:
    string codigoDeIngresso;
    const static int TAMANHO = 5;
    void Validar(string);

public:

    /**
     *  @brief Seta codigoDeIngresso para a classe codigoDeIngresso
     */

     void SetCodigoDeIngresso(string);

     /**
     *  @brief Retorna codigoDeIngresso da classe CodigoDeIngresso
     *
     *  @return codigoDeIngresso
     */

     string GetCodigoDeIngresso() const{
        return codigoDeIngresso;
     }

     /**
     *  @brief Construtor para objeto de um CodigoDeIngresso
     *
     *  @section Descrição
     *  Essa classe armazena um objeto de CodigoDeIngresso.
     */

     explicit CodigoDeIngresso(const string &codigoDeIngresso){
        SetCodigoDeIngresso(codigoDeIngresso);
     }

     /**
     *  @brief Construtor padrão da classe CodigoDeIngresso
     */

     CodigoDeIngresso() = default;
};

/**
 *  @brief Número de cartão de crédito.
 *  @author Lucas Dalle Rocha
 *
 *  @section Descrição
 *  Formato XXXXXXXXXXXXXXXX onde X é dígito (0 – 9). Número válido
 *  segundo o algoritmo de Luhn.
 */

class NumeroDeCartaoDeCredito{
private:
    string numeroDeCartaoDeCredito;
    const static int TAMANHO = 16;
    void Validar(string);

public:

    /**
     *  @brief Seta numeroDeCartaoDeCredito para a classe NumeroDeCartaoDeCredito
     */

     void SetNumeroDeCartaoDeCredito(string);

     /**
     *  @brief Retorna numeroDeCartaoDeCredito da classe NumeroDeCartaoDeCredito
     *
     *  @return numeroDeCartaoDeCredito
     */

     string GetNumeroDeCartaoDeCredito() const{
        return numeroDeCartaoDeCredito;
     }

     /**
     *  @brief Construtor para objeto de um NumeroDeCartaoDeCredito
     *
     *  @section Descrição
     *  Essa classe armazena um objeto de NumeroDeCartaoDeCredito.
     */

     explicit NumeroDeCartaoDeCredito(const string &numeroDeCartaoDeCredito){
        SetNumeroDeCartaoDeCredito(numeroDeCartaoDeCredito);
     }

      /**
      *  @brief Construtor padrão da classe NumeroDeCartaoDeCredito
      */

      NumeroDeCartaoDeCredito() = default;
};

/**
 *  @brief Código de segurança.
 *  @author Lucas Dalle Rocha
 *
 *  @section Descrição
 *  Formato XXX onde X é dígito (0 a 9).
 */

class CodigoDeSeguranca{
private:
    string codigoDeSeguranca;
    const static int TAMANHO = 3;
    void Validar(string);

public:

    /**
     *  @brief Seta codigoDeSeguranca para a classe CodigoDeSeguranca
     */

     void SetCodigoDeSeguranca(string);

     /**
     *  @brief Retorna codigoDeSeguranca da classe CodigoDeSeguranca
     *
     *  @return codigoDeSeguranca
     */

     string GetCodigoDeSeguranca() const{
        return codigoDeSeguranca;
     }

     /**
     *  @brief Construtor para objeto de um CodigoDeSeguranca
     *
     *  @section Descrição
     *  Essa classe armazena um objeto de CodigoDeSeguranca.
     */

     explicit CodigoDeSeguranca(const string &codigoDeSeguranca){
        SetCodigoDeSeguranca(codigoDeSeguranca);
     }

     /**
      *  @brief Construtor padrão da classe CodigoDeSeguranca
      */

      CodigoDeSeguranca() = default;
};

/**
 *  @brief Data de validade.
 *  @author Lucas Dalle Rocha
 *
 *  @section Descrição
 *  Formato XX/YY onde XX é número de 01 a 12 e YY é número de 00 a 99.
 */

class DataDeValidade{
private:
    string dataDeValidade;
    const static int TAMANHO = 5, BARRA = 2, MAIOR_NUM = 2;
    const static int MES_MIN = 1, MES_MAX = 12;
    const static int ANO_MIN = 0, ANO_MAX = 99;
    void Validar(string);

public:

    /**
     *  @brief Seta dataDeValidade para a classe DataDeValidade
     */

     void SetDataDeValidade(string);

     /**
     *  @brief Retorna dataDeValidade da classe DataDeValidade
     *
     *  @return dataDeValidade
     */

     string GetDataDeValidade() const{
        return dataDeValidade;
     }

     /**
     *  @brief Construtor para objeto de uma DataDeValidade
     *
     *  @section Descrição
     *  Essa classe armazena um objeto de DataDeValidade.
     */

     explicit DataDeValidade(const string &dataDeValidade){
        SetDataDeValidade(dataDeValidade);
     }

     /**
      *  @brief Construtor padrão da classe DataDeValidade
      */

      DataDeValidade() = default;
};

#endif // DOMINIOS_H
