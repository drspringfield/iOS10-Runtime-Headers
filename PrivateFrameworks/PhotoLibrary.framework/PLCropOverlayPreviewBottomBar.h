/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIButton;

@interface PLCropOverlayPreviewBottomBar : UIView  {
    int _backgroundStyle;
    UIButton *_cancelButton;
    UIButton *_doneButton;
    UIButton *_playbackButton;
}

@property int backgroundStyle;
@property(readonly) UIButton * cancelButton;
@property(readonly) UIButton * doneButton;
@property(readonly) UIButton * playbackButton;


- (void)_commonPLCropOverlayEditPhotoBottomBarInitialization;
- (void)_updateBackgroundStyle;
- (id)playbackButton;
- (id)doneButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setBackgroundStyle:(int)arg1 animated:(BOOL)arg2;
- (int)backgroundStyle;
- (void)setBackgroundStyle:(int)arg1;
- (id)cancelButton;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;

@end
