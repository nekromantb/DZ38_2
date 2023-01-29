#include <QApplication>
#include <QtGui/QtGui>
#include <QWebEngineView>
#include <QHBoxLayout>
#include <QPlainTextEdit>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    auto *brotherWindow = new QWidget;
    auto *webView = new QWebEngineView;
    auto *hbox = new QHBoxLayout(brotherWindow);
    auto *htmlText = new QPlainTextEdit;

    hbox -> addWidget(webView);
    hbox -> addWidget(htmlText);

    QSizePolicy size;
    size.setHorizontalPolicy(QSizePolicy::Preferred);
    size.setVerticalPolicy(QSizePolicy::Preferred);
    size.setHorizontalStretch(1);
    size.setVerticalStretch(1);

    webView->setSizePolicy(size);
    htmlText->setSizePolicy(size);

    QObject::connect(htmlText, &QPlainTextEdit::textChanged, [webView, htmlText]()
    {
        auto htmlToOpen = htmlText->toPlainText();
        webView->setHtml(htmlToOpen);
    });

    brotherWindow->show();

    return a.exec();
}
