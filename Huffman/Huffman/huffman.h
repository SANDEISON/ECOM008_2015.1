#ifndef HUFFMAN_H
#define HUFFMAN_H

#include <QMainWindow>


namespace Ui {
class Huffman;
}

class Huffman : public QMainWindow
{
    Q_OBJECT

public:
    explicit Huffman(QWidget *parent = 0);
    ~Huffman();

    // Definindo o objeto para salvar o endereço do arquivo
    QString selecionarArquivo;

    // Definindo o objeto para salvar o endereço onde o arquivo sera salvo.
    QString salvaArquivo;


private slots:

    // Botão Abrir
    void on_pushButtonAbrir_clicked();

    // Botão Salvar
    void on_pushButtonSalvar_clicked();

    //Botão Compressão
    void on_Compressao_clicked();

    // Botão Descompressão
    void on_Descompressao_clicked();

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
    void on_actionSair_triggered();

private:
    Ui::Huffman *ui;
};

#endif // HUFFMAN_H
