Pod::Spec.new do |s|
  s.name         = "YZCGPointExtension"
  s.version      = "0.0.1"
  s.summary      = "A library of CGPoint functions to help you easily manipulate CGPoint."
  s.homepage     = "https://github.com/yichizhang/YZCGPointExtension"
  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.author       = { "Yichi Zhang" => "zhang-yi-chi@hotmail.com" }
  s.source       = {
    :git => "https://github.com/yichizhang/YZCGPointExtension.git",
    :tag => s.version.to_s
  }

  s.platform     = :ios, '6.0'
  s.requires_arc = true

  s.source_files = 'YZCGPointExtension/*.{h,m}'
  #s.resources    = 'RES.bundle'

  s.framework  = 'Foundation', 'UIKit', 'CoreGraphics'

end