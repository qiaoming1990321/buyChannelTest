
Pod::Spec.new do |s| 
s.name = 'qmTestBuyChannel'
s.version = '1.0.9'
s.summary      = "qmTestBuyChannelFramework测试"
s.description  = <<-DESC
测试framework,测试静态库上传cocoapods
DESC
s.homepage = 'https://github.com/qiaoming1990321/buyChannelTest.git'
s.license ='MIT'
s.author = { 'qiaoming' => '447497298@qq.com'} 
s.ios.deployment_target = '8.0' 
s.source = { :git => 'https://github.com/qiaoming1990321/buyChannelTest.git', :tag => s.version.to_s} 
s.vendored_frameworks = "*.framework"
s.source_files = '*.framework/Headers/*.h'
s.requires_arc = true 
s.framework = 'UIKit' ,'AdSupport','iAd'
s.dependency "AppsFlyerFramework"

end
