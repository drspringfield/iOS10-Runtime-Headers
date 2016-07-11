/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

@interface SGUIBannerView : UIView <EKEventViewDelegate, EKEventViewDelegatePrivate> {
    UIButton * _addButton;
    UIImageView * _bannerImageView;
    NSLayoutConstraint * _buttonBaselineConstraint;
    UIButton * _closeButton;
    SGRealtimeContact * _currentContactSuggestion;
    SGRealtimeEvent * _currentEventSuggestion;
    <SGUIBannerViewDelegate> * _delegate;
    UIImageView * _disclosureImageView;
    NSArray * _multipleBannerImageConstraints;
    NSArray * _orderedSuggestions;
    UIImageView * _secondaryBannerImageView;
    NSArray * _singleBannerImageConstraints;
    NSLayoutConstraint * _subtitleBaselineConstraint;
    UILabel * _suggestionPrefixText;
    UILabel * _suggestionText;
    UITapGestureRecognizer * _tapGestureRecognizer;
    NSLayoutConstraint * _titleBaselineConstraint;
}

@property (nonatomic, retain) UIButton *addButton;
@property (nonatomic, readonly, copy) UIImage *bannerImage;
@property (nonatomic, retain) UIImageView *bannerImageView;
@property (nonatomic, retain) UIButton *closeButton;
@property (nonatomic, readonly, copy) NSArray *currentSuggestionGroup;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SGUIBannerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) UIImage *disclosureImage;
@property (nonatomic, retain) UIImageView *disclosureImageView;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *orderedSuggestions;
@property (nonatomic, readonly, copy) UIImage *secondaryBannerImage;
@property (nonatomic, retain) UIImageView *secondaryBannerImageView;
@property (nonatomic, retain) UILabel *suggestionPrefixText;
@property (nonatomic, retain) UILabel *suggestionText;
@property (readonly) Class superclass;

+ (id)_calendarImage;
+ (id)_cancelImage;
+ (id)_contactsImage;
+ (id)_disclosureChevronImage:(bool)arg1;
+ (id)_suggestionsService;
+ (double)bannerHeightConstant;
+ (id)bannerViewForEventSuggestions:(id)arg1 contactSuggestions:(id)arg2;
+ (id)buttonFont;
+ (double)interLabelBaselineDeltaConstant;
+ (id)subtitleFont;
+ (id)titleFont;
+ (double)topMarginConstant;

- (void).cxx_destruct;
- (void)_confirmSuggestion:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_dismissBannerRejectSuggestion:(bool)arg1;
- (id)_filterRealtimeSuggestions:(id)arg1 forClass:(Class)arg2;
- (id)_findSuggestionsOfClass:(Class)arg1;
- (void)_installLayoutConstraints;
- (void)_rejectSuggestion:(id)arg1;
- (void)_setupViews;
- (void)_tapGestureRecognized:(id)arg1;
- (void)_update;
- (void)_updateUI;
- (id)addButton;
- (bool)areMultipleSuggestionsPresent;
- (id)bannerImage;
- (id)bannerImageView;
- (id)closeButton;
- (void)confirmContactSuggestion;
- (void)confirmEventSuggestion;
- (id)currentSuggestionGroup;
- (id)delegate;
- (id)disclosureImage;
- (id)disclosureImagePressed;
- (id)disclosureImageView;
- (void)dismissBanner:(id)arg1;
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (bool)eventViewControllerShouldAlwaysShowNavBar:(id)arg1;
- (id)initWithEventSuggestions:(id)arg1 contactSuggestions:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)orderedSuggestions;
- (id)popoverSourceView;
- (id)secondaryBannerImage;
- (id)secondaryBannerImageView;
- (void)setAddButton:(id)arg1;
- (void)setBannerImageView:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisclosureImageView:(id)arg1;
- (void)setOrderedSuggestions:(id)arg1;
- (void)setSecondaryBannerImageView:(id)arg1;
- (void)setSuggestionPrefixText:(id)arg1;
- (void)setSuggestionText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)suggestionPrefixText;
- (id)suggestionText;

@end