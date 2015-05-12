#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include<compressao.h>



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    // Conexão, envia os endereços do arquivo abrir e do salvar
    Compressao conexao_compressao;

    // Definindo o objeto para salvar o endereço do arquivo
    QString selecionarArquivo;

    // Definindo o objeto para salvar o endereço onde o arquivo sera salvo.
    QString salvaArquivo;

private slots:

    // Botão Abrir
    void on_pushButtonAbrir_clicked();

    // Botão Salvar
    void on_pushButtonSalvar_clicked();

    // Botão Descompressão
    void on_Descompressao_clicked();

    //Botão Compressão
    void on_Compressao_clicked();

    //Botão Cancela
    void on_Cancelar_clicked();

// Menu Superior

    // Botão Abrir
    void on_actionAbrir_triggered();

    // Botão Salvar
    void on_actionSalvar_triggered();

    //Botão Compressão
    void on_actionCompress_o_triggered();

    // Botão Descompressão
    void on_actionDescompress_o_triggered();

    //Botão Sair
    void on_actionCancelar_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
