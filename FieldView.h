/**
 * Widget for drawing the field
 *
 */

#ifndef FIELDVIEW_H
#define FIELDVIEW_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QPoint>

#include "FieldConstants.h"

class FieldView : public QWidget
{
Q_OBJECT

public:
    FieldView();
    ~FieldView() {};

    QSize minimumSizeHint() const;
    QSize sizeHint() const;

protected:
    void paintEvent(QPaintEvent* event);
};

#endif //FIELD_VIEW_H
