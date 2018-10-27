

Pod::Spec.new do |s|


  s.name         = "CRUserStatisticsSDK"
  s.version      = "0.0.1"
  s.summary      = "This is a tool for QRCode / bar code scanning."
  s.description  = <<-DESC
                   This is a tool for QRCode / bar code scanning.
                   DESC

  s.homepage     = "https://github.com/yslin2011"
  s.license      = "MIT"

  s.author             = { "yslin" => "359927530@qq.com" }
  s.platform     = :ios
  s.platform     = :ios, "9.0"

  s.source           = { :git => "https://github.com/yslin2011/CRUserStatistics.git"}
# s.source_files = 'CRView/*.*'

  s.frameworks = 'Foundation'
  s.dependency 'FMDB'
  s.dependency 'MJExtension'
  s.vendored_frameworks = "CRUserStatisticsSDK.framework"

  s.requires_arc = true

end
