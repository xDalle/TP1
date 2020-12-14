#include "testes-dominios.h"
#include <iostream>
#include <exception>

using namespace std;

/* -------------------------------------------------- CPF -------------------------------------------------- */

void TUCPF::TestarCenarioFalha(){
    try{
        cpf->SetCPF(cpfInvalidoTAM);
        estado = false;
        cpf->SetCPF(cpfInvalidoDIG);
        estado = false;
        cpf->SetCPF(cpfInvalidoLET);
        estado = false;
        cpf->SetCPF(cpfInvalidoDV);
        estado = false;
    }catch(exception &e){
        return;
    }
}

void TUCPF::TestarCenarioSucesso(){
    try{
        cpf->SetCPF(cpfValido);
        if(cpf->GetCPF() != cpfValido){
            estado = false;
        }
    }catch(exception &e){
        estado = false;
        cout << "\n" << e.what() << endl;
    }
}

/* -------------------------------------------------- Senha -------------------------------------------------- */

void TUSenha::TestarCenarioFalha(){
    try{
        senha->SetSenha(senhaInvalidaTAM);
        estado = false;
        senha->SetSenha(senhaInvalidaDIG);
        estado = false;
        senha->SetSenha(senhaInvalidaREP);
        estado = false;
    }catch(exception &e){
        return;
    }
}

void TUSenha::TestarCenarioSucesso(){
    try{
        senha->SetSenha(senhaValida);
        if(senha->GetSenha() != senhaValida){
            estado = false;
        }
    }catch(exception &e){
        estado = false;
        cout << "\n" << e.what() << endl;
    }
}

/* -------------------------------------------------- Código Do Jogo -------------------------------------------------- */

void TUCodigoDoJogo::TestarCenarioFalha(){
    try{
        codigoDoJogo->SetCodigoDoJogo(codigoDoJogoInvalidoTAM);
        estado = false;
        codigoDoJogo->SetCodigoDoJogo(codigoDoJogoInvalidoDIG);
        estado = false;
    }catch(exception &e){
        return;
    }
}

void TUCodigoDoJogo::TestarCenarioSucesso(){
    try{
        codigoDoJogo->SetCodigoDoJogo(codigoDoJogoValido);
        if(codigoDoJogo->GetCodigoDoJogo() != codigoDoJogoValido){
            estado = false;
        }
    }catch(exception &e){
        estado = false;
        cout << "\n" << e.what() << endl;
    }
}

/* -------------------------------------------------- Nome Do Jogo -------------------------------------------------- */

void TUNomeDoJogo::TestarCenarioFalha(){
    try{
        nomeDoJogo->SetNomeDoJogo(nomeDoJogoInvalidoTAM);
        estado = false;
        nomeDoJogo->SetNomeDoJogo(nomeDoJogoInvalidoESP);
        estado = false;
        nomeDoJogo->SetNomeDoJogo(nomeDoJogoInvalidoLET);
        estado = false;
        nomeDoJogo->SetNomeDoJogo(nomeDoJogoInvalidoCAR);
        estado = false;
    }catch(exception &e){
        return;
    }
}

void TUNomeDoJogo::TestarCenarioSucesso(){
    try{
        nomeDoJogo->SetNomeDoJogo(nomeDoJogoValido);
        if(nomeDoJogo->GetNomeDoJogo() != nomeDoJogoValido){
            estado = false;
        }
    }catch(exception &e){
        estado = false;
        cout << "\n" << e.what() << endl;
    }
}

/* -------------------------------------------------- Cidade -------------------------------------------------- */

void TUCidade::TestarCenarioFalha(){
    try{
        cidade->SetCidade(cidadeInvalidaTAM);
        estado = false;
        cidade->SetCidade(cidadeInvalidaESP);
        estado = false;
        cidade->SetCidade(cidadeInvalidaLET);
        estado = false;
        cidade->SetCidade(cidadeInvalidaPON);
        estado = false;
        cidade->SetCidade(cidadeInvalidaCAR);
        estado = false;
    }catch(exception &e){
        return;
    }
}

void TUCidade::TestarCenarioSucesso(){
    try{
        cidade->SetCidade(cidadeValida);
        if(cidade->GetCidade() != cidadeValida){
            estado = false;
        }
    }catch(exception &e){
        estado = false;
        cout << "\n" << e.what() << endl;
    }
}

/* -------------------------------------------------- Estado -------------------------------------------------- */

void TUEstado::TestarCenarioFalha(){
    try{
        k_estado->SetEstado(k_estadoInvalidoTAM);
        estado = false;
        k_estado->SetEstado(k_estadoInvalidoINE);
        estado = false;
    }catch(exception &e){
        return;
    }
}

void TUEstado::TestarCenarioSucesso(){
    try{
        k_estado->SetEstado(k_estadoValido);
        if(k_estado->GetEstado() != k_estadoValido){
            estado = false;
        }
    }catch(exception &e){
        estado = false;
        cout << "\n" << e.what() << endl;
    }
}

/* -------------------------------------------------- Tipo -------------------------------------------------- */

void TUTipo::TestarCenarioFalha(){
    try{
        tipo->SetTipo(tipoInvalidoGRE);
        estado = false;
        tipo->SetTipo(tipoInvalidoLES);
        estado = false;
    }catch(exception &e){
        return;
    }
}

void TUTipo::TestarCenarioSucesso(){
    try{
        tipo->SetTipo(tipoValido);
        if(tipo->GetTipo() != tipoValido){
            estado = false;
        }
    }catch(exception &e){
        estado = false;
        cout << "\n" << e.what() << endl;
    }
}

/* -------------------------------------------------- Código da partida -------------------------------------------------- */

void TUCodigoDaPartida::TestarCenarioFalha(){
    try{
        codigoDaPartida->SetCodigoDaPartida(codigoDaPartidaInvalidoTAM);
        estado = false;
        codigoDaPartida->SetCodigoDaPartida(codigoDaPartidaInvalidoDIG);
        estado = false;
    }catch(exception &e){
        return;
    }
}

void TUCodigoDaPartida::TestarCenarioSucesso(){
    try{
        codigoDaPartida->SetCodigoDaPartida(codigoDaPartidaValido);
        if(codigoDaPartida->GetCodigoDaPartida() != codigoDaPartidaValido){
            estado = false;
        }
    }catch(exception &e){
        estado = false;
        cout << "\n" << e.what() << endl;
    }
}

/* -------------------------------------------------- Data -------------------------------------------------- */

void TUData::TestarCenarioFalha(){
    try{
        data->SetData(dataInvalidaDIA);
        estado = false;
        data->SetData(dataInvalidaMES);
        estado = false;
        data->SetData(dataInvalidaANO);
        estado = false;
        data->SetData(dataInvalidaFEV);
        estado = false;
        data->SetData(dataInvalidaDMM);
        estado = false;
    }catch(exception &e){
        return;
    }
}

void TUData::TestarCenarioSucesso(){
    try{
        data->SetData(dataValida);
        if(data->GetData() != dataValida){
            estado = false;
        }
    }catch(exception &e){
        estado = false;
        cout << "\n" << e.what() << endl;
    }
}

/* -------------------------------------------------- Horário -------------------------------------------------- */

void TUHorario::TestarCenarioFalha(){
    try{
        horario->SetHorario(horarioInvalidoTAM);
        estado = false;
        horario->SetHorario(horarioInvalidoDPT);
        estado = false;
        horario->SetHorario(horarioInvalidoCAR);
        estado = false;
        horario->SetHorario(horarioInvalidoHOR);
        estado = false;
        horario->SetHorario(horarioInvalidoMIN);
        estado = false;
    }catch(exception &e){
        return;
    }
}

void TUHorario::TestarCenarioSucesso(){
    try{
        horario->SetHorario(horarioValido);
        if(horario->GetHorario() != horarioValido){
            estado = false;
        }
    }catch(exception &e){
        estado = false;
        cout << "\n" << e.what() << endl;
    }
}

/* -------------------------------------------------- Preço -------------------------------------------------- */

void TUPreco::TestarCenarioFalha(){
    try{
        preco->SetPreco(precoInvalidoMAI);
        estado = false;
        preco->SetPreco(precoInvalidoMEN);
        estado = false;
    }catch(exception &e){
        return;
    }
}

void TUPreco::TestarCenarioSucesso(){
    try{
        preco->SetPreco(precoValido);
        if(preco->GetPreco() != precoValido){
            estado = false;
        }
    }catch(exception &e){
        estado = false;
        cout << "\n" << e.what() << endl;
    }
}

/* -------------------------------------------------- Disponibilidade -------------------------------------------------- */

void TUDisponibilidade::TestarCenarioFalha(){
    try{
        disponibilidade->SetDisponibilidade(disponibilidadeInvalidaMAI);
        estado = false;
        disponibilidade->SetDisponibilidade(disponibilidadeInvalidaMEN);
        estado = false;
    }catch(exception &e){
        return;
    }
}

void TUDisponibilidade::TestarCenarioSucesso(){
    try{
        disponibilidade->SetDisponibilidade(disponibilidadeValida);
        if(disponibilidade->GetDisponibilidade() != disponibilidadeValida){
            estado = false;
        }
    }catch(exception &e){
        estado = false;
        cout << "\n" << e.what() << endl;
    }
}

/* -------------------------------------------------- Código de ingresso -------------------------------------------------- */

void TUCodigoDeIngresso::TestarCenarioFalha(){
    try{
        codigoDeIngresso->SetCodigoDeIngresso(codigoDeIngressoInvalidoTAM);
        estado = false;
        codigoDeIngresso->SetCodigoDeIngresso(codigoDeIngressoInvalidoCAR);
        estado = false;
    }catch(exception &e){
        return;
    }
}

void TUCodigoDeIngresso::TestarCenarioSucesso(){
    try{
        codigoDeIngresso->SetCodigoDeIngresso(codigoDeIngressoValido);
        if(codigoDeIngresso->GetCodigoDeIngresso() != codigoDeIngressoValido){
            estado = false;
        }
    }catch(exception &e){
        estado = false;
        cout << "\n" << e.what() << endl;
    }
}

/* -------------------------------------------------- Número de cartão de credito -------------------------------------------------- */

void TUNumeroDeCartaoDeCredito::TestarCenarioFalha(){
    try{
        numeroDeCartaoDeCredito->SetNumeroDeCartaoDeCredito(numeroDeCartaoDeCreditoInvalidoTAM);
        estado = false;
        numeroDeCartaoDeCredito->SetNumeroDeCartaoDeCredito(numeroDeCartaoDeCreditoInvalidoDIG);
        estado = false;
        numeroDeCartaoDeCredito->SetNumeroDeCartaoDeCredito(numeroDeCartaoDeCreditoInvalidoDV);
        estado = false;
    }catch(exception &e){
        return;
    }
}

void TUNumeroDeCartaoDeCredito::TestarCenarioSucesso(){
    try{
        numeroDeCartaoDeCredito->SetNumeroDeCartaoDeCredito(numeroDeCartaoDeCreditoValido);
        if(numeroDeCartaoDeCredito->GetNumeroDeCartaoDeCredito() != numeroDeCartaoDeCreditoValido){
            estado = false;
        }
    }catch(exception &e){
        estado = false;
        cout << "\n" << e.what() << endl;
    }
}

/* -------------------------------------------------- Código de segurança -------------------------------------------------- */

void TUCodigoDeSeguranca::TestarCenarioFalha(){
    try{
        codigoDeSeguranca->SetCodigoDeSeguranca(codigoDeSegurancaInvalidoTAM);
        estado = false;
        codigoDeSeguranca->SetCodigoDeSeguranca(codigoDeSegurancaInvalidoCAR);
        estado = false;
    }catch(exception &e){
        return;
    }
}

void TUCodigoDeSeguranca::TestarCenarioSucesso(){
    try{
        codigoDeSeguranca->SetCodigoDeSeguranca(codigoDeSegurancaValido);
        if(codigoDeSeguranca->GetCodigoDeSeguranca() != codigoDeSegurancaValido){
            estado = false;
        }
    }catch(exception &e){
        estado = false;
        cout << "\n" << e.what() << endl;
    }
}

/* -------------------------------------------------- Data de validade -------------------------------------------------- */

void TUDataDeValidade::TestarCenarioFalha(){
    try{
        dataDeValidade->SetDataDeValidade(dataDeValidadeInvalidaTAM);
        estado = false;
        dataDeValidade->SetDataDeValidade(dataDeValidadeInvalidaBAR);
        estado = false;
        dataDeValidade->SetDataDeValidade(dataDeValidadeInvalidaCAR);
        estado = false;
        dataDeValidade->SetDataDeValidade(dataDeValidadeInvalidaMES);
        estado = false;
        dataDeValidade->SetDataDeValidade(dataDeValidadeInvalidaANO);
        estado = false;
    }catch(exception &e){
        return;
    }
}

void TUDataDeValidade::TestarCenarioSucesso(){
    try{
        dataDeValidade->SetDataDeValidade(dataDeValidadeValida);
        if(dataDeValidade->GetDataDeValidade() != dataDeValidadeValida){
            estado = false;
        }
    }catch(exception &e){
        estado = false;
        cout << "\n" << e.what() << endl;
    }
}

/* -------------------------------------------------- Rodar todos os domínios -------------------------------------------------- */

void TUDominios::RunDominios(){
    SetUpDominios();
    cout << "\t*** Dominios - Executando testes de unidade. \t***" << endl << endl;

    if(testeDeUnidadeDeCPF->Run() == true){
            cout << " Sucesso no teste de unidade de CPF!" << endl;
    }else if(testeDeUnidadeDeCPF->Run() == false){
            cout << " Falha no teste de unidade de CPF!" << endl;
    }

    if(testeDeUnidadeDeSenha->Run() == true){
            cout << " Sucesso no teste de unidade de Senha!" << endl;
    }else if(testeDeUnidadeDeSenha->Run() == false){
            cout << " Falha no teste de unidade de Senha!" << endl;
    }

    if(testeDeUnidadeDeCodigoDoJogo->Run() == true){
            cout << " Sucesso no teste de unidade de Codigo do jogo!" << endl;
    }else if(testeDeUnidadeDeCodigoDoJogo->Run() == false){
            cout << " Falha no teste de unidade de Codigo do jogo!" << endl;
    }

    if(testeDeUnidadeDeNomeDoJogo->Run() == true){
            cout << " Sucesso no teste de unidade de Nome do jogo!" << endl;
    }else if(testeDeUnidadeDeNomeDoJogo->Run() == false){
            cout << " Falha no teste de unidade de Nome do jogo!" << endl;
    }

    if(testeDeUnidadeDeCidade->Run() == true){
            cout << " Sucesso no teste de unidade de Cidade!" << endl;
    }else if(testeDeUnidadeDeCidade->Run() == false){
            cout << " Falha no teste de unidade de Cidade!" << endl;
    }

    if(testeDeUnidadeDeEstado->Run() == true){
            cout << " Sucesso no teste de unidade de Estado!" << endl;
    }else if(testeDeUnidadeDeEstado->Run() == false){
            cout << " Falha no teste de unidade de Estado!" << endl;
    }

    if(testeDeUnidadeDeTipo->Run() == true){
            cout << " Sucesso no teste de unidade de Tipo!" << endl;
    }else if(testeDeUnidadeDeTipo->Run() == false){
            cout << " Falha no teste de unidade de Tipo!" << endl;
    }

    if(testeDeUnidadeDeCodigoDaPartida->Run() == true){
            cout << " Sucesso no teste de unidade de Codigo da partida!" << endl;
    }else if(testeDeUnidadeDeCodigoDaPartida->Run() == false){
            cout << " Falha no teste de unidade de Codigo da partida!" << endl;
    }

    if(testeDeUnidadeDeData->Run() == true){
            cout << " Sucesso no teste de unidade de Data!" << endl;
    }else if(testeDeUnidadeDeData->Run() == false){
            cout << " Falha no teste de unidade de Data!" << endl;
    }

    if(testeDeUnidadeDeHorario->Run() == true){
            cout << " Sucesso no teste de unidade de Horario!" << endl;
    }else if(testeDeUnidadeDeHorario->Run() == false){
            cout << " Falha no teste de unidade de Horario!" << endl;
    }

    if(testeDeUnidadeDePreco->Run() == true){
            cout << " Sucesso no teste de unidade de Preco!" << endl;
    }else if(testeDeUnidadeDePreco->Run() == false){
            cout << " Falha no teste de unidade de Preco!" << endl;
    }

    if(testeDeUnidadeDeDisponibilidade->Run() == true){
            cout << " Sucesso no teste de unidade de Disponibilidade!" << endl;
    }else if(testeDeUnidadeDeDisponibilidade->Run() == false){
            cout << " Falha no teste de unidade de Disponibilidade!" << endl;
    }

    if(testeDeUnidadeDeCodigoDeIngresso->Run() == true){
            cout << " Sucesso no teste de unidade de Codigo de ingresso!" << endl;
    }else if(testeDeUnidadeDeCodigoDeIngresso->Run() == false){
            cout << " Falha no teste de unidade de Codigo de ingresso!" << endl;
    }

    if(testeDeUnidadeDeNumeroDeCartaoDeCredito->Run() == true){
            cout << " Sucesso no teste de unidade de Numero de cartao de credito!" << endl;
    }else if(testeDeUnidadeDeNumeroDeCartaoDeCredito->Run() == false){
            cout << " Falha no teste de unidade de Numero de cartao de credito!" << endl;
    }

    if(testeDeUnidadeDeCodigoDeSeguranca->Run() == true){
            cout << " Sucesso no teste de unidade de Codigo de seguranca de cartao de credito!" << endl;
    }else if(testeDeUnidadeDeCodigoDeSeguranca->Run() == false){
            cout << " Falha no teste de unidade de Codigo de seguranca de cartao de credito!" << endl;
    }

    if(testeDeUnidadeDeDataDeValidade->Run() == true){
            cout << " Sucesso no teste de unidade de Data de validade de cartao de credito!" << endl;
    }else if(testeDeUnidadeDeDataDeValidade->Run() == false){
            cout << " Falha no teste de unidade de Data de validade de cartao de credito!" << endl;
    }

    TearDownDominios();
    cout << "\n\t*** Dominios - Testes finalizados. \t\t***\n\n\n" << endl;
}
