//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
short int num=0;
short int H=20;
short int Xpos=2*H;
short int Ypos=120;
short int Hmen=30;
short int Rhead=10;
short int Rhead2=Rhead/2;
short int revers=1;
short int L=H*1.41;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
Image1->Canvas->MoveTo(0,Ypos+3);
Image1->Canvas->Pen->Width=4;
Image1->Canvas->LineTo(Image1->ClientWidth,Ypos+3);
Image1->Canvas->Pen->Width=1;
Image1->Canvas->Pen->Mode=pmNotXor;
Draw();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
Timer1->Enabled=!Timer1->Enabled;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
Draw();
if((Xpos>=Image1->Picture->Width-H)||(Xpos<=H))
revers=-revers;
Xpos=Xpos+revers*H;
num=1-num;
Draw();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Draw()
{
short int Yhead;
switch (num)

{
 case 0:
 Yhead=Ypos-H-Hmen;
 Image1->Canvas->MoveTo(Xpos-H,Ypos);
 Image1->Canvas->LineTo(Xpos,Ypos-H);
 Image1->Canvas->LineTo(Xpos+H,Ypos);
 Image1->Canvas->MoveTo(Xpos,Ypos-H);
 Image1->Canvas->LineTo(Xpos,Yhead);
 Image1->Canvas->MoveTo(Xpos+revers*H,Ypos-H);
 Image1->Canvas->LineTo(Xpos,Yhead+4);
 Image1->Canvas->Ellipse(Xpos+revers*H-Rhead2,Yhead-H-Rhead,Xpos+revers*H+Rhead2,Yhead-H+Rhead2);
 Image1->Canvas->LineTo(Xpos+revers*H,Yhead+H);
 Image1->Canvas->Ellipse(Xpos+revers*H-Rhead2,Yhead+H-Rhead,Xpos+revers*H+Rhead2,Yhead+H+Rhead2);
 Image1->Canvas->Ellipse(Xpos-Rhead,Yhead,Xpos+Rhead,Yhead-2*Rhead);
 Image1->Canvas->Rectangle(Xpos-Rhead,Yhead-2*Rhead-1,Xpos+Rhead,Yhead-2*Rhead-4);
 break;
 case 1:
 Yhead=Ypos-L-Hmen;
 Image1->Canvas->MoveTo(Xpos,Ypos);
 Image1->Canvas->LineTo(Xpos,Yhead);
 Image1->Canvas->MoveTo(Xpos,Yhead+4);
 Image1->Canvas->LineTo(Xpos+revers*L,Yhead+4);
 Image1->Canvas->Ellipse(Xpos+revers*L-Rhead2,Yhead+4-Rhead2,Xpos+revers*L+Rhead2,Yhead+4+Rhead2);
 Image1->Canvas->Ellipse(Xpos-Rhead,Yhead,Xpos+Rhead,Yhead-2*Rhead);
 Image1->Canvas->Rectangle(Xpos-H/2,Yhead-2*Rhead-1,Xpos+H/2,Yhead-2*Rhead-4);
}
}
//---------------------------------------------------------------------------
