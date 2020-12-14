/**
 * @file entidades.h
 * @author Lucas Dalle Rocha
 * @date 27 de Setembro de 2019
 *
 * @brief Descrição de todas as classes de domínio.
 *
 * Neste arquivo estão as classes de entidade, isto é, as classes que armazenarão os dados integrados às classes de entidade.
 */

#ifndef ENTIDADES_H
#define ENTIDADES_H

#include "dominios.h"
using namespace std;

/**
 *  @brief Usuário.
 *  @author Lucas Dalle Rocha
 *
 *  @section Descrição
 *  Essa classe armazena um objeto de cpf e um de senha.
 */

class Usuario{
private:
    CPF cpf;
    Senha senha;

public:

    /**
     *  @brief Construtor para objeto de um usuário
     *
     *  @section Descrição
     *  Essa classe armazena um objeto de CPF e um de Senha.
     */

    Usuario(CPF &cpf, Senha &senha){
        SetCPF(cpf);
        SetSenha(senha);
    }

    /**
     *  @brief Construtor padrão da classe Usuário
     */

    Usuario() = default;

    /**
     *  @brief Seta cpf do Usuário para a classe CPF
     */

    void SetCPF(const CPF &cpf){
        this->cpf = cpf;
    }

    /**
     *  @brief Retorna cpf do Usuário da classe CPF
     *
     *  @return cpf
     */

    CPF GetCPF() const{
        return cpf;
    }

    /**
     *  @brief Seta senha do Usuário para a classe Senha
     */

    void SetSenha(const Senha &senha){
        this->senha = senha;
    }

    /**
     *  @brief Retorna senha do Usuário da classe Senha
     *
     *  @return senha
     */

    Senha GetSenha() const{
        return senha;
    }
};

/**
 *  @brief Jogo.
 *  @author Lucas Dalle Rocha
 *
 *  @section Descrição
 *  Essa classe armazena um objeto de código do evento, um de nome do evento, um de cidade, um de estado e um de tipo.
 */

class Jogo{
private:
    CodigoDoJogo codigoDoJogo;
    NomeDoJogo nomeDoJogo;
    Cidade cidade;
    Estado estado;
    Tipo tipo;

public:

   /**
    *  @brief Construtor para objeto de um jogo
    *
    *  @section Descrição
    *  Essa classe armazena um objeto de CodigoDoJogo, um de NomeDoJogo, um de Cidade, um de Estado e um de Tipo.
    */

    Jogo(CodigoDoJogo &codigo, NomeDoJogo &nome, Cidade &cidade, Estado &estado, Tipo &tipo){
        SetCodigoDoJogo(codigo);
        SetNomeDoJogo(nome);
        SetCidade(cidade);
        SetEstado(estado);
        SetTipo(tipo);
    }

    /**
    *  @brief Construtor padrão da classe Jogo
    */

    Jogo() = default;

    /**
     *  @brief Seta codigoDoJogo do Jogo para a classe CodigoDoJogo
     */

    void SetCodigoDoJogo(const CodigoDoJogo &codigoDoJogo){
        this->codigoDoJogo = codigoDoJogo;
    }

    /**
     *  @brief Retorna codigoDoJogo do Jogo da classe CodigoDoJogo
     *
     *  @return codigoDoJogo
     */

    CodigoDoJogo GetCodigoDoJogo() const{
        return codigoDoJogo;
    }

    /**
     *  @brief Seta nomeDoJogo do Jogo para a classe NomeDoJogo
     */

    void SetNomeDoJogo(const NomeDoJogo &nomeDoJogo){
        this->nomeDoJogo = nomeDoJogo;
    }

    /**
     *  @brief Retorna nomeDoJogo do Jogo da classe NomeDoJogo
     *
     *  @return nomeDoJogo
     */

    NomeDoJogo GetNomeDoJogo() const{
        return nomeDoJogo;
    }

    /**
     *  @brief Seta cidade do Jogo para a classe Cidade
     */

    void SetCidade(const Cidade &cidade){
        this->cidade = cidade;
    }

    /**
     *  @brief Retorna cidade do Jogo da classe Cidade
     *
     *  @return cidade
     */

    Cidade GetCidade() const{
        return cidade;
    }

    /**
     *  @brief Seta estado do Jogo para a classe Estado
     */

     void SetEstado(const Estado &estado){
        this->estado = estado;
     }

     /**
     *  @brief Retorna estado do Jogo da classe Estado
     *
     *  @return estado
     */

     Estado GetEstado() const{
        return estado;
     }

     /**
     *  @brief Seta tipo do Jogo para a classe Tipo
     */

     void SetTipo(const Tipo &tipo){
        this->tipo = tipo;
     }

     /**
     *  @brief Retorna tipo do Jogo da classe Tipo
     *
     *  @return tipo
     */

     Tipo GetTipo() const{
        return tipo;
     }
};

/**
 *  @brief Partida.
 *  @author Lucas Dalle Rocha
 *
 *  @section Descrição
 *  Essa classe armazena um objeto de código da partida, um de nome da partida, um de cidade, um de estado e um de tipo.
 */

class Partida{
private:
    CodigoDaPartida codigoDaPartida;
    Data data;
    Horario horario;
    Preco preco;
    Disponibilidade disponibilidade;

public:

    /**
    *  @brief Construtor para objeto de um jogo
    *
    *  @section Descrição
    *  Essa classe armazena um objeto de CodigoDaPartida, um de Data, um de Horario, um de Preco e um de Disponibilidade.
    */

    Partida(CodigoDaPartida &codigo, Data &data, Horario &horario, Preco &preco, Disponibilidade &disponibilidade){
        SetCodigoDaPartida(codigo);
        SetData(data);
        SetHorario(horario);
        SetPreco(preco);
        SetDisponibilidade(disponibilidade);
    }

    /**
    *  @brief Construtor padrão da classe Partida
    */

    Partida() = default;

    /**
     *  @brief Seta codigoDaPartida da Partida para a classe CodigoDaPartida
     */

     void SetCodigoDaPartida(const CodigoDaPartida &codigoDaPartida){
        this->codigoDaPartida = codigoDaPartida;
     }

     /**
     *  @brief Retorna codigoDaPartida da Partida da classe CodigoDaPartida
     *
     *  @return codigoDaPartida
     */

     CodigoDaPartida GetCodigoDaPartida() const{
        return codigoDaPartida;
     }

     /**
     *  @brief Seta data da Partida para a classe Data
     */

     void SetData(const Data &data){
        this->data = data;
     }

     /**
     *  @brief Retorna data da Partida da classe Data
     *
     *  @return data
     */

     Data GetData() const{
        return data;
     }

     /**
     *  @brief Seta horario da Partida para a classe Horario
     */

     void SetHorario(const Horario &horario){
        this->horario = horario;
     }

     /**
     *  @brief Retorna horario da Partida da classe Horario
     *
     *  @return horario
     */

     Horario GetHorario() const{
        return horario;
     }

     /**
     *  @brief Seta preco da Partida para a classe Preco
     */

     void SetPreco(const Preco &preco){
        this->preco = preco;
     }

     /**
     *  @brief Retorna preco da Partida da classe Preco
     *
     *  @return preco
     */

     Preco GetPreco() const{
        return preco;
     }

     /**
     *  @brief Seta disponibilidade da Partida para a classe Disponibilidade
     */

     void SetDisponibilidade(const Disponibilidade &disponibilidade){
        this->disponibilidade = disponibilidade;
     }

     /**
     *  @brief Retorna disponibilidade da Partida da classe Dispinibilidade
     *
     *  @return disponibilidade
     */

     Disponibilidade GetDisponibilidade() const{
        return disponibilidade;
     }
};

/**
 *  @brief Ingresso.
 *  @author Lucas Dalle Rocha
 *
 *  @section Descrição
 *  Essa classe armazena um objeto de código de ingresso.
 */

class Ingresso{
private:
    CodigoDeIngresso codigoDeIngresso;

public:

    /**
    *  @brief Construtor para objeto de um ingresso
    *
    *  @section Descrição
    *  Essa classe armazena um objeto de CodigoDeIngresso.
    */

    Ingresso(CodigoDeIngresso &codigo){
        SetCodigoDeIngresso(codigo);
    }

    /**
    *  @brief Construtor padrão da classe Ingresso
    */

    Ingresso() = default;

    /**
     *  @brief Seta codigoDeIngresso do Ingresso para a classe CodigoDeIngresso
     */

     void SetCodigoDeIngresso(const CodigoDeIngresso &codigoDeIngresso){
        this->codigoDeIngresso = codigoDeIngresso;
     }

     /**
     *  @brief Retorna codigoDeIngresso do Ingresso da classe CodigoDeIngresso
     *
     *  @return codigoDeIngresso
     */

     CodigoDeIngresso GetCodigoDeIngresso() const{
        return codigoDeIngresso;
     }
};

 /**
 *  @brief Cartão de crédito.
 *  @author Lucas Dalle Rocha
 *
 *  @section Descrição
 *  Essa classe armazena um objeto de número do cartão de crédito, um do código de segurança e um da data de validade.
 */

class CartaoDeCredito{
private:
    NumeroDeCartaoDeCredito numeroDeCartaoDeCredito;
    CodigoDeSeguranca codigoDeSeguranca;
    DataDeValidade dataDeValidade;

public:

    /**
    *  @brief Construtor para objeto de um cartão de crédito
    *
    *  @section Descrição
    *  Essa classe armazena um objeto de NumeroDeCartaoDeCredito, um de CodigoDeSeguranca e um de DataDeValidade.
    */

    CartaoDeCredito(NumeroDeCartaoDeCredito &numeroDeCartaoDeCredito, CodigoDeSeguranca &codigoDeSeguranca, DataDeValidade &dataDeValidade){
        SetNumeroDeCartaoDeCredito(numeroDeCartaoDeCredito);
        SetCodigoDeSeguranca(codigoDeSeguranca);
        SetDataDeValidade(dataDeValidade);
    }

    /**
    *  @brief Construtor padrão da classe CartaoDeCredito
    */

    CartaoDeCredito() = default;

    /**
     *  @brief Seta numeroDeCartaoDeCredito do CartaoDeCredito para a classe NumeroDeCartaoDeCredito
     */

     void SetNumeroDeCartaoDeCredito(const NumeroDeCartaoDeCredito &numeroDeCartaoDeCredito){
        this->numeroDeCartaoDeCredito = numeroDeCartaoDeCredito;
     }

     /**
     *  @brief Retorna cartaoDeCredito do CartaoDeCredito da classe NumeroDeCartaoDeCredito
     *
     *  @return cartaoDeCredito
     */

     NumeroDeCartaoDeCredito GetNumeroDeCartaoDeCredito() const{
        return numeroDeCartaoDeCredito;
     }

     /**
     *  @brief Seta codigoDeSeguranca do CartaoDeCredito para a classe CodigoDeSeguranca
     */

     void SetCodigoDeSeguranca(const CodigoDeSeguranca &codigoDeSeguranca){
        this->codigoDeSeguranca = codigoDeSeguranca;
     }

     /**
     *  @brief Retorna codigoDeSeguranca do CartaoDeCredito da classe CodigoDeSeguranca
     *
     *  @return codigoDeSeguranca
     */

     CodigoDeSeguranca GetCodigoDeSeguranca() const{
        return codigoDeSeguranca;
     }

     /**
     *  @brief Seta dataDeValidade do CartaoDeCredito para a classe DataDeValidade
     */

     void SetDataDeValidade(const DataDeValidade &dataDeValidade){
        this->dataDeValidade = dataDeValidade;
     }

     /**
     *  @brief Retorna dataDeValidade do CartaoDeCredito da classe DataDeValidade
     *
     *  @return dataDeValidade
     */

     DataDeValidade GetDataDeValidade() const{
        return dataDeValidade;
     }
};

#endif // ENTIDADES_H
