// GamePadConf.h
//

#pragma once

#include <QWidget>
#include <QDialog>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QComboBox>
#include <QCheckBox>
#include <QPushButton>
#include <QLabel>
#include <QFrame>
#include <QGroupBox>

class GamePadConfDialog_t : public QDialog
{
   Q_OBJECT

	public:
		GamePadConfDialog_t(QWidget *parent = 0);
		~GamePadConfDialog_t(void);

	protected:
		QComboBox *portSel;
      QPushButton *button[10];
      QLabel      *keyName[10];

      int  portNum;
      int  buttonConfigStatus;

      void changeButton( int port, int button );
      void keyPressEvent(QKeyEvent *event);
	   void keyReleaseEvent(QKeyEvent *event);
      void closeEvent(QCloseEvent *bar);

   public slots:
      void closeWindow(void);
	private slots:
      void changeButton0(void);
      void changeButton1(void);
      void changeButton2(void);
      void changeButton3(void);
      void changeButton4(void);
      void changeButton5(void);
      void changeButton6(void);
      void changeButton7(void);
      void changeButton8(void);
      void changeButton9(void);

};
