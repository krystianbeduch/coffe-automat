object Form3: TForm3
  Left = 1391
  Top = 685
  Width = 521
  Height = 289
  AutoSize = True
  Caption = 'Form3'
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
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 505
    Height = 250
    TabOrder = 0
    object Label2: TLabel
      Left = 0
      Top = 40
      Width = 233
      Height = 20
      Alignment = taCenter
      AutoSize = False
      Caption = 'Do zap'#322'aty pozosta'#322'o:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label1: TLabel
      Left = 0
      Top = 16
      Width = 233
      Height = 20
      Alignment = taCenter
      AutoSize = False
      Caption = 'P'#321'ATNO'#346#262
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object ToPayLabel: TLabel
      Left = 0
      Top = 72
      Width = 233
      Height = 20
      Alignment = taCenter
      AutoSize = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clRed
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label3: TLabel
      Left = 240
      Top = 16
      Width = 233
      Height = 20
      Alignment = taCenter
      AutoSize = False
      Caption = 'Wrzuc monete'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Pay2zlButton: TSpeedButton
      Left = 311
      Top = 72
      Width = 65
      Height = 25
      Caption = '2 z'#322
      Flat = True
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = Pay2zlButtonClick
    end
    object Pay10grButton: TSpeedButton
      Left = 236
      Top = 40
      Width = 65
      Height = 25
      Caption = '10 gr'
      Flat = True
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = Pay10grButtonClick
    end
    object Pay20grButton: TSpeedButton
      Left = 312
      Top = 40
      Width = 64
      Height = 25
      Caption = '20 gr'
      Flat = True
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = Pay20grButtonClick
    end
    object Pay1zlButton: TSpeedButton
      Left = 236
      Top = 72
      Width = 65
      Height = 25
      Caption = '1 z'#322
      Flat = True
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = Pay1zlButtonClick
    end
    object Pay50grButton: TSpeedButton
      Left = 381
      Top = 40
      Width = 65
      Height = 25
      Caption = '50 gr'
      Flat = True
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = Pay50grButtonClick
    end
    object Pay5zlrButton: TSpeedButton
      Left = 381
      Top = 72
      Width = 65
      Height = 25
      Caption = '5 z'#322
      Flat = True
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = Pay5zlrButtonClick
    end
    object Label4: TLabel
      Left = 0
      Top = 96
      Width = 233
      Height = 20
      Alignment = taCenter
      AutoSize = False
      Caption = 'Twoja reszta'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      Visible = False
    end
    object RestLabel: TLabel
      Left = 0
      Top = 128
      Width = 233
      Height = 20
      Alignment = taCenter
      AutoSize = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clRed
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      Visible = False
    end
    object PaymentExitButton: TBitBtn
      Left = 280
      Top = 112
      Width = 145
      Height = 25
      Cancel = True
      Caption = 'Przerwij platnosc'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ModalResult = 2
      ParentFont = False
      TabOrder = 0
      Glyph.Data = {
        DE010000424DDE01000000000000760000002800000024000000120000000100
        0400000000006801000000000000000000001000000000000000000000000000
        80000080000000808000800000008000800080800000C0C0C000808080000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
        333333333333333333333333000033338833333333333333333F333333333333
        0000333911833333983333333388F333333F3333000033391118333911833333
        38F38F333F88F33300003339111183911118333338F338F3F8338F3300003333
        911118111118333338F3338F833338F3000033333911111111833333338F3338
        3333F8330000333333911111183333333338F333333F83330000333333311111
        8333333333338F3333383333000033333339111183333333333338F333833333
        00003333339111118333333333333833338F3333000033333911181118333333
        33338333338F333300003333911183911183333333383338F338F33300003333
        9118333911183333338F33838F338F33000033333913333391113333338FF833
        38F338F300003333333333333919333333388333338FFF830000333333333333
        3333333333333333333888330000333333333333333333333333333333333333
        0000}
      NumGlyphs = 2
    end
  end
end
