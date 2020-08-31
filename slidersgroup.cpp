#include<QWidget>
#include<QBoxLayout>
#include<qslider.h>
#include"window.h"
#include<QLayout>
#include<QLabel>




SlidersGroup::SlidersGroup(Qt::Orientation orientation, const QString &title,
                           QWidget *parent)
    : QGroupBox(title, parent)
{



    slider = new QSlider(orientation);
    slider->setFocusPolicy(Qt::StrongFocus);
    slider->setTickPosition(QSlider::NoTicks);


    slider->setSingleStep(1);

  spin = new QDoubleSpinBox;
  spin->setFocusPolicy(Qt::StrongFocus);
  spin->setDecimals(0);
  spin->setButtonSymbols(QDoubleSpinBox::NoButtons);
  spin->setMaximumHeight(15);
  spin->setMaximumWidth(15);



// connect(slider, &QSlider::valueChanged,spin, &QSpinBox::setValue);
//connect(spin,&QDoubleSpinBox::setValue, this,&QSlider::setToolTip );
 connect(slider, &QSlider::valueChanged, this, &SlidersGroup::valueChanged);
 QBoxLayout::Direction direction;

     if (orientation == Qt::Horizontal)
         direction = QBoxLayout::TopToBottom;
     else
         direction = QBoxLayout::LeftToRight;

     QBoxLayout *slidersLayout = new QBoxLayout(direction);

     slidersLayout->addWidget(slider);
    setLayout(slidersLayout);
 }
void SlidersGroup::setValue(int value)
{
    slider->setValue(value);
}
void SlidersGroup::setMinimum(int value)
{
    slider->setMinimum(value);
    spin->setMinimum(value);

}

void SlidersGroup::setMaximum(int value)
{
    slider->setMaximum(value);
    spin->setMaximum(value);
}

