/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class PUPhotoView, UIImageView, UIActivityIndicatorView;

@interface PUCameraImportItemCell : UICollectionViewCell  {
    PUPhotoView *_photoView;
    UIImageView *_badgeImageView;
    int _badgeType;
    UIActivityIndicatorView *_spinner;
}

@property int badgeType;
@property(retain) UIImageView * badgeImageView;
@property(retain) UIActivityIndicatorView * spinner;
@property(retain) PUPhotoView * photoView;


- (int)badgeType;
- (void)setBadgeImageView:(id)arg1;
- (id)badgeImageView;
- (void)setPhotoImage:(id)arg1 withSize:(struct CGSize { float x1; float x2; })arg2 fillMode:(int)arg3;
- (void)setBadgeType:(int)arg1;
- (void)_createSpinnerIfNecessary;
- (id)photoView;
- (void)setSpinner:(id)arg1;
- (void)setPhotoView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (id)spinner;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end
