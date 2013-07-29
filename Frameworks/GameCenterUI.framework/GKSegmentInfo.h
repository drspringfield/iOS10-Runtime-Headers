/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKPlaceholderContentStateMachine, GKCollectionViewDataSource, NSString, NSObject<GKSegmentInfoDelegagte>;

@interface GKSegmentInfo : NSObject <GKStateMachineDelegate> {
    NSObject<GKSegmentInfoDelegagte> *_delegateWeak;
    GKCollectionViewDataSource *_dataSource;
    NSString *_title;
    GKPlaceholderContentStateMachine *_loadingMatchine;
}

@property NSObject<GKSegmentInfoDelegagte> * delegate;
@property(retain) GKCollectionViewDataSource * dataSource;
@property(retain) NSString * title;
@property(retain) GKPlaceholderContentStateMachine * loadingMatchine;
@property(retain) NSString * loadingState;


- (void)setLoadingMatchine:(id)arg1;
- (id)loadingMatchine;
- (id)initWithDataSource:(id)arg1;
- (id)loadingState;
- (void)didEnterErrorState;
- (void)didEnterNoContentState;
- (void)didExitLoadingState;
- (void)didEnterLoadingState;
- (void)setLoadingState:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)delegate;

@end
