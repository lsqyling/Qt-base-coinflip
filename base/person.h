//
// Created by 10580.
//

#ifndef QT_BASE_PERSON_H
#define QT_BASE_PERSON_H
#include <QObject>

class person : public QObject
{
Q_OBJECT
    Q_CLASSINFO("author", "Arxibye")
    Q_CLASSINFO("company", "NCHL")
    Q_CLASSINFO("version", "1.0")
    Q_PROPERTY(int age READ age_of WRITE set_age NOTIFY age_changed)
    Q_PROPERTY(QString name MEMBER name_)
    Q_PROPERTY(int score MEMBER score_)

public:
    explicit person(QString name, QObject *parent = nullptr);

    int age_of() const;

    void set_age(int value);

    void increment_age();

signals:
    void age_changed(int value);

private:
    int age_{10};
    QString name_;
    int score_{79};

};

#endif //QT_BASE_PERSON_H
