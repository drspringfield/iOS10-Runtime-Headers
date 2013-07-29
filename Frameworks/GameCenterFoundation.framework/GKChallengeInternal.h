/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKPlayerInternal, NSString, NSOrderedSet, NSDate, GKGameInternal;

@interface GKChallengeInternal : GKInternalRepresentation  {
    NSString *_challengeID;
    NSString *_issuingPlayerID;
    NSString *_receivingPlayerID;
    NSString *_message;
    NSDate *_issueDate;
    NSDate *_completionDate;
    NSOrderedSet *_compatibleBundleIDs;
    GKGameInternal *_game;
    GKPlayerInternal *_issuingPlayer;
    GKPlayerInternal *_receivingPlayer;
    int _state;
    NSString *_bundleID;
}

@property(retain) NSString * challengeID;
@property(retain) NSString * bundleID;
@property(retain) NSString * issuingPlayerID;
@property(retain) NSString * receivingPlayerID;
@property(retain) NSDate * issueDate;
@property(retain) NSDate * completionDate;
@property int state;
@property(retain) NSOrderedSet * compatibleBundleIDs;
@property(retain) NSString * message;
@property(retain) GKGameInternal * game;
@property(retain) GKPlayerInternal * issuingPlayer;
@property(retain) GKPlayerInternal * receivingPlayer;
@property(readonly) unsigned int type;

+ (id)secureCodedPropertyKeys;
+ (id)internalRepresentation;

- (void)setBundleID:(id)arg1;
- (void)setIssueDate:(id)arg1;
- (void)setReceivingPlayer:(id)arg1;
- (void)setIssuingPlayer:(id)arg1;
- (void)setCompatibleBundleIDs:(id)arg1;
- (void)setReceivingPlayerID:(id)arg1;
- (void)setChallengeID:(id)arg1;
- (id)findLocalGameBundleID;
- (id)issueRepresentationToPlayerID:(id)arg1;
- (id)issueDate;
- (id)challengeID;
- (id)compatibleBundleIDs;
- (id)receivingPlayer;
- (id)issuingPlayer;
- (void)setIssuingPlayerID:(id)arg1;
- (id)issuingPlayerID;
- (id)receivingPlayerID;
- (void)setGame:(id)arg1;
- (id)game;
- (id)serverRepresentation;
- (void)setCompletionDate:(id)arg1;
- (id)completionDate;
- (id)bundleID;
- (id)message;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (void)setState:(int)arg1;
- (int)state;
- (void)setMessage:(id)arg1;
- (unsigned int)type;

@end
