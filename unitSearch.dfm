object formSearch: TformSearch
  Left = 0
  Top = 0
  Caption = 'formSearch'
  ClientHeight = 367
  ClientWidth = 426
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object lblAction: TLabel
    Left = 32
    Top = 287
    Width = 40
    Height = 13
    Caption = 'lblAction'
  end
  object edtSearch: TEdit
    Left = 32
    Top = 252
    Width = 121
    Height = 21
    TabOrder = 0
    TextHint = 'Search here.'
    OnChange = edtSearchChange
  end
  object btnAction: TButton
    Left = 312
    Top = 310
    Width = 75
    Height = 25
    Caption = 'OK'
    CommandLinkHint = 'Pressing this button will take the action you chose.'
    TabOrder = 1
    OnClick = btnActionClick
  end
  object DBGrid1: TDBGrid
    Left = 32
    Top = 32
    Width = 355
    Height = 177
    TabOrder = 2
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object btnBack: TButton
    Left = 312
    Top = 268
    Width = 34
    Height = 25
    Caption = '<'
    TabOrder = 3
  end
  object btnForward: TButton
    Left = 352
    Top = 268
    Width = 35
    Height = 25
    Caption = '>'
    TabOrder = 4
  end
  object cmbAction: TComboBox
    Left = 32
    Top = 312
    Width = 129
    Height = 21
    TabOrder = 5
    Text = 'cmbAction'
  end
end
