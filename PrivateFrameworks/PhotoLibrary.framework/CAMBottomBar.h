/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class CAMModeDial, CAMImageWell, CAMElapsedTimeView, CAMShutterButton, UIButton, CAMHDRButton, CAMFlipButton, CAMFilterButton;

@interface CAMBottomBar : UIView  {
    int _orientation;
    int _backgroundStyle;
    CAMModeDial *_modeDial;
    CAMImageWell *_imageWell;
    CAMShutterButton *_stillDuringVideoButton;
    CAMShutterButton *_shutterButton;
    CAMFilterButton *_filterButton;
    CAMFlipButton *_flipButton;
    CAMElapsedTimeView *_elapsedTimeView;
    CAMHDRButton *_HDRButton;
    UIButton *_cancelButton;
}

@property(readonly) int orientation;
@property int backgroundStyle;
@property(retain) CAMModeDial * modeDial;
@property(retain) CAMImageWell * imageWell;
@property(retain) CAMShutterButton * stillDuringVideoButton;
@property(retain) CAMShutterButton * shutterButton;
@property(retain) CAMFilterButton * filterButton;
@property(retain) CAMFlipButton * flipButton;
@property(retain) CAMElapsedTimeView * elapsedTimeView;
@property(retain) CAMHDRButton * HDRButton;
@property(retain) UIButton * cancelButton;


- (id)HDRButton;
- (id)elapsedTimeView;
- (id)flipButton;
- (id)filterButton;
- (id)shutterButton;
- (id)stillDuringVideoButton;
- (id)imageWell;
- (id)modeDial;
- (void)setHDRButton:(id)arg1;
- (void)setElapsedTimeView:(id)arg1;
- (void)setFlipButton:(id)arg1;
- (void)setFilterButton:(id)arg1;
- (void)setShutterButton:(id)arg1;
- (void)setStillDuringVideoButton:(id)arg1;
- (void)setImageWell:(id)arg1;
- (void)setModeDial:(id)arg1;
- (void)_layoutForVerticalOrientation;
- (void)_layoutForHorizontalOrientation;
- (void)_commonCAMBottomBarInitialization;
- (void)_updateBackgroundStyleAnimated:(BOOL)arg1;
- (id)initWithOrientation:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setBackgroundStyle:(int)arg1 animated:(BOOL)arg2;
- (int)backgroundStyle;
- (void)setBackgroundStyle:(int)arg1;
- (void)setCancelButton:(id)arg1;
- (id)cancelButton;
- (int)orientation;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;

@end
