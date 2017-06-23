object Form1: TForm1
  Left = 210
  Top = 219
  Width = 1342
  Height = 769
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object DBGrid1: TDBGrid
    Left = 16
    Top = 56
    Width = 545
    Height = 361
    DataSource = DataSource1
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
  end
  object DBGrid2: TDBGrid
    Left = 600
    Top = 144
    Width = 705
    Height = 193
    DataSource = DataSource2
    TabOrder = 1
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
  end
  object DataSource1: TDataSource
    DataSet = Table1
    Left = 80
    Top = 8
  end
  object Table1: TTable
    Active = True
    DatabaseName = 'BCDEMOS'
    TableName = 'clients.dbf'
    Left = 16
    Top = 8
  end
  object Query1: TQuery
    Active = True
    DatabaseName = 'BCDEMOS'
    SQL.Strings = (
      'SELECT * FROM clients'
      'WHERE LAST_NAME = "Parker"'
      ''
      '')
    Left = 712
    Top = 80
  end
  object DataSource2: TDataSource
    DataSet = Query1
    Left = 824
    Top = 64
  end
end
