object Form1: TForm1
  Left = 203
  Top = 139
  Width = 1258
  Height = 676
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 8
    Top = 8
    Width = 657
    Height = 553
  end
  object Button1: TButton
    Left = 272
    Top = 584
    Width = 75
    Height = 25
    Caption = '!'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 808
    Top = 56
  end
end
