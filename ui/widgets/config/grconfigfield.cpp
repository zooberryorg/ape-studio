#include "grconfigfield.h"
#include <QVBoxLayout>

GrConfigField::GrConfigField(QWidget *parent)
    : QWidget{parent}
{
    m_layout = new QVBoxLayout(parent);

}

void GrConfigField::addWidget(QWidget* widget)
{
    m_layout->addWidget(widget);
}
