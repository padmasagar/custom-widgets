#include<QStackedWidget>
#include<QLabel>
#include<QCheckBox>
#include"slidersgroup.h"
#include<QGroupBox>
#include<QComboBox>
#include<QSpinBox>

class Window : public QWidget
{
    Q_OBJECT

public:
    Window(QWidget *parent = nullptr);

private:
    void createControls(const QString &title);

    SlidersGroup *horizontalSliders;
    SlidersGroup *verticalSliders;
    QStackedWidget *stackedWidget;

    QGroupBox *controlsGroup;
    QLabel *minimumLabel;
    QLabel *maximumLabel;
    QLabel *valueLabel;

    QSpinBox *minimumSpinBox;
    QSpinBox *maximumSpinBox;
    QSpinBox *valueSpinBox;
    QComboBox *orientationCombo;
};

