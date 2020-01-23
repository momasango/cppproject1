object DMApp1: TDMApp1
  OldCreateOrder = False
  Height = 385
  Width = 374
  object conDB: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\Regina.Re' +
      'gina-PC\Desktop\Projects for the CV\Project 1 - Attorney Office ' +
      'Software\dbOffice.accdb;Persist Security Info=False'
    Mode = cmShareDenyNone
    Provider = 'Microsoft.ACE.OLEDB.12.0'
    Left = 80
    Top = 112
  end
  object DataSetClient: TADODataSet
    Parameters = <>
    Left = 160
    Top = 112
  end
  object dsClient: TDataSource
    Left = 160
    Top = 176
  end
  object ADOCommand1: TADOCommand
    Parameters = <>
    Left = 248
    Top = 112
  end
  object DataSetSearch1: TADODataSet
    Parameters = <>
    Left = 80
    Top = 176
  end
  object dsSearch1: TDataSource
    Left = 248
    Top = 176
  end
  object ADOCommand2: TADOCommand
    Parameters = <>
    Left = 80
    Top = 240
  end
end
