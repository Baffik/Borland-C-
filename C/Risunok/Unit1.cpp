//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int x1,x2,y1,y2,x3,y3,x4,y4;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ComboBox1Change(TObject *Sender)
{


  if (ComboBox1->ItemIndex ==0)
 {
 Image1->Canvas->Ellipse(x1,x2,y1,y2);
 }
 else if (ComboBox1->ItemIndex ==1)
 {
 Image1->Canvas->Rectangle(x1,x2,y1,y2);
 }
 else if (ComboBox1->ItemIndex ==2)
 {
 TPoint p[2];
p[0].x=x1; p[0].y=y1;
p[1].x=x2; p[1].y=y2;
 Image1->Canvas->Polyline(p,1);
 }
  else if (ComboBox1->ItemIndex ==3)
 {
 Image1->Canvas->LineTo(x1,x2);
 }
  else if (ComboBox1->ItemIndex ==4)
 {
 //Image1->Canvas->Pie(x1,y1,x2,y2,x3,�3,�4,�4);
 }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::RadioGroup1Click(TObject *Sender)
{
if (RadioGroup1->ItemIndex ==0)
 {
 Image1->Canvas->Brush->Color=clYellow;
 }
  else if (RadioGroup1->ItemIndex ==1)
 {
 Image1->Canvas->Brush->Color=clBlue;
 }
 else if (RadioGroup1->ItemIndex ==2)
 {
 Image1->Canvas->Brush->Color=clRed;
 }
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
x1=StrToInt(Edit1->Text);
x2=StrToInt(Edit2->Text);
y1=StrToInt(Edit3->Text);
y2=StrToInt(Edit4->Text);
//x3=StrToInt(Edit5->Text);
//y3=StrToInt(Edit6->Text);
//x4=StrToInt(Edit7->Text);
//y4=StrToInt(Edit8->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::RadioGroup2Click(TObject *Sender)
{
   if (RadioGroup2->ItemIndex ==0)
 {
 Image1->Canvas->Pen-> Color = clYellow;
 }
  else if (RadioGroup2->ItemIndex ==1)
 {
 Image1->Canvas->Pen->Color=clBlue;
 }
 else if (RadioGroup2->ItemIndex ==2)
 {
 Image1->Canvas->Pen ->Color=clRed;
 }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::RadioGroup3Click(TObject *Sender)
{
if (RadioGroup3->ItemIndex ==0)
 {
 Image1->Canvas->Brush->Style=bsVertical;
 }
  else if (RadioGroup3->ItemIndex ==1)
 {
 Image1->Canvas->Brush->Style=bsCross;
 }
 else if (RadioGroup3->ItemIndex ==2)
 {
 Image1->Canvas->Brush->Style=bsFDiagonal;
 }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
Image1->Picture->Bitmap=NULL;
}
//---------------------------------------------------------------------------
