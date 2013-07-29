/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIButton, UIImageView, UILabel, UIImage, NSString;

@interface SKUIEmptyContentPlaceholderView : UIView  {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _imageInsets;
    UIImageView *_imageView;
    UILabel *_label;
    UIButton *_signInButton;
}

@property(retain) UIImage * placeholderImage;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } placeholderImageInsets;
@property(copy) NSString * placeholderMessage;
@property(readonly) UILabel * placeholderMessageLabel;
@property BOOL showsSignInButton;
@property(readonly) UIButton * signInButton;


- (void)setPlaceholderImage:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })placeholderImageInsets;
- (BOOL)showsSignInButton;
- (void)setShowsSignInButton:(BOOL)arg1;
- (void)setPlaceholderMessage:(id)arg1;
- (void)setPlaceholderImageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)placeholderMessage;
- (void)maskPlaceholdersInBackdropView:(id)arg1;
- (id)signInButton;
- (id)placeholderMessageLabel;
- (id)placeholderImage;
- (void)setBackgroundColor:(id)arg1;
- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;

@end
