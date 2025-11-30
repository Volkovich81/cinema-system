#include <QtTest>
#include <QPushButton>

class UiTestExample : public QObject
{
    Q_OBJECT

private slots:
    void test_button()
    {
        QPushButton button("Test");
        QVERIFY(button.text() == "Test");
    }
};

QTEST_MAIN(UiTestExample)
#include "ui_test_main.moc"