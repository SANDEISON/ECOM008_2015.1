#include <mainwindow.h>
#include "ui_mainwindow.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



// Função para selecionar arquivo.
void MainWindow::on_pushButtonAbrir_clicked()
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
void MainWindow::on_pushButtonSalvar_clicked()
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
void MainWindow::on_Descompressao_clicked()
{

}

// Botão Compressão
void MainWindow::on_Compressao_clicked()
{
    conexao_compressao.compress(selecionarArquivo , salvaArquivo);
}

// Botão Cancelar
void MainWindow::on_Cancelar_clicked()
{
    close();
}


// Menu Superior

void MainWindow::on_actionAbrir_triggered()
{
    //Chama o metodo do botão Abrir
    on_pushButtonAbrir_clicked();

}

void MainWindow::on_actionSalvar_triggered()
{
    //Chama o metodo do botão Salvar
    on_pushButtonSalvar_clicked();

}

void MainWindow::on_actionCompress_o_triggered()
{

}

void MainWindow::on_actionDescompress_o_triggered()
{

}

void MainWindow::on_actionCancelar_triggered()
{
    //Chama o metodo do botão Sair
    on_Cancelar_clicked();
}
