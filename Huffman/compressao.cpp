#include "compressao.h"
#include <QDebug>
#include "QMessageBox"

Compressao::Compressao()
{

}


void Compressao::compress(QString endEntrada,QString endSaida ) {

       //Obtem as informações do arquivo de entrada
         infoArquivoEnt.setFile(endEntrada);


         // Verificar se o arquivo existe
         if (infoArquivoEnt.exists()){

            // Nome do Arquivo
            nomeOriginal = infoArquivoEnt.fileName();

            // Tamanho do arquivo
            tamNomeOriginal = nomeOriginal.size();

            //Leitura do arquivo
            leArquivo(endEntrada);

            qDebug() << "Imformações :" << endl;
            qDebug() << "Nome do Arquivo Original : " << nomeOriginal <<endl;
            qDebug() << "Tamanho do Nome : " << tamNomeOriginal << endl;



            //Frequencia do Arquivo
            frequencia();

        }else{

            showMensagem("Por Favor Selecione um Arquivo de Entrada  !!! ");

        }

         if (endSaida == ""){
             showMensagem("Por Favor Selecione um Local para salvar o Arquivo !!! ");
         }else{

             //Metodos para Gravar o Arquivo

         }
}



// Abre o arquivo e faz uma copia para o newFile
void Compressao::leArquivo(QString endEntrada)
{

    arquivo.setFileName(endEntrada);
    if(arquivo.open (QIODevice::ReadOnly))
    {
        novoArquivo = arquivo.readAll(); // Faço uma copia do arquivo original par a um arquivo temporario
    }

    arquivo.close();
}





// Verifica a frequencia do arquivo
void Compressao::frequencia(){
    //Frequencia do Arquivo
    int frequencia[256];

    for(int i = 0; i < 256; i++){
        frequencia[i] = novoArquivo.count(i);
     }

    qDebug() << "Frequencia : "<<endl;

    for(int i = 0; i < 256; i++){

        if (frequencia[i]!= 0 ){
            qDebug() << i << " : "<< frequencia[i] << endl;
        }

    }

}






//Exibe as mensagens
void Compressao::showMensagem(const char * msg)
{
    QMessageBox msgBox;
    msgBox.setText(msg);
    msgBox.setWindowTitle("Atenção !!! ");
    msgBox.setIcon(QMessageBox::Information);
    msgBox.exec();
}
