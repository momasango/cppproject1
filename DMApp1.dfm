object DataModule2: TDataModule2
  OldCreateOrder = False
  Height = 541
  Width = 580
  object conDB: TADOConnection
    ConnectionString = 
      'Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\Regina.Re' +
      'gina-PC\Desktop\Projects for the CV\Project 1 - Attorney Office ' +
      'Software\dbOffice.accdb;Persist Security Info=False'
    Provider = 'Microsoft.ACE.OLEDB.12.0'
    Left = 80
    Top = 96
  end
  object DataSetClient: TADODataSet
    Parameters = <>
    Left = 176
    Top = 96
  end
  object dsClient: TDataSource
    Left = 256
    Top = 104
  end
  object ADOCommand1: TADOCommand
    Parameters = <>
    Left = 328
    Top = 96
  end
end
