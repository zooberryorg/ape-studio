#ifndef GRCONFIGFIELD_H
#define GRCONFIGFIELD_H

#include <QWidget>

class QVBoxLayout;

class GrConfigField : public QWidget
{
    Q_OBJECT
public:
    explicit GrConfigField(QWidget *parent = nullptr);
    QString section() { return m_section; };
    QString key() { return m_key; };
    QString sectionKey() { return m_section + '/' + m_key; };
    QWidget* widget() { return m_widget; };
    void addWidget(QWidget* widget);

private:
    QString m_section;
    QString m_key;
    QWidget* m_widget;
    QVBoxLayout *m_layout;
signals:

};

#endif // GRCONFIGFIELD_H
