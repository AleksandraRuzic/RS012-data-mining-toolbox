#ifndef SOURCEPARAMETERSDIALOG_HPP
#define SOURCEPARAMETERSDIALOG_HPP

#include <QDialog>
#include <Node.hpp>
#include <SourceNode.hpp>
#include <QFileDialog>
#include <QString>


namespace Ui {
class SourceParametersDialog;
}

class SourceParametersDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SourceParametersDialog(SourceNode* cvor, QWidget *parent = nullptr);
    ~SourceParametersDialog();

private slots:
    void on_OdaberiCvor_clicked();

    void on_Potvrdi_clicked();

private:
    Ui::SourceParametersDialog *ui;
    SourceNode* UlazniCvor;
};

#endif // SOURCEPARAMETERSDIALOG_HPP
