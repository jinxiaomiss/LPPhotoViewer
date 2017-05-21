Pod::Spec.new do |s|
  s.name             = "LPPhotoViewer"
  s.version          = "0.0.7"
  s.summary          = "a simple photo browser"
  s.description      = <<-DESC
                       a simple photo browser with custom-built transition efftect
                       DESC
  s.homepage         = "https://github.com/litt1e-p/LPPhotoViewer"
  s.license          = { :type => 'MIT' }
  s.author           = { "litt1e-p" => "litt1e.p4ul@gmail.com" }
  s.source           = { :git => "https://github.com/litt1e-p/LPPhotoViewer.git", :tag => '0.0.7' }
  s.platform = :ios, '7.0'
  s.requires_arc = true
  s.source_files = 'LPPhotoViewer/*'
  s.dependency 'SDWebImage'
  s.dependency 'DACircularProgress', '~> 2.3.1'
  s.frameworks = 'Foundation', 'UIKit'
end
