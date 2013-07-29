/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIColor, UIImage;

@interface ABTransportButton : UIButton  {
    int _transportType;
    UIColor *_glyphColor;
    UIImage *_image;
}

@property int transportType;
@property(retain) UIColor * glyphColor;
@property(retain) UIImage * image;

+ (id)transportButton;

- (id)glyphColor;
- (id)_imageNameForType:(int)arg1;
- (void)_updateImageWithType:(int)arg1;
- (void)setGlyphColor:(id)arg1;
- (void)setTransportType:(int)arg1;
- (int)transportType;
- (void)setImage:(id)arg1;
- (id)image;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })backgroundRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)tintColorDidChange;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
