#ifndef __APPEARANCE_H__
#define __APPEARANCE_H__

#include "ui_appearancebase.h"

class QColor;
class QDialog;

class MusE;
class Arranger;
class GlobalConfigValues;

//---------------------------------------------------------
//   Appearance Dialog
//---------------------------------------------------------

class Appearance : public QDialog, public Ui::AppearanceDialogBase {
      Arranger* arr;
      QColor* color;
      QString currentBg;
      GlobalConfigValues* config;
      QButtonGroup* aPalette;

      Q_OBJECT
      void updateFonts();
      void updateColor();

   private slots:
      void apply();
      void ok();
      void cancel();
      void configBackground();
      void clearBackground();
      void colorItemSelectionChanged();
      void browseStyleSheet();
      void setDefaultStyleSheet();
      void browseFont(int);
      void browseFont0();
      void browseFont1();
      void browseFont2();
      void browseFont3();
      void browseFont4();
      void browseFont5();
      void browseFont6();
      void asliderChanged(int);
      void aValChanged(int);
      void rsliderChanged(int);
      void gsliderChanged(int);
      void bsliderChanged(int);
      void hsliderChanged(int);
      void ssliderChanged(int);
      void vsliderChanged(int);
      void addToPaletteClicked();
      void paletteClicked(int);

   public:
      Appearance(Arranger*, QWidget* parent=0);
      ~Appearance();
      void resetValues();
      };

#endif