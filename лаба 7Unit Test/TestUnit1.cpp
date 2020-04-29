#include <System.hpp>
#pragma hdrstop
#include "TestUnit1.h"

#include <TestFramework.hpp>

class TTestTfm : public TTestCase
{
public:
  __fastcall virtual TTestTfm(System::String name) : TTestCase(name) {}
  virtual void __fastcall SetUp();
  virtual void __fastcall TearDown();

__published:
  void __fastcall TestBuEnterClick();
  void __fastcall TestBuInfoClick();
  void __fastcall TestBuZapisClick();
  void __fastcall TestBuRegistrClick();
  void __fastcall TestBuEnterinClick();
  void __fastcall TestBuRegistrinClick();
  void __fastcall TestBuGeneralClick();
  void __fastcall TestBuNoRegistr1Click();
  void __fastcall TestBuNoRegistrEndClick();
  void __fastcall TestButton4Click();
  void __fastcall TestFormCreate();
  void __fastcall TestButton7Click();
  void __fastcall TestbuTimetableClick();
  void __fastcall TestbuBacktomenuClick();
  void __fastcall TestButton8Click();
  void __fastcall TestButton9Click();
  void __fastcall TestButton11Click();
  void __fastcall TestButton12Click();
  void __fastcall TestButton10Click();
  void __fastcall TestButton16Click();
  void __fastcall TestButton17Click();
  void __fastcall TestButton21Click();
  void __fastcall TestButton20Click();
  void __fastcall TestButton19Click();
  void __fastcall TestButton18Click();
  void __fastcall TestButton15Click();
};


void __fastcall TTestTfm::SetUp()
{
}

void __fastcall TTestTfm::TearDown()
{
}

void __fastcall TTestTfm::TestBuEnterClick()
{

}

void __fastcall TTestTfm::TestBuInfoClick()
{
  // void __fastcall BuInfoClick(TObject *Sender)
}
    
void __fastcall TTestTfm::TestBuZapisClick()
{
  // void __fastcall BuZapisClick(TObject *Sender)
}
    
void __fastcall TTestTfm::TestBuRegistrClick()
{
  // void __fastcall BuRegistrClick(TObject *Sender)
}
    
void __fastcall TTestTfm::TestBuEnterinClick()
{
  // void __fastcall BuEnterinClick(TObject *Sender)
}
    
void __fastcall TTestTfm::TestBuRegistrinClick()
{
}
    
void __fastcall TTestTfm::TestBuGeneralClick()
{
  // void __fastcall BuGeneralClick(TObject *Sender)
}
    
void __fastcall TTestTfm::TestBuNoRegistr1Click()
{
  // void __fastcall BuNoRegistr1Click(TObject *Sender)
}

void __fastcall TTestTfm::TestBuNoRegistrEndClick()
{
  // void __fastcall BuNoRegistrEndClick(TObject *Sender)
}
    
void __fastcall TTestTfm::TestButton4Click()
{
  // void __fastcall Button4Click(TObject *Sender)
}
    
void __fastcall TTestTfm::TestFormCreate()
{
  // void __fastcall FormCreate(TObject *Sender)
}
    
void __fastcall TTestTfm::TestButton7Click()
{
  // void __fastcall Button7Click(TObject *Sender)
}
    
void __fastcall TTestTfm::TestbuTimetableClick()
{
  // void __fastcall buTimetableClick(TObject *Sender)
}
    
void __fastcall TTestTfm::TestbuBacktomenuClick()
{
  // void __fastcall buBacktomenuClick(TObject *Sender)
}
    
void __fastcall TTestTfm::TestButton8Click()
{
  // void __fastcall Button8Click(TObject *Sender)
}
    
void __fastcall TTestTfm::TestButton9Click()
{
  // void __fastcall Button9Click(TObject *Sender)
}
    
void __fastcall TTestTfm::TestButton11Click()
{
  // void __fastcall Button11Click(TObject *Sender)
}
    
void __fastcall TTestTfm::TestButton12Click()
{
  // void __fastcall Button12Click(TObject *Sender)
}
    
void __fastcall TTestTfm::TestButton10Click()
{
  // void __fastcall Button10Click(TObject *Sender)
}
    
void __fastcall TTestTfm::TestButton16Click()
{
  // void __fastcall Button16Click(TObject *Sender)
}
    
void __fastcall TTestTfm::TestButton17Click()
{
  // void __fastcall Button17Click(TObject *Sender)
}
    
void __fastcall TTestTfm::TestButton21Click()
{
  // void __fastcall Button21Click(TObject *Sender)
}
    
void __fastcall TTestTfm::TestButton20Click()
{
  // void __fastcall Button20Click(TObject *Sender)
}
    
void __fastcall TTestTfm::TestButton19Click()
{
  // void __fastcall Button19Click(TObject *Sender)
}
    
void __fastcall TTestTfm::TestButton18Click()
{
  // void __fastcall Button18Click(TObject *Sender)
}
    
void __fastcall TTestTfm::TestButton15Click()
{
  // void __fastcall Button15Click(TObject *Sender)
}
    


static void registerTests()
{
  Testframework::RegisterTest(TTestTfm::Suite());
}
#pragma startup registerTests 33
