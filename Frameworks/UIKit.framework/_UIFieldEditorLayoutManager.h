/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFieldEditorLayoutManager : NSLayoutManager  {
    bool_needsExtraBulletRendering;
}

@property bool needsExtraBulletRendering;


- (void)showCGGlyphs:(const unsigned short*)arg1 positions:(const struct CGPoint { float x1; float x2; }*)arg2 count:(unsigned int)arg3 font:(id)arg4 matrix:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg5 attributes:(id)arg6 inContext:(struct CGContext { }*)arg7;
- (void)setNeedsExtraBulletRendering:(bool)arg1;
- (bool)needsExtraBulletRendering;

@end
