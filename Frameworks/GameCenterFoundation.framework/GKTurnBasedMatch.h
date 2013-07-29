/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKTurnBasedParticipant, GKTurnBasedMatchInternal, NSData, GKGame, GKPlayer, NSString, NSDate, NSArray;

@interface GKTurnBasedMatch : NSObject <GKSessionDelegate> {
    GKTurnBasedMatchInternal *_internal;
    NSArray *_participants;
    NSArray *_exchanges;
    unsigned int _state;
}

@property(readonly) NSString * matchID;
@property(readonly) NSDate * creationDate;
@property(readonly) NSArray * participants;
@property(readonly) int status;
@property(retain) GKTurnBasedParticipant * currentParticipant;
@property(readonly) NSData * matchData;
@property(copy) NSString * message;
@property unsigned int matchDataMaximumSize;
@property(readonly) NSArray * exchanges;
@property(readonly) NSArray * activeExchanges;
@property(readonly) NSArray * completedExchanges;
@property(readonly) unsigned int exchangeDataMaximumSize;
@property(readonly) unsigned int exchangeMaxInitiatedExchangesPerPlayer;
@property(retain) GKTurnBasedMatchInternal * internal;
@property(copy) NSDate * lastTurnDate;
@property(readonly) int turnNumber;
@property(readonly) NSDate * dateSortKey;
@property(readonly) GKTurnBasedParticipant * previousParticipant;
@property(readonly) GKTurnBasedParticipant * previousParticipantOrFirstKnownPlayer;
@property(readonly) GKTurnBasedParticipant * playingWithParticipantOrFirstKnownPlayer;
@property(readonly) GKTurnBasedParticipant * localPlayerParticipant;
@property(readonly) GKPlayer * showcasePlayer;
@property(readonly) GKTurnBasedParticipant * firstWinnerOrTiedOrLastLoser;
@property(readonly) GKPlayer * currentPlayer;
@property(retain) NSString * bundleID;
@property(retain) NSString * bundleVersion;
@property unsigned int state;
@property(readonly) BOOL isMyTurn;
@property(readonly) BOOL localPlayerHasRecentTurn;
@property(readonly) GKGame * game;

+ (void)findMatchForRequest:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadMatchWithID:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadTurnBasedMatchSummaries:(id)arg1;
+ (void)loadMatchesWithCompletionHandler:(id)arg1;
+ (id)_localizableMessageWithKey:(id)arg1 arguments:(id)arg2 defaultMessage:(id)arg3;
+ (void)loadTurnBasedMatchDetailsForMatchIDs:(id)arg1 loadGameData:(BOOL)arg2 withCompletionHandler:(id)arg3;
+ (id)matchesWithInternalRepresentations:(id)arg1;
+ (void)loadTurnBasedMatchSummariesIncludingCompatibleBundleID:(BOOL)arg1 withCompletionHandler:(id)arg2;
+ (void)loadMatchesIncludingCompatibleBundleID:(BOOL)arg1 withCompletionHandler:(id)arg2;
+ (void)getTurnBasedBadgeCountWithHandler:(id)arg1;
+ (void)loadTurnBasedMatchWithDetailsForMatchID:(id)arg1 withCompletionHandler:(id)arg2;
+ (id)keyPathsForValuesAffectingStatus;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;

- (void)removeWithCompletionHandler:(id)arg1;
- (void)participantQuitOutOfTurnWithOutcome:(int)arg1 withCompletionHandler:(id)arg2;
- (void)loadMatchDataWithCompletionHandler:(id)arg1;
- (BOOL)isMyTurn;
- (id)showcasePlayer;
- (void)sendReminderToParticipants:(id)arg1 localizableMessageKey:(id)arg2 arguments:(id)arg3 completionHandler:(id)arg4;
- (void)sendExchangeToParticipants:(id)arg1 data:(id)arg2 localizableMessageKey:(id)arg3 arguments:(id)arg4 timeout:(double)arg5 completionHandler:(id)arg6;
- (void)saveMergedMatchData:(id)arg1 withResolvedExchanges:(id)arg2 completionHandler:(id)arg3;
- (void)saveCurrentTurnWithMatchData:(id)arg1 completionHandler:(id)arg2;
- (void)endMatchInTurnWithMatchData:(id)arg1 completionHandler:(id)arg2;
- (void)participantQuitInTurnWithOutcome:(int)arg1 nextParticipant:(id)arg2 matchData:(id)arg3 completionHandler:(id)arg4;
- (void)endTurnWithNextParticipant:(id)arg1 matchData:(id)arg2 completionHandler:(id)arg3;
- (id)completedExchanges;
- (BOOL)localPlayerHasRecentTurn;
- (void)endMatchInTurnWithMatchData:(id)arg1 scores:(id)arg2 achievements:(id)arg3 completionHandler:(id)arg4;
- (void)participantQuitInTurnWithOutcome:(int)arg1 nextParticipants:(id)arg2 turnTimeout:(double)arg3 matchData:(id)arg4 completionHandler:(id)arg5;
- (id)indexesForParticipants:(id)arg1;
- (void)endTurnWithNextParticipants:(id)arg1 turnTimeout:(double)arg2 matchData:(id)arg3 completionHandler:(id)arg4;
- (void)declineInviteWithCompletionHandler:(id)arg1;
- (id)playingWithParticipantOrFirstKnownPlayer;
- (id)previousParticipantOrFirstKnownPlayer;
- (id)firstWinnerOrTiedOrLastLoser;
- (id)previousParticipant;
- (void)setCurrentParticipant:(id)arg1;
- (id)dateSortKey;
- (unsigned int)matchDataMaximumSize;
- (id)localPlayerParticipant;
- (id)currentParticipant;
- (id)activeExchanges;
- (void)setLocalizableMessageWithKey:(id)arg1 arguments:(id)arg2;
- (id)currentPlayer;
- (id)exchanges;
- (id)participants;
- (id)_exchangesForInternalRepresentation:(id)arg1 participants:(id)arg2;
- (id)_participantsForInternalRepresentation:(id)arg1;
- (void)_updateWithInternal:(id)arg1;
- (id)exchangeForID:(id)arg1;
- (void)acceptInviteWithCompletionHandler:(id)arg1;
- (void)rematchWithCompletionHandler:(id)arg1;
- (unsigned int)exchangeMaxInitiatedExchangesPerPlayer;
- (unsigned int)exchangeDataMaximumSize;
- (id)game;
- (void)setInternal:(id)arg1;
- (id)internal;
- (id)initWithInternalRepresentation:(id)arg1;
- (int)status;
- (id)message;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (int)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (void)setState:(unsigned int)arg1;
- (unsigned int)state;
- (void)setMessage:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end
