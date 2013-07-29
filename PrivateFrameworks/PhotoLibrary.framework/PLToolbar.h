/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIToolbar;

@interface PLToolbar : UIToolbar  {
    unsigned int _backgroundHidden : 1;
    unsigned int _backgroundAlwaysVisible : 1;
    UIToolbar *_persistentToolbar;
}

@property(getter=isBackgroundHidden) BOOL backgroundHidden;
@property(getter=isBackgroundAlwaysVisible) BOOL backgroundAlwaysVisible;


- (void)setBackgroundAlwaysVisible:(BOOL)arg1;
- (BOOL)isBackgroundAlwaysVisible;
- (void)setBackgroundHidden:(BOOL)arg1;
- (BOOL)isBackgroundHidden;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
