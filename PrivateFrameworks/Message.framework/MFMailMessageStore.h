/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFActivityMonitor, MFMailboxUid, MailAccount;

@interface MFMailMessageStore : MFMessageStore  {
    unsigned int _state;
    struct { 
        unsigned int isReadOnly : 1; 
        unsigned int hasUnsavedChangesToMessageData : 1; 
        unsigned int haveOpenLockFile : 1; 
        unsigned int compacting : 1; 
        unsigned int cancelInvalidation : 1; 
        unsigned int forceInvalidation : 1; 
        unsigned int isWritingChangesToDisk : 1; 
        unsigned int isTryingToClose : 1; 
        unsigned int compactOnClose : 1; 
        unsigned int reserved : 23; 
    } _flags;
    MFMailboxUid *_mailboxUid;
    MailAccount *_account;
    unsigned int _deletedMessagesSize;
    unsigned int _deletedMessageCount;
    unsigned int _unreadMessageCount;
    unsigned int _generationNumber;
    unsigned int _lastFetchCount;
    MFActivityMonitor *_openMonitor;
}

+ (unsigned int)copyMessages:(id)arg1 toMailbox:(id)arg2 markAsRead:(BOOL)arg3 deleteOriginals:(BOOL)arg4 isDeletion:(BOOL)arg5 unsuccessfulOnes:(id)arg6;
+ (unsigned int)copyMessages:(id)arg1 toMailbox:(id)arg2 markAsRead:(BOOL)arg3 deleteOriginals:(BOOL)arg4 isDeletion:(BOOL)arg5 unsuccessfulOnes:(id)arg6 newMessages:(id)arg7;
+ (BOOL)storeAtPathIsWritable:(id)arg1;
+ (BOOL)createEmptyStoreIfNeededForPath:(id)arg1;
+ (BOOL)createEmptyStoreForPath:(id)arg1;
+ (Class)classForMimePart;
+ (Class)headersClass;

- (void)updateMessages:(id)arg1 updateNumberOfAttachments:(BOOL)arg2;
- (void)_rebuildTableOfContentsSynchronously;
- (int)archiveDestination;
- (BOOL)shouldArchive;
- (BOOL)shouldDeleteInPlace;
- (BOOL)canDeleteMessage:(id)arg1;
- (BOOL)shouldSetSummaryForMessage:(id)arg1;
- (id)loadMeetingMetadataForMessage:(id)arg1;
- (id)loadMeetingDataForMessage:(id)arg1;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (BOOL)shouldDownloadBodyDataForMessage:(id)arg1;
- (id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(BOOL)arg3;
- (BOOL)setPreferredEncoding:(unsigned long)arg1 forMessage:(id)arg2;
- (int)fetchMobileSynchronously:(unsigned int)arg1;
- (void)setFlagForAllMessages:(id)arg1 state:(BOOL)arg2;
- (void)setFlagsCancelled:(id)arg1 forMessages:(id)arg2;
- (id)willSetFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)setFlagsLocallyFromDictionary:(id)arg1 forMessages:(id)arg2;
- (BOOL)hasCachedDataForMimePart:(id)arg1;
- (id)uniqueRemoteIDsForMessages:(id)arg1;
- (id)lastViewedMessageWithOptions:(unsigned int)arg1;
- (id)messageForRemoteID:(id)arg1;
- (BOOL)allowsAppend;
- (void)messagesWereDeleted:(id)arg1;
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(BOOL)arg2;
- (void)doCompact;
- (BOOL)canCompact;
- (id)finishRoutingMessages:(id)arg1 routed:(id)arg2;
- (int)fetchMessagesWithRemoteIDs:(id)arg1 andSetFlags:(unsigned long long)arg2;
- (int)fetchMessagesWithMessageIDs:(id)arg1 andSetFlags:(unsigned long long)arg2;
- (BOOL)canFetchMessageIDs;
- (id)remoteIDsFromUniqueRemoteIDs:(id)arg1;
- (id)remoteIDsMatchingCriterion:(id)arg1 limit:(unsigned int)arg2 error:(id*)arg3;
- (int)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned int)arg2;
- (BOOL)canFetchSearchResults;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2;
- (id)copyMessagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2;
- (id)copyMessagesMatchingText:(id)arg1;
- (id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned int)arg1 limit:(unsigned int)arg2;
- (id)mutableCopyOfAllMessages;
- (id)copyOfMessagesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (unsigned int)indexOfMessage:(id)arg1;
- (BOOL)hasMessageForAccount:(id)arg1;
- (unsigned int)unreadCountMatchingCriterion:(id)arg1;
- (void)purgeMessagesBeyondLimit:(unsigned int)arg1 keepingMessage:(id)arg2;
- (unsigned int)growFetchWindow;
- (void)invalidateFetchWindow;
- (BOOL)shouldGrowFetchWindow;
- (unsigned int)serverUnreadCount;
- (void)deletedCount:(unsigned int*)arg1 andSize:(unsigned int*)arg2;
- (void)messagesWillBeCompacted:(id)arg1;
- (void)messagesWereCompacted:(id)arg1;
- (void)messagesWereAdded:(id)arg1;
- (void)structureDidChange;
- (void)allMessageFlagsDidChange:(id)arg1;
- (BOOL)isDrafts;
- (id)storePathRelativeToAccount;
- (BOOL)isOpened;
- (void)cancelOpen;
- (void)openAsynchronously;
- (id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2;
- (BOOL)_shouldChangeComponentMessageFlags;
- (BOOL)_shouldChangeComponentMessageFlagsForMessage:(id)arg1;
- (void)_setFlagsForMessages:(id)arg1;
- (void)updateBodyFlagsForMessage:(id)arg1 body:(id)arg2;
- (BOOL)supportsArchiving;
- (void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;
- (int)fetchMobileSynchronously:(unsigned int)arg1 preservingUID:(id)arg2 options:(unsigned int)arg3;
- (int)fetchNumMessages:(unsigned int)arg1 preservingUID:(id)arg2 options:(unsigned int)arg3;
- (void)setFlagsForAllMessagesFromDictionary:(id)arg1;
- (BOOL)_updateFlagForMessage:(id)arg1 key:(id)arg2 value:(BOOL)arg3;
- (id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (id)lastViewedMessageDate;
- (id)messageForMessageID:(id)arg1 options:(unsigned int)arg2;
- (unsigned int)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3;
- (unsigned int)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4;
- (unsigned int)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5;
- (void)setFlag:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;
- (unsigned int)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2;
- (id)_defaultRouterDestination;
- (id)copyMessagesMatchingText:(id)arg1 options:(unsigned int)arg2;
- (id)copyOfAllMessages;
- (id)copyOfAllMessagesWithOptions:(unsigned int)arg1;
- (unsigned int)fetchWindow;
- (BOOL)hasMoreFetchableMessages;
- (unsigned int)nonDeletedCountIncludingServerSearch:(BOOL)arg1 andThreadSearch:(BOOL)arg2;
- (unsigned int)serverMessageCount;
- (unsigned int)serverUnreadOnlyOnServerCount;
- (unsigned int)totalCount;
- (void)messagesWereAdded:(id)arg1 earliestReceivedDate:(id)arg2;
- (void)updateUserInfoToLatestValues;
- (void)openSynchronously;
- (void)undeleteMessages:(id)arg1;
- (void)_flushAllMessageData;
- (id)_setOrGetBody:(id)arg1 forMessage:(id)arg2 updateFlags:(BOOL)arg3;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;
- (id)mailboxUid;
- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (void)writeUpdatedMessageDataToDisk;
- (unsigned int)unreadCount;
- (void)setLibrary:(id)arg1;
- (BOOL)isReadOnly;
- (id)displayName;
- (id)account;
- (id)status;
- (void)close;
- (void)dealloc;
- (id)description;
- (void)didOpen;

@end
