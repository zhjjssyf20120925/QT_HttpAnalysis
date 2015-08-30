#ifndef DIALOG_H
#define DIALOG_H
#include "ThirdParty\ATLRegExp\WinHttpClient.h"

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    static bool HtmlRequestProgress(double progress);
    ~Dialog();

private:
    Ui::Dialog *ui;


private slots:
    void on_pbPaste_clicked();
    void on_pb_Clear_clicked();
    void on_pb_go_clicked();
    void on_pb_Stop_clicked();
    void on_pbtnHeadClear_clicked();
    void on_pbtnHeadCopy_clicked();
    void on_pbtnHeadSave_clicked();
    void on_pbtnBodySearch_clicked();
    void on_pbtnBodyExtract_clicked();
    void on_pbtnBodyClear_clicked();
    void on_pbtnBodyCopy_clicked();
    void on_pbtnBodySave_clicked();
    void on_pbtnGetClear_clicked();
    void on_pbtnGetCopy_clicked();
    void on_pbtnGetSave_clicked();
    void on_pbtnGetDown_clicked();
    void on_proBar_UrlAnalysis_valueChanged(int value);
};

#endif // DIALOG_H
