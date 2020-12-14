#include "testes-entidades.h"

using namespace std;

void TUUsuario::TestarCenarioSucesso(){
    try{
        if(usuarioValido->GetCPF().GetCPF() != cpfValido.GetCPF()){
            estado = false;
        }
        if(usuarioValido->GetSenha().GetSenha() != senhaValida.GetSenha()){
            estado = false;
        }
    }catch(exception &e){
        estado = false;
        cout << "\n" << e.what() << endl;
    }
}


void TUJogo::TestarCenarioSucesso(){
    try{
        if(jogoValido->GetCodigoDoJogo().GetCodigoDoJogo() != codigoDoJogoValido.GetCodigoDoJogo()){
            estado = false;
        }
        if(jogoValido->GetNomeDoJogo().GetNomeDoJogo() != nomeDoJogoValido.GetNomeDoJogo()){
            estado = false;
        }
        if(jogoValido->GetCidade().GetCidade() != cidadeValida.GetCidade()){
            estado = false;
        }
        if(jogoValido->GetEstado().GetEstado() != estadoValido.GetEstado()){
            estado = false;
        }
        if(jogoValido->GetTipo().GetTipo() != tipoValido.GetTipo()){
            estado = false;
        }
    }catch(exception &e){
        estado = false;
        cout << "\n" << e.what() << endl;
    }
}

void TUPartida::TestarCenarioSucesso(){
    try{
        if(partidaValida->GetCodigoDaPartida().GetCodigoDaPartida() != codigoDaPartidaValido.GetCodigoDaPartida()){
            estado = false;
        }
        if(partidaValida->GetData().GetData() != dataValida.GetData()){
            estado = false;
        }
        if(partidaValida->GetHorario().GetHorario() != horarioValido.GetHorario()){
            estado = false;
        }
        if(partidaValida->GetPreco().GetPreco() != precoValido.GetPreco()){
            estado = false;
        }
        if(partidaValida->GetDisponibilidade().GetDisponibilidade() != disponibilidadeValida.GetDisponibilidade()){
            estado = false;
        }
    }catch(exception &e){
        estado = false;
        cout << "\n" << e.what() << endl;
    }
}


void TUIngresso::TestarCenarioSucesso(){
    try{
        if(ingressoValido->GetCodigoDeIngresso().GetCodigoDeIngresso() != codigoDeIngressoValido.GetCodigoDeIngresso()){
            estado = false;
        }
    }catch(exception &e){
        estado = false;
        cout << "\n" << e.what() << endl;
    }
}

void TUCartaoDeCredito::TestarCenarioSucesso(){
    try{
        if(cartaoDeCreditoValido->GetNumeroDeCartaoDeCredito().GetNumeroDeCartaoDeCredito() != numeroDeCartaoDeCreditoValido.GetNumeroDeCartaoDeCredito()){
            estado = false;
        }
        if(cartaoDeCreditoValido->GetCodigoDeSeguranca().GetCodigoDeSeguranca() != codigoDeSegurancaValido.GetCodigoDeSeguranca()){
            estado = false;
        }
        if(cartaoDeCreditoValido->GetDataDeValidade().GetDataDeValidade() != dataDeValidadeValida.GetDataDeValidade()){
            estado = false;
        }
    }catch(exception &e){
        estado = false;
        cout << "\n" << e.what() << endl;
    }
}

void TUEntidades::RunEntidades(){
    SetUpEntidades();
    cout << "\t*** Entidades - Executando testes de unidade. \t***" << endl << endl;

    if(testeDeUnidadeDeUsuario->Run() == true){
            cout << " Sucesso no teste de unidade de Usuario!" << endl;
    }else if(testeDeUnidadeDeUsuario->Run() == false){
            cout << " Falha no teste de unidade de Usuario!" << endl;
    }

    if(testeDeUnidadeDeJogo->Run() == true){
        cout << " Sucesso no teste de unidade de Jogo!" << endl;
    }else if(testeDeUnidadeDeJogo->Run() == false){
        cout << " Falha no teste de unidade de Jogo!" << endl;
    }

    if(testeDeUnidadeDePartida->Run() == true){
        cout << " Sucesso no teste de unidade de Partida!" << endl;
    }else if(testeDeUnidadeDePartida->Run() == false){
        cout << " Falha no teste de unidade de Partida!" << endl;
    }

    if(testeDeUnidadeDeIngresso->Run() == true){
        cout << " Sucesso no teste de unidade de Ingresso!" << endl;
    }else if(testeDeUnidadeDePartida->Run() == false){
        cout << " Falha no teste de unidade de Ingresso!" << endl;
    }

    if(testeDeUnidadeDeCartaoDeCredito->Run() == true){
        cout << " Sucesso no teste de unidade de Cartao de credito!" << endl;
    }else if(testeDeUnidadeDeCartaoDeCredito->Run() == false){
        cout << " Falha no teste de unidade de CartaoDeCredito!" << endl;
    }

    TearDownEntidades();
    cout << "\n\t*** Entidades - Testes finalizados. \t\t***" << endl;
}
