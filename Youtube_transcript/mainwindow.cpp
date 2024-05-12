
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    speech = new QTextToSpeech(this);
    dropdownMenu = new QMenu(this);
    action1 = new QAction("Translate", this);
    action2 = new QAction("Translate", this);
    action3 = new QAction("Summary", this);

    dropdownMenu->addAction(action1);
    //dropdownMenu->addAction(action2);
    dropdownMenu->addAction(action3);


    connect(ui->downloadButton, SIGNAL(clicked()), this, SLOT(openwebpage()));
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::showDropdownMenu);
    connect(action1, &QAction::triggered, this, &MainWindow::action1Clicked);
    connect(action2, &QAction::triggered, this, &MainWindow::action2Clicked);
    connect(action3, &QAction::triggered, this, &MainWindow::action3Clicked);
    ui->textEdit->hide();
    ui->Pause->setVisible(false);


    QString styleSheet = "QMenu { background-color: white; } QMenu::item:selected { background-color: green; color: white; font-size: 10pt; font-weight: bold; }";

    dropdownMenu->setStyleSheet(styleSheet);


}

MainWindow::~MainWindow()
{
    delete ui;
    delete speech;
    delete dropdownMenu;
    delete action1;
    delete action2;
    delete action3;
}
//void MainWindow::openwebpage() {

//    QUrl url("https://www.youtubetranscript.com");
//    if (QDesktopServices::openUrl(url)) {
//        qDebug() << "Opened web page in the default browser.";
//    } else {
//        qDebug() << "Failed to open web page.";
//    }
//}

void MainWindow::openwebpage() {
    QUrl url("https://www.youtubetranscript.com");
    if (QDesktopServices::openUrl(url)) {
        qDebug() << "Opened web page in the default browser.";
    } else {
        qDebug() << "Failed to open web page.";
    }

    connect(QApplication::clipboard(), &QClipboard::dataChanged, this, &MainWindow::checkClipboard);
}

void MainWindow::checkClipboard() {
    QClipboard* clipboard = QGuiApplication::clipboard();
    QString clipboardText = clipboard->text();


    QStringList words = clipboardText.split(QRegExp("\\s+"), QString::SkipEmptyParts);
    int wordCount = words.length();

    if (wordCount > 50) {
        ui->textBrowser->setPlainText(clipboardText);
    }
}

void MainWindow::showDropdownMenu()
{

    dropdownMenu->exec(ui->pushButton->mapToGlobal(QPoint(0, ui->pushButton->height())));
}
void MainWindow::action1Clicked()
{




//    QString fullText = ui->textBrowser->toPlainText();

//        // Limit the text to 2000 characters
//        const int maxCharacters = 5000;
//        QString textToTranslate = fullText.left(maxCharacters);

//        // Construct URL with the text as a parameter
//        QUrl url("https://translate.google.co.in/");
//        QUrlQuery query;
//        query.addQueryItem("q", textToTranslate);
//        url.setQuery(query);

//        // Open the URL in the default browser
//        if (QDesktopServices::openUrl(url)) {
//            qDebug() << "Opened web page in the default browser.";
//        } else {
//            qDebug() << "Failed to open web page.";
//        }


//        QString copiedText = QApplication::clipboard()->text();
//            ui->textEdit->setPlainText(copiedText);
    QString fullText = ui->textBrowser->toPlainText();

       // Limit the text to 2000 characters
       const int maxCharacters = 5000;
       QString textToTranslate = fullText.left(maxCharacters);

       // Construct the command to call the Python script with the text as an argument
       QString scriptPath = "D:/script/translator.py";  // Replace with the actual path
       QStringList arguments;
       arguments << textToTranslate;

       // Start the process
       QProcess process;
       process.start("python", QStringList() << scriptPath << arguments);
       process.waitForFinished();

       // Read the translated text from the process
       QString translatedText = process.readAllStandardOutput();

       // Construct URL with the translated text as a parameter
       QUrl url("https://translate.google.co.in/");
       QUrlQuery query;
       query.addQueryItem("q", translatedText);
       url.setQuery(query);

       // Open the URL in the default browser
       if (QDesktopServices::openUrl(url)) {
           qDebug() << "Opened web page in the default browser.";
       } else {
           qDebug() << "Failed to open web page.";
       }

       // Wait for some time to allow the user to copy text from the URL
       QThread::msleep(10000);  // Adjust the sleep duration as needed

       // Get the copied text from the clipboard
       QString copiedText = QApplication::clipboard()->text();

       // If there is any copied text, paste it into the QTextEdit
       if (!copiedText.isEmpty()) {
           ui->textEdit->setText(copiedText);
       }



}
void MainWindow::translateText(const QString &text, const QString &targetLanguage)
{
    qDebug() << "Requesting translation..." << endl;

           QNetworkAccessManager *manager = new QNetworkAccessManager(this);

           // Set up the request
           QUrl apiUrl("https://libretranslate.com/translate");
           QNetworkRequest request(apiUrl);
           request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

           // Prepare the request data
           QJsonObject requestData;
           requestData["q"] = text;
           requestData["source"] = "auto";
           requestData["target"] = targetLanguage;
           requestData["format"] = "text";

           // Convert the data to JSON
           QJsonDocument jsonDoc(requestData);
           QByteArray jsonData = jsonDoc.toJson();

           // Make the API request
           QNetworkReply *reply = manager->post(request, jsonData);

           // Handle the response
           connect(reply, &QNetworkReply::finished, [reply, this]() {
               if (reply->error() == QNetworkReply::NoError) {
                   // Parse the response
                   QJsonDocument jsonResponse = QJsonDocument::fromJson(reply->readAll());
                   QJsonObject jsonObject = jsonResponse.object();

                   // Get the translated text
                   QString translatedText = jsonObject["translatedText"].toString();
                   qDebug() << "Translated text:" << translatedText;

                   // Display the translated text in the QTextBrowser
                   ui->textBrowser->setText(translatedText);
                   qDebug() << "Translation successful." << endl;
               } else {
                   qDebug() << "Translation failed. Error:" << reply->errorString();
               }

               // Clean up
               reply->deleteLater();
           });
       }



void MainWindow::action2Clicked()
{


}
void MainWindow::action3Clicked()
{
    QString originalText = ui->textBrowser->toPlainText();

    // Perform the summarization. Replace this with your actual summarization logic.
    QString summary = generateSummary(originalText);

    // Replace the text in the QTextBrowser with the summary.
    ui->textBrowser->setPlainText(summary);

}
QString MainWindow::generateSummary(const QString& originalText) {

    qDebug()<<"egeneraTE SUNNARY"<<endl;
    int totalLength = originalText.length();

    if (totalLength <= 900) {
        int chunkSize = totalLength / 3;

        QString firstChunk = originalText.left(chunkSize);
        QString middleChunk = originalText.mid(totalLength / 2 - chunkSize / 2, chunkSize);
        QString lastChunk = originalText.right(chunkSize);

        // Combine the chunks to form the summary.
        QString summary = firstChunk + middleChunk + lastChunk;
        qDebug()<<"second_debug"<<endl;

        return summary;
    }



    if (totalLength <= 1000) {
        int chunkSize = totalLength / 3;

        QString firstChunk = originalText.left(chunkSize);
        QString middleChunk = originalText.mid(totalLength / 2 - chunkSize / 2, chunkSize);
        QString lastChunk = originalText.right(chunkSize);

        // Combine the chunks to form the summary.
        QString summary = firstChunk + middleChunk + lastChunk;
        qDebug()<<"second_debug"<<endl;

        return summary;
    }

    if (totalLength <= 2000) {
        int chunkSize = totalLength / 3;

        QString firstChunk = originalText.left(chunkSize);
        QString middleChunk = originalText.mid(totalLength / 2 - chunkSize / 2, chunkSize);
        QString lastChunk = originalText.right(chunkSize);

        // Combine the chunks to form the summary.
        QString summary = firstChunk + middleChunk + lastChunk;
        qDebug()<<"second_debug"<<endl;

        return summary;
    }

    // If the text is shorter than 3000 characters, use the entire text as the summary.
    if (totalLength <= 3000) {
        return originalText;
    }

    // Take the first 1000 characters, the middle 1000 characters, and the last 1000 characters.
    int chunkSize = 1000;
    QString firstChunk = originalText.left(chunkSize);
    QString middleChunk = originalText.mid(totalLength / 2 - chunkSize / 2, chunkSize);
    QString lastChunk = originalText.right(chunkSize);

    // Combine the chunks to form the summary.
    QString summary = firstChunk + middleChunk + lastChunk;
    qDebug()<<"third_debug"<<endl;

    return summary;
}



//////////////////////////////////////Langugaes///////////////////////////////////////////////

//void MainWindow::on_Hindi_clicked()
//{
////    // Get the current text from ui->textBrowser
////       QString currentText = ui->textBrowser->toPlainText();

////       // Create a hidden web view for translating the text using Google Translate
////       QWebView webView;
////       QWebPage page;
////       webView.setPage(&page);
////       QWebFrame *frame = webView.page()->mainFrame();
////       frame->setHtml("<html><body><div id='text'>" + currentText + "</div></body></html>");

////       // Execute JavaScript to translate the text using Google Translate
////       QString translateScript = QString(
////           "var text = document.getElementById('text').textContent;"
////           "var translation = google.language.translate(text, 'en', 'hi', function(result) {"
////           "document.getElementById('text').textContent = result.translation;"
////           "});");
////       frame->evaluateJavaScript(translateScript);

////       // Wait for translation to complete
////       QTimer timer;
////       QEventLoop loop;
////       connect(&timer, &QTimer::timeout, &loop, &QEventLoop::quit);
////       timer.start(5000); // Adjust the timeout as needed
////       loop.exec();

////       // Get the translated text from the web view
////       QWebElement translatedElement = frame->documentElement().findFirst("#text");
////       QString translatedText = translatedElement.toPlainText();

////       // Set the translated text in the textBrowser
////       ui->textBrowser->setPlainText(translatedText);

//    QString currentText = ui->textBrowser->toPlainText();

//        // Send a request to Google Translate
//        QNetworkAccessManager manager;
//        QNetworkRequest request;
//        request.setUrl(QUrl("https://translate.googleapis.com/translate_a/single?client=gtx&sl=en&tl=hi&dt=t&q=" + currentText));
//        QNetworkReply* reply = manager.get(request);

//        QEventLoop loop;
//        connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
//        loop.exec();

//        if (reply->error() == QNetworkReply::NoError) {
//            // Parse the JSON response and extract the translated text
//            QByteArray response = reply->readAll();
//            QString translatedText = parseGoogleTranslateResponse(response);

//            ui->textBrowser->setPlainText(translatedText);
//        } else {
//            qDebug() << "Translation failed: " << reply->errorString();
//        }

//        reply->deleteLater();
//}



void MainWindow::on_pushButton_2_clicked()
{
    QTextBrowser* textBrowser = ui->textBrowser; // Replace with your QTextBrowser widget

    // Get the current date and time
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString formattedDate = currentDateTime.toString("dd/MM/yyyy");
    QString formattedTime = currentDateTime.toString("hh:mm AP");

    // Define the title and content
    QString title = "Transcript";
    QString content = textBrowser->toPlainText();

    // Split the content into lines
    QStringList lines = content.split("\n");

    QString htmlContent = "<html>\n<head>\n<title>Report</title>\n"
                         "<style>"
                         "body { font-family: 'Courier New', Courier, monospace; font-size: 10pt; text-align: center; }"
                         "h1 { font-size: 14pt; font-weight: bold; font-family: 'Arial Black', Arial, sans-serif; }"
                         ".left { text-align: left; }"
                         ".bold { font-weight: bold; }"
                         ".line { font-size: 10pt; text-align: left; text-align-last: justify; white-space: nowrap; }"
                         "</style>\n"
                         "</head>\n<body>\n";

    // Title with font size 14, bold, and Arial Black
    htmlContent += "<h1>" + title + "</h1>\n";

    // "Date:" and "Time:" followed by their respective values
    htmlContent += "<div class='left bold'>Date: " + formattedDate + "<br>Time: " + formattedTime + "</div><br>\n";
    htmlContent += "<div class='line'>";
    for (const QString& line : lines) {
        // Make a non-const copy before replacing spaces
        QString nonConstLine = line;
        QString justifiedLine = nonConstLine.replace(" ", "&nbsp;");
        htmlContent += justifiedLine + "<br>";
    }
    htmlContent += "</div>\n";

    htmlContent += "</body>\n</html>";

    QString pdfFilePath = QFileDialog::getSaveFileName(this, "Save PDF File", QDir::homePath(), "PDF Files (*.pdf)");

    if (pdfFilePath.isEmpty()) {
        // User canceled the file dialog
        return;
    }

    // The code to convert HTML content to a PDF file goes here...
    convertHTMLToPDF(htmlContent, pdfFilePath);
}




void MainWindow::convertHTMLToPDF(const QString &htmlContent, const QString &pdfFilePath)
{

    QTextDocument textDocument;
      textDocument.setHtml(htmlContent);

      // Set the default font of the QTextDocument to match the QTextBrowser's font
      textDocument.setDefaultFont(ui->textBrowser->font());

      QPrinter printer;
      printer.setOutputFormat(QPrinter::PdfFormat);
      printer.setOutputFileName(pdfFilePath);

      printer.setOrientation(QPrinter::Portrait);
      printer.setPaperSize(QPrinter::Custom);
      printer.setPaperSize(QSizeF(8.5, 11.0), QPrinter::Inch); // Letter-sized paper

      // Ensure that the font used supports the required languages
      QFont font("Arial Unicode MS"); // Use a font that supports multiple languages

      textDocument.setDefaultFont(font);

      textDocument.print(&printer);

      if (printer.printerState() == QPrinter::Error)
      {
          qDebug() << "Failed to generate PDF.";
      }
      else
      {
          QMessageBox::information(this, "Status", "PDF generated successfully.");
      }
}


void MainWindow::on_Play_clicked()
{
//    qDebug()<<"inside stopping"<<endl;
//    isSpeaking = true;

//       // Assuming 'speech' is a member variable declared in your class
//       if (speech) {
//           speech->resume();
//       }

//    if (isSpeaking == true) {
//        // The speech instance should be declared outside the block


//        // Check if the system supports text-to-speech
//        if (speech->availableEngines().isEmpty()) {
//            qDebug() << "Text-to-speech not available on this system.";
//            return;
//        }

//        QString textToSpeak = ui->textBrowser->toPlainText();

//        // Get the list of available locales for text-to-speech
//        QVector<QLocale> availableLocales = speech->availableLocales();

//        if (!availableLocales.isEmpty()) {
//            // Set the locale for speech synthesis to automatically detect the language
//            QLocale autoDetectLocale = availableLocales.first(); // Use the first available locale
//            speech->setLocale(autoDetectLocale);
//        } else {
//            qDebug() << "No available locales for text-to-speech.";
//            return;
//        }

//        // Set the pitch and rate as needed
//        speech->setPitch(1.0);
//        speech->setRate(0.0);

//        // Make it speak the text
//        speech->say(textToSpeak);
//    } else {
//        // Assuming 'speech' is a member variable declared in your class

//    }

    QProcess process;
            QString pythonScriptPath = "script.py"; // Replace with the actual path
            QStringList arguments;


            QString text = ui->textBrowser->toPlainText();
            arguments << text;

            process.start("python", QStringList() << pythonScriptPath << arguments);
            QMessageBox::information(nullptr,"Media","Please wait music player is been loading");
            process.waitForFinished(-1); // Wait un
}
void MainWindow::loadFonts() {

    // Get the list of available font families for the Any writing system
       QStringList fontFamilies = QFontDatabase::applicationFontFamilies(QFontDatabase::Any);

       // Print available font families for debugging
       qDebug() << "Available Font Families: " << fontFamilies;

       // Iterate through the available font families
       for (const QString &fontFamily : fontFamilies) {
           // Load the font for each family
           int fontId = QFontDatabase::addApplicationFont(fontFamily);

           // Check if the font was loaded successfully
           if (fontId != -1) {
               qDebug() << "Loaded font: " << fontFamily;
           } else {
               qDebug() << "Failed to load font: " << fontFamily;
           }
       }
}

void MainWindow::on_Pause_clicked()
{
    loadFonts();
    qDebug()<<"inside stopping"<<endl;
    isSpeaking = false;

       // Assuming 'speech' is a member variable declared in your class
       if (speech) {
           speech->pause();
       }

}

void MainWindow::on_downloadButton_clicked()
{

}

