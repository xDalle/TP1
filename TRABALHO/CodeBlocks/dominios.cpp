#include <iostream>
#include <stdlib.h>
#include <stdexcept>
#include "dominios.h"

using namespace std;

/* -------------------------------------------------- CPF -------------------------------------------------- */

void CPF::SetCPF(string cpf){
    Validar(cpf);
    this->cpf = cpf;
}

void CPF::Validar(string cpf){
    int temp;
    int lenght = cpf.size();
    int weight = 10;
    int sum = 0;
    int dv1, dv2;
    int rem;

    if(lenght != TAMANHO){
        throw invalid_argument("CPF - Formato invalido.\n");
    }

    if((cpf[PONTO_UM] != '.') || (cpf[PONTO_DOIS] != '.') || (cpf[TRACO] != '-')){
        throw invalid_argument("CPF - Formato invalido.\n");
    }

    for(int i = 0; i < lenght; i++){
        if((cpf[i] == '.') || (cpf[i] == '-')){
            continue;
        }
        if(cpf[i] < '0' && cpf[i] > '9'){
            throw invalid_argument("CPF - Digito nao identificado.\n");
        }
    }

    /* Teste para dígito verificador */
    for(int i = 0; i < lenght-3; i++){
        if(cpf[i] == '.'){
            continue;
        }
        temp = cpf[i] - 48; /* Relação número/caractere pela tabela ascii */
        if(temp != 0)
        sum += temp * weight;
        weight--;
    }
    rem = sum % 11;
    if(rem == 0 || rem == 1){
        dv1 = 0;
    }else{
        dv1 = 11 - rem;
    }

    sum = 0; /* Reseta somatório */
    weight = 11; /* Para verificar o segundo dígito */

    for(int i = 0; i < lenght-3; i++){
        if(cpf[i] == '.'){
            continue;
        }
        temp = cpf[i] - 48; /* Relação número/caractere pela tabela ascii */
        sum += temp * weight;
        weight--;
    }

    sum+= dv1 * 2;
    rem = sum % 11;
    if(rem == 0 || rem == 1){
        dv2 = 0;
    }else{
        dv2 = 11 - rem;
    }

	if((cpf[lenght-2] - 48) != dv1 || (cpf[lenght-1] - 48) != dv2){
        throw invalid_argument("CPF - Digito verificador invalido.\n");
	}
}

/* -------------------------------------------------- Senha -------------------------------------------------- */

void Senha::SetSenha(string senha){
    Validar(senha);
    this->senha = senha;
}

void Senha::Validar(string senha){
    bool maiuscula = false, minuscula = false, digito = false;
    int lenght = senha.size();

    if(lenght > TAMANHO_MAX){
        throw invalid_argument("Senha - Extrapola numero maximo de caracteres.\n");
    }

    for(int i = 0; i < lenght; i++){
        if(senha[i] >= 'a' && senha[i] <= 'z'){
            minuscula = true;
        }
        if(senha[i] >= 'A' && senha[i] <= 'Z'){
            maiuscula = true;
        }
        if(senha[i] >= '0' && senha[i] <= '9'){
            digito = true;
        }
    }

    if(maiuscula == false || minuscula == false || digito == false){
        throw invalid_argument("Senha - Deve possuir no minimo uma letra maiuscula, uma minuscula e um digito.\n");
    }

    for(int i = 0; i < lenght-1; i++){
        for(int j = i+1; j < lenght; j++){
            if(senha[i] == senha[j]){
                throw invalid_argument("Senha - A senha possui caracteres repetidos.\n");
            }
        }
    }
}

/* -------------------------------------------------- Codigo do jogo -------------------------------------------------- */

void CodigoDoJogo::SetCodigoDoJogo(string codigoDoJogo){
    Validar(codigoDoJogo);
    this->codigoDoJogo = codigoDoJogo;
}

void CodigoDoJogo::Validar(string codigoDoJogo){
    int lenght = codigoDoJogo.size();

    if(lenght != TAMANHO){
        throw invalid_argument("Codigo do jogo - Formato invalido.\n");
    }

    for(int i = 0; i < lenght; i++){
        if(codigoDoJogo[i] < '0' || codigoDoJogo[i] > '9'){
            throw invalid_argument("Codigo do jogo - Deve possuir apenas digitos de 0-9.\n");
        }
    }
}

/* -------------------------------------------------- Nome do jogo -------------------------------------------------- */

void NomeDoJogo::SetNomeDoJogo(string nomeDoJogo){
    Validar(nomeDoJogo);
    this->nomeDoJogo = nomeDoJogo;
}

void NomeDoJogo::Validar(string nomeDoJogo){
    bool letra = false;
    int lenght = nomeDoJogo.size();

    if(lenght > TAMANHO_MAX){
        throw invalid_argument("Nome do jogo - Extrapola limite de caracteres.\n");
    }

    for(int i = 0; i < lenght; i++){
        if(nomeDoJogo[i] == ' ' && nomeDoJogo[i+1] == ' ' && i != lenght-1){
            throw invalid_argument("Nome do jogo - Nao deve conter espacos em sequencia.\n");
        }
        if((nomeDoJogo[i] >= 'a' && nomeDoJogo[i] <= 'z') || (nomeDoJogo[i] >= 'A' && nomeDoJogo[i] <= 'Z')){
            letra = true;
        }
    }

    if(letra == false){
        throw invalid_argument("Nome do jogo - Nao possui letra.\n");
    }

    for(int i = 0; i < lenght; i++){
        if(nomeDoJogo[i] != ' '){
            if(nomeDoJogo[i] >= '0' && nomeDoJogo[i] <= '9'){
                continue;
            }else if(nomeDoJogo[i] >= 'A' && nomeDoJogo[i] <= 'Z'){
                continue;
            }else if(nomeDoJogo[i] >= 'a' && nomeDoJogo[i] <= 'z'){
                continue;
            }else{
                throw invalid_argument("Nome do jogo - Deve conter apenas letras, digitos ou espaco.\n");
            }
        }
    }
}

/* -------------------------------------------------- Cidade -------------------------------------------------- */

void Cidade::SetCidade(string cidade){
    Validar(cidade);
    this->cidade = cidade;
}

void Cidade::Validar(string cidade){
    bool letra = false;
    int lenght = cidade.size();

    if(lenght > TAMANHO_MAX){
        throw invalid_argument("Cidade - Extrapola limite de caracteres.\n");
    }

    for(int i = 0; i < lenght; i++){
        if(cidade[i] == ' ' && cidade[i+1] == ' ' && i != lenght-1){
            throw invalid_argument("Cidade - Nao deve conter espacos em sequencia.\n");
        }
        if((cidade[i] >= 'a' && cidade[i] <= 'z') || (cidade[i] >= 'A' && cidade[i] <= 'Z')){
            letra = true;
        }
    }

    if(letra == false){
        throw invalid_argument("Cidade - Nao possui letra.\n");
    }

    for(int i = 0; i < lenght; i++){
        if(cidade[i] == '.'){
            if(i == 0){
                throw invalid_argument("Cidade - Ponto deve ser precedido por letra.\n");
            }else if(cidade[i-1] >= 'A' && cidade[i-1] <= 'Z'){
                continue;
            }else if(cidade[i-1] >= 'a' && cidade[i-1] <= 'z'){
                continue;
            }
            if(i != 0){
                throw invalid_argument("Cidade - Ponto deve ser precedido por letra.\n");
            }
        }
    }

    for(int i = 0; i < lenght; i++){
        if(cidade[i] != ' ' && cidade[i] != '.'){
            if(cidade[i] >= 'A' && cidade[i] <= 'Z'){
                continue;
            }else if(cidade[i] >= 'a' && cidade[i] <= 'z'){
                continue;
            }else{
                throw invalid_argument("Cidade - Deve conter apenas letras, ponto ou espaco.\n");
            }
        }
    }
}

/* -------------------------------------------------- Estado -------------------------------------------------- */

void Estado::SetEstado(string estado){
    Validar(estado);
    this->estado = estado;
}

void Estado::Validar(string estado){
    int lenght = estado.size();

    if(lenght != TAMANHO){
        throw invalid_argument("Estado - Formato invalido, insira duas letras apenas.\n");
    }

    if(estado != "AC" && estado != "AL" && estado != "AP" && estado != "AM" && estado != "BA" && estado != "CE" && estado != "DF" &&
       estado != "ES" && estado != "GO" && estado != "MA" && estado != "MT" && estado != "MS" && estado != "MG" && estado != "PA" &&
       estado != "PB" && estado != "PR" && estado != "PE" && estado != "PI" && estado != "RJ" && estado != "RN" && estado != "RS" &&
       estado != "RO" && estado != "RR" && estado != "SC" && estado != "SP" && estado != "SE" && estado != "TO"){
        throw invalid_argument("Estado - Nome invalido.\n");
    }
}

/* -------------------------------------------------- Tipo -------------------------------------------------- */

void Tipo::SetTipo(int tipo){
    Validar(tipo);
    this->tipo = tipo;
}

void Tipo::Validar(int tipo){
    if(tipo < FLOOR || tipo > CEIL){
        throw invalid_argument("Tipo - Tipo de jogo inexistente");
    }
}

/* -------------------------------------------------- Código da partida -------------------------------------------------- */

void CodigoDaPartida::SetCodigoDaPartida(string codigoDaPartida){
    Validar(codigoDaPartida);
    this->codigoDaPartida = codigoDaPartida;
}

void CodigoDaPartida::Validar(string codigoDaPartida){
    int lenght = codigoDaPartida.size();

    if(lenght != TAMANHO){
        throw invalid_argument("Codigo da partida - Formato invalido.\n");
    }

    for(int i = 0; i < lenght; i++){
        if(codigoDaPartida[i] < '0' || codigoDaPartida[i] > '9'){
            throw invalid_argument("Codigo da partida - Formato invalido.\n");
        }
    }
}

/* -------------------------------------------------- Data -------------------------------------------------- */

void Data::SetData(string data){
    Validar(data);
    this->data = data;
}

void Data::Validar(string data){
    bool bissexto = false;
    int lenght = data.size();
    int diaInt;
    int mesInt;
    int anoInt;
    char aux[MAIOR_NUM];
    if(lenght > TAMANHO_MAX){
        throw invalid_argument("Data - Extrapola numero maximo de caracteres.\n");
    }

    if(data[PRIMEIRA_BARRA] != '/' || data[SEGUNDA_BARRA] != '/'){
        throw invalid_argument("Data - Formato invalido.\n");
    }

    for(int i = 0; i < PRIMEIRA_BARRA; i++){
        aux[i] = data[i];
    }
    diaInt = atoi(aux);

    for(int i = PRIMEIRA_BARRA+1, j = 0; i < SEGUNDA_BARRA; i++, j++){
        aux[j] = data[i];
    }
    mesInt = atoi(aux);

    for(int i = SEGUNDA_BARRA+1, j = 0; i < lenght; i++, j++){
        aux[j] = data[i];
    }
    anoInt = atoi(aux);

    anoInt+= 2000;  //Para realizar os calculos de ano bissexto

    if(anoInt % 4 == 0){
        if(anoInt % 100 != 0){
            bissexto = true;
        }
    }else{
        if(anoInt % 400 == 0){
            bissexto = true;
        }
    }

    if(diaInt < DIA_MIN || diaInt > DIA_MAX || mesInt < MES_MIN ||
       mesInt > MES_MAX || anoInt < ANO_MIN || anoInt > ANO_MAX+2000){
            throw invalid_argument("Data - Invalida.\n");
       }

    if(diaInt > 30 && (mesInt == ABRIL || mesInt == JUNHO || mesInt == SETEMBRO || mesInt == NOVEMBRO)){
        throw invalid_argument("Data - Dia inválido.\n");
    }

    if(mesInt == FEVEREIRO){
        if(bissexto == false){
            if(diaInt > DIA_FEVEREIRO){
                throw invalid_argument("Data - Dia do mes de fevereiro extrapola limite (28).\n");
            }
        }else{
            if(diaInt > DIA_FEVEREIRO+1){
                throw invalid_argument("Data - Dia do mes de fevereiro extrapola limite (29).\n");
            }
        }
    }
}

/* -------------------------------------------------- Horário -------------------------------------------------- */

void Horario::SetHorario(string horario){
    Validar(horario);
    this->horario = horario;
}

void Horario::Validar(string horario){
    int lenght = horario.size();
    int horasInt, minutosInt;
    char aux[MAIOR_NUM];

    if(lenght != TAMANHO || horario[DOIS_PONTOS] != ':'){
        throw invalid_argument("Horario - Formato invalido.\n");
    }

    for(int i = 0; i < TAMANHO; i++){
        if(horario[i] == ':'){
            continue;
        }else{
            if(horario[i] < '0' || horario[i] > '9'){
                throw invalid_argument("Horario - Formato invalido.\n");
            }
        }
    }

    for(int i = 0; i < DOIS_PONTOS; i++){
        aux[i] = horario[i];
    }

    horasInt = atoi(aux);

    for(int i = DOIS_PONTOS+1, j = 0; i < TAMANHO; i++, j++){
        aux[j] = horario[i];
    }

    minutosInt = atoi(aux);

    if(horasInt < HORA_MIN || horasInt > HORA_MAX){
        throw invalid_argument("Horario - Horas invalida.\n");
    }

    if(minutosInt != 0 && minutosInt != 15 && minutosInt != 30 && minutosInt != 45){
        throw invalid_argument("Horario - Minutos invalido.\n");
    }
}

/* -------------------------------------------------- Preço -------------------------------------------------- */

void Preco::SetPreco(float preco){
    Validar(preco);
    this->preco = preco;
}

void Preco::Validar(float preco){
    if(preco < FLOOR){
        throw invalid_argument("Preco - Abaixo do limite inferior.\n");
    }
    if(preco > CEIL){
        throw invalid_argument("Preco - Acima do limite superior.\n");
    }
}

/* -------------------------------------------------- Disponibilidade -------------------------------------------------- */

void Disponibilidade::SetDisponibilidade(int disponibilidade){
    Validar(disponibilidade);
    this->disponibilidade = disponibilidade;
}

void Disponibilidade::Validar(int disponibilidade){
    if(disponibilidade < FLOOR){
        throw invalid_argument("Disponibilidade - Abaixo do limite inferior.\n");
    }
    if(disponibilidade > CEIL){
        throw invalid_argument("Disponibilidade - Acima do limite superior.\n");
    }
}

/* -------------------------------------------------- Código de ingresso -------------------------------------------------- */

void CodigoDeIngresso::SetCodigoDeIngresso(string codigoDeIngresso){
    Validar(codigoDeIngresso);
    this->codigoDeIngresso = codigoDeIngresso;
}

void CodigoDeIngresso::Validar(string codigoDeIngresso){
    int lenght = codigoDeIngresso.size();

    if(lenght != TAMANHO){
        throw invalid_argument("Codigo de ingresso - Formato invalido.\n");
    }

    for(int i = 0; i < TAMANHO; i++){
        if(codigoDeIngresso[i] < '0' || codigoDeIngresso[i] > '9'){
            throw invalid_argument("Codigo de ingresso - Deve possuir apenas digitos de 0-9.\n");
        }
    }
}

/* -------------------------------------------------- Número de cartão de crédito -------------------------------------------------- */

void NumeroDeCartaoDeCredito::SetNumeroDeCartaoDeCredito(string numeroDeCartaoDeCredito){
    Validar(numeroDeCartaoDeCredito);
    this->numeroDeCartaoDeCredito = numeroDeCartaoDeCredito;
}

void NumeroDeCartaoDeCredito::Validar(string numeroDeCartaoDeCredito){
    int sum = 0, dv, digito;
    int lenght = numeroDeCartaoDeCredito.size();

    if(lenght != TAMANHO){
        throw invalid_argument("Numero do cartao de credito - Formato invalido.\n");
    }

    for(int i = 0; i < TAMANHO; i++){
        if(numeroDeCartaoDeCredito[i] < '0' || numeroDeCartaoDeCredito[i] > '9'){
            throw invalid_argument("Numero do cartao de credito - Deve possuir apenas digitos de 0-9.\n");
        }
    }

    /* -- Aplicação do algoritmo de Luhn -- */
    /* --    Utilizando a tabela ASCII   -- */

    for(int i = lenght - 1; i >= 0; i--){
        if(i%2 == 0){
            digito = numeroDeCartaoDeCredito[i] - 48;
            digito = digito * 2;
            if(digito > 9){
                numeroDeCartaoDeCredito[i] = digito - 9 + 48;
            }else{
                numeroDeCartaoDeCredito[i] = digito + 48;
            }
        }
    }

    for(int i = 0; i < lenght - 1; i++){
        digito = numeroDeCartaoDeCredito[i] - 48;
        sum+= digito;
    }

    digito = sum%10;
    dv = 10 - digito;

    if((numeroDeCartaoDeCredito[lenght-1] - 48) != dv){
        throw invalid_argument("Numero do cartao de credito - invalido.\n");
    }
}

/* -------------------------------------------------- Código de segurança -------------------------------------------------- */

void CodigoDeSeguranca::SetCodigoDeSeguranca(string codigoDeSeguranca){
    Validar(codigoDeSeguranca);
    this->codigoDeSeguranca = codigoDeSeguranca;
}

void CodigoDeSeguranca::Validar(string codigoDeSeguranca){
    int lenght = codigoDeSeguranca.size();

    if(lenght != TAMANHO){
        throw invalid_argument("Codigo de seguranca - Formato invalido.\n");
    }

    for(int i = 0; i < lenght; i++){
        if(codigoDeSeguranca[i] < '0' || codigoDeSeguranca[i] > '9'){
            throw invalid_argument("Codigo de seguranca - Formato invalido.\n");
        }
    }
}

/* -------------------------------------------------- Data de validade -------------------------------------------------- */

void DataDeValidade::SetDataDeValidade(string dataDeValidade){
    Validar(dataDeValidade);
    this->dataDeValidade = dataDeValidade;
}

void DataDeValidade::Validar(string dataDeValidade){
    int lenght = dataDeValidade.size();
    int mesInt, anoInt;
    char aux[MAIOR_NUM];
    if(lenght != TAMANHO || dataDeValidade[BARRA] != '/'){
        throw invalid_argument("Data de validade - Formato invalido.");
    }

    for(int i = 0; i < TAMANHO; i++){
        if(i == BARRA){
            continue;
        }else if(dataDeValidade[i] < '0' || dataDeValidade[i] > '9'){
            throw invalid_argument("Data de validade - Deve possuir apenas digitos de 0-9.\n");
        }
    }

    for(int i = 0; i < BARRA; i++){
        aux[i] = dataDeValidade[i];
    }

    mesInt = atoi(aux);

    for(int i = BARRA+1, j = 0; i < TAMANHO; i++, j++){
        aux[j] = dataDeValidade[i];
    }

    anoInt = atoi(aux);

    if(mesInt < MES_MIN || mesInt > MES_MAX){
        throw invalid_argument("Data de validade - Mes invalido.\n");
    }

    if(anoInt < ANO_MIN || anoInt > ANO_MAX){
        throw invalid_argument("Data de validade - Ano invalido.\n");
    }
}
