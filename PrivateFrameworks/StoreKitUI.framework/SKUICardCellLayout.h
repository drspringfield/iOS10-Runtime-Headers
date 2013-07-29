/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIImageView, UILabel, NSString, UIImage;

@interface SKUICardCellLayout : SKUIItemCellLayout  {
    UILabel *_artistLabel;
    int _numberOfUserRatings;
    UIImageView *_screenshotImageView;
    UILabel *_titleLabel;
    float _userRating;
    UIImageView *_userRatingImageView;
    UILabel *_userRatingLabel;
}

@property(copy) NSString * artistName;
@property int numberOfUserRatings;
@property float userRating;
@property(retain) UIImage * screenshotImage;
@property(copy) NSString * title;


- (id)screenshotImage;
- (int)numberOfUserRatings;
- (void)layoutForItemOfferChange;
- (void)setScreenshotImage:(id)arg1;
- (void)resetLayout;
- (void)setNumberOfUserRatings:(int)arg1;
- (void)setUserRating:(float)arg1;
- (float)userRating;
- (void)setArtistName:(id)arg1;
- (id)artistName;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setBackgroundColor:(id)arg1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end
