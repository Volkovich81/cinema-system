#include <QtTest>

class TestExample : public QObject
{
    Q_OBJECT

private slots:
    void test_case1()
    {
        QVERIFY(1 + 1 == 2);
    }
};

QTEST_APPLESS_MAIN(TestExample)
#include "test_main.moc"