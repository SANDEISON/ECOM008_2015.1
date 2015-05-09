#include "huffman.h"
#include "ui_huffman.h"
#include <QFileDialog>

Huffman::Huffman(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Huffman)
{
    ui->setupUi(this);
}

Huffman::~Huffman()
{
    delete ui;
}





// Função para selecionar arquivo.

void Huffman::on_pushButtonAbrir_clicked()
{
    selecionarArquivo = QFileDialog::getOpenFileName(
                this,
                tr("Open File"),
                "C:://",
                "All Files (*.*);;Huffman(*.huff);;Text File (*.txt)" // Informo quais arquivos posso abrir
                );
    // Exibe o endereço do arquivo no lineEdit abrir
    ui->lineEdit_Abrir->setText(selecionarArquivo);

}




// Botão Salvar
void Huffman::on_pushButtonSalvar_clicked()
{
    salvaArquivo = QFileDialog::getSaveFileName(
                this,
                tr("Open File"),
                "C:://",
                "Huffman(*.huff)" // Determino a extenção do arquivo
                );
    // Exibe o endereço do arquivo no lineEdit salvar
    ui->lineEdit_Salvar->setText(salvaArquivo);

}


// Botão Descompressão
void Huffman::on_Descompressao_clicked()
{

}


// Botão Compressão
void Huffman::on_Compressao_clicked()
{

}


// Botão Cancelar
void Huffman::on_Cancelar_clicked()
{
    close();
}



// Menu Superior


void Huffman::on_actionAbrir_triggered()
{
    //Chama o metodo do botão Abrir
    on_pushButtonAbrir_clicked();
}

void Huffman::on_actionSalvar_triggered()
{
    //Chama o metodo do botão Salvar
    on_pushButtonSalvar_clicked();

}

void Huffman::on_actionSair_triggered()
{
    //Chama o metodo do botão Sair
    on_Cancelar_clicked();

}

void Huffman::on_actionCompress_o_triggered()
{

}

void Huffman::on_actionDescompress_o_triggered()
{

}
