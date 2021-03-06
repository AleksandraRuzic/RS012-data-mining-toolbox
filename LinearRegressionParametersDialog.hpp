#ifndef LINEARREGRESSIONPARAMETERSDIALOG_HPP
#define LINEARREGRESSIONPARAMETERSDIALOG_HPP

#include <QDialog>
#include <QMessageBox>
#include <QString>
#include <LinearRegressionNode.hpp>

namespace Ui {
class LinearRegressionParametersDialog;
}

class LinearRegressionParametersDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LinearRegressionParametersDialog(LinearRegressionNode* cvor, QWidget *parent = nullptr);
    ~LinearRegressionParametersDialog();



private slots:
    void on_Odabir_clicked();

private:
    Ui::LinearRegressionParametersDialog *ui;
    LinearRegressionNode* linN;
};

#endif // LINEARREGRESSIONPARAMETERSDIALOG_HPP
