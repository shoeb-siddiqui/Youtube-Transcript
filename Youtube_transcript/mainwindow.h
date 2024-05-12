#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QUrlQuery>
#include <QProcess>
#include <QByteArray>
#include <QUrl>
#include <QDesktopServices>
#include <QClipboard>
#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include <QTextToSpeech>
#include <QVector>
#include <QTranslator>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QEventLoop>
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QPrinter>
#include <QFontDatabase>
#include <QFontDialog>
#include <QPoint>
#include <QTextCharFormat>
#include <QVoice>

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QThread>



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    void translateText(const QString &text, const QString &targetLanguage);

     bool isSpeaking = true;
    QString parseGoogleTranslateResponse(const QByteArray &response);

    QString generateSummary(const QString& originalText);
     void convertHTMLToPDF(const QString &htmlContent, const QString &pdfFilePath);
     void loadFonts() ;

    ~MainWindow();
public slots:

        void action1Clicked();
        void action2Clicked();
        void action3Clicked();
        void openwebpage();
        void showDropdownMenu();
        void checkClipboard();

private slots:




        void on_pushButton_2_clicked();

        void on_Play_clicked();

        void on_Pause_clicked();

        void on_downloadButton_clicked();



private:
    Ui::MainWindow *ui;
    QMenu *dropdownMenu;
      QAction *action1;
      QAction *action2;
      QAction *action3;
       QTextToSpeech *speech;
};

#endif // MAINWINDOW_H
