#ifndef COMPRESSAO_H
#define COMPRESSAO_H


#include<QString>
#include <QFileInfo>
#include <QFile>
#include <implementatree.h>
#include<implementalista.h>



class Compressao
{
public:
    Compressao();

    //Metodo que recebe os endereços de entrada e saida
    void compress(QString endEntrada, QString endSaida);

    //Metodo para Mensagens.
    void showMensagem(const char * msg);

    // Metodo para a frequencia do arquivo
     void frequencia();

    // Dados do arquivo

      //Objeto para buscar informação do arquivo
      QFileInfo infoArquivoEnt;

      // Informações do arquivo
      QString nomeOriginal; // Nome do Arquivo

      int tamNomeOriginal; // tamanho do  nome do arquivo

      //Metodo para Leitura o arquivo
      void leArquivo(QString endEntrada);

      // Objeto para manipular os dados
      QFile arquivo;

      // Objeto para copiar o arquivo principal, onde podemos manipular sem perder o dado origianl.
      QByteArray novoArquivo;

      implementaTree<char> Arvore;
      implementalista<char> Lista;



};

#endif // COMPRESSAO_H
