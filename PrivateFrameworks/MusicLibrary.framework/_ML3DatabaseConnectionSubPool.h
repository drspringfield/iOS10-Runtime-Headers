/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSMutableSet, NSObject<OS_dispatch_semaphore>, NSObject<OS_dispatch_queue>, NSString;

@interface _ML3DatabaseConnectionSubPool : NSObject  {
    NSObject<OS_dispatch_queue> *_checkoutQueue;
    NSObject<OS_dispatch_queue> *_checkinQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_semaphore> *_waitingSemaphore;
    NSMutableSet *_availableConnections;
    NSMutableSet *_busyConnections;
    int _connectionsProfilingLevel;
    int _willDeleteDatabaseNotifyToken;
    int _homeSharingCachesClearedNotifyToken;
    BOOL _useReadOnlyConnections;
    BOOL _useDistantConnections;
    NSString *_databasePath;
    unsigned int _maxConcurrentConnections;
    unsigned int _connectionsJournalingMode;
}

@property(readonly) NSString * databasePath;
@property(readonly) unsigned int maxConcurrentConnections;
@property BOOL useReadOnlyConnections;
@property BOOL useDistantConnections;
@property unsigned int connectionsJournalingMode;
@property int connectionsProfilingLevel;


- (BOOL)useDistantConnections;
- (BOOL)useReadOnlyConnections;
- (unsigned int)maxConcurrentConnections;
- (void)_handleDatabaseDeletion;
- (unsigned int)connectionsJournalingMode;
- (int)connectionsProfilingLevel;
- (id)checkoutConnection:(BOOL*)arg1;
- (void)closeConnections;
- (void)setConnectionsJournalingMode:(unsigned int)arg1;
- (void)setUseDistantConnections:(BOOL)arg1;
- (void)setUseReadOnlyConnections:(BOOL)arg1;
- (id)initWithDatabasePath:(id)arg1 maxConcurrentConnections:(unsigned int)arg2;
- (void)checkInConnection:(id)arg1;
- (void)setConnectionsProfilingLevel:(int)arg1;
- (id)databasePath;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
