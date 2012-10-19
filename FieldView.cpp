/**
 * Field View
 */

#include "FieldView.h"

FieldView::FieldView()
{
}

QSize FieldView::minimumSizeHint() const
{
    return QSize(500, 500);
}

QSize FieldView::sizeHint() const
{
    return QSize(500,500);
}

void FieldView::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    painter.fillRect(0, 0, 500, 500, Qt::darkGreen);

}
