/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor;

@interface _UITextFieldRoundedRectBackgroundViewNeue : UIImageView  {
    BOOL _disabled;
    UIColor *_strokeColor;
    UIColor *_fillColor;
    float _lineWidth;
    float _cornerRadius;
}

@property(retain) UIColor * strokeColor;
@property(retain) UIColor * fillColor;
@property float lineWidth;
@property float cornerRadius;


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFillColor:(id)arg1;
- (id)strokeColor;
- (id)fillColor;
- (float)cornerRadius;
- (float)lineWidth;
- (void)updateView;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 active:(BOOL)arg2 lineWidth:(float)arg3 updateView:(BOOL)arg4;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 active:(BOOL)arg2 lineWidth:(float)arg3;
- (float)_pixelAlignment;
- (float)_pathInset;
- (id)_fillColor:(BOOL)arg1;
- (id)_strokeColor:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 active:(BOOL)arg2;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setActive:(BOOL)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setCornerRadius:(float)arg1;
- (void)setLineWidth:(float)arg1;

@end
