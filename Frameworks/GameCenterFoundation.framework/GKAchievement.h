/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKPlayer, NSString, GKGame, GKAchievementInternal, NSDate;

@interface GKAchievement : NSObject <NSCopying, NSCoding, NSSecureCoding> {
    BOOL _showsCompletionBanner;
    BOOL _hidden;
    GKAchievementInternal *_internal;
    GKGame *_game;
    GKPlayer *_player;
}

@property(copy) NSString * identifier;
@property double percentComplete;
@property(getter=isCompleted,readonly) BOOL completed;
@property(getter=isHidden) BOOL hidden;
@property(copy) NSDate * lastReportedDate;
@property BOOL showsCompletionBanner;
@property(copy) NSString * playerID;
@property(readonly) NSString * groupIdentifier;
@property GKGame * game;
@property(retain) GKAchievementInternal * internal;
@property(retain) GKPlayer * player;

+ (void)resetAchievementsWithCompletionHandler:(id)arg1;
+ (void)loadAchievementWithID:(id)arg1 forGame:(id)arg2 players:(id)arg3 complete:(id)arg4;
+ (void)loadAchievementsWithCompletionHandler:(id)arg1;
+ (void)reportAchievements:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)reportAchievements:(id)arg1 whileScreeningChallenges:(BOOL)arg2 withEligibleChallenges:(id)arg3 withCompletionHandler:(id)arg4;
+ (void)loadAchievementsForGame:(id)arg1 players:(id)arg2 includeUnreported:(BOOL)arg3 includeHidden:(BOOL)arg4 withCompletionHandler:(id)arg5;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)supportsSecureCoding;
+ (void)reportAchievements:(id)arg1 withEligibleChallenges:(id)arg2 withCompletionHandler:(id)arg3;

- (void)reportAchievementWithCompletionHandler:(id)arg1;
- (id)initWithIdentifier:(id)arg1 forPlayer:(id)arg2;
- (BOOL)isCompleted;
- (void)setGame:(id)arg1;
- (BOOL)showsCompletionBanner;
- (void)setShowsCompletionBanner:(BOOL)arg1;
- (id)game;
- (void)setInternal:(id)arg1;
- (id)internal;
- (id)initWithIdentifier:(id)arg1;
- (void)setPlayer:(id)arg1;
- (id)player;
- (void)setHidden:(BOOL)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (BOOL)isHidden;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)canBeShared;
- (id)fetchSharingInfo;
- (void)_gkSetSharingInfo:(id)arg1;
- (id)_gkSharingInfo;
- (id)activityViewControllerOperation:(id)arg1;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewControllerSubject:(id)arg1;
- (int)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (void)loadImageWithCompletionHandler:(id)arg1;
- (id)imageURL;
- (void)showBanner;
- (void)selectChallengeablePlayerIDs:(id)arg1 withCompletionHandler:(id)arg2;
- (void)issueChallengeToPlayers:(id)arg1 message:(id)arg2;
- (id)challengeComposeControllerWithPlayers:(id)arg1 message:(id)arg2 completionHandler:(id)arg3;
- (void)issueChallengeForGame:(id)arg1 toPlayers:(id)arg2 message:(id)arg3;

@end
