Pod::Spec.new do |s|
  s.name         = "AdSetQDCAdSDK"
  s.version      = "7.7.4.28"
  s.summary      = "AdSet广告对接聚合类"
  s.description  = <<-DESC
                      AdSetQDCAdSDK 是一个专业的广告聚合SDK，提供高效的广告展示和收益优化功能。
                    DESC
  s.homepage     = "https://github.com/OSETSDK/AdSetQDCAdSDK"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { 'shenshi' => 'yaohaofei@shenshiads.com' }
  
  # 设置最低支持版本
  s.ios.deployment_target = '11.0'
  
  # 源文件配置
  s.source       = {
    :git => 'https://github.com/OSETSDK/AdSetQDCAdSDK.git',
    :tag => s.version.to_s
  }
  
  # 主框架文件
  # 检查 AdSetQDCAdSDK.podspec 关键字段
  s.vendored_frameworks = '*.xcframework'

  # 系统框架依赖
  s.frameworks = "Foundation", "UIKit"
  
  # 资源文件
  s.resources = "*.bundle"

  # Swift版本设置
  s.swift_version = '5.0'
  
  
  # ================= 第三方依赖库 =================

  
end
