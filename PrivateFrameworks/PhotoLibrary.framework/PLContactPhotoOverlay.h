/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UILabel, UIImageView;

@interface PLContactPhotoOverlay : UIView  {
    UILabel *_titleLabel;
    UIImageView *__avatarPreview;
}

@property(readonly) UILabel * titleLabel;
@property(readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } overlayEdgeInsets;
@property(readonly) UIImageView * _avatarPreview;


- (id)_avatarPreview;
- (void)endAvatarTracking;
- (void)beginAvatarTrackingFromImageView:(id)arg1;
- (void)_commonPLContactPhotoOverlayInitialization;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inscribingBounds;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })overlayEdgeInsets;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)titleLabel;
- (void)layoutSubviews;

@end