/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class <GKSessionPrivateDelegate>, GKTable, GKConnection, GKAutoPeerIDTable, GKVoiceChatSessionListener, GKList, <GKSessionDelegate>, <GKSessionDataReceiveHandler>, <GKSessionDOOBReceiveHandler>, GKSession, NSString;

@interface GKSessionInternal : NSObject  {
    GKSession *_session;
    NSString *domain;
    NSString *serviceType;
    unsigned int _port;
    NSString *_displayName;
    unsigned int _pid;
    unsigned int maxPeers;
    struct OpaqueGCKSession { } *sessionRef;
    struct OpaqueAGPSession { } *agpSessionRef;
    GKConnection *_connection;
    <GKSessionDelegate> *_delegate;
    <GKSessionPrivateDelegate> *_privateDelegate;
    <GKSessionDataReceiveHandler> *_dataReceiveHandler;
    void *_dataReceiveHandlerContext;
    <GKSessionDOOBReceiveHandler> *_doobReceiveHandler[2];
    void *_doobReceiveHandlerContext[2];
    GKTable *_peerInfoTable;
    GKTable *_peerNameTable;
    GKAutoPeerIDTable *_peerIDTable;
    GKList *_peersAvailable;
    GKList *_peersConnected;
    GKList *_peersForCleanup;
    GKList *_peersPendingIncomingInvitation;
    GKList *_peersPendingOutgoingInvitation;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _lock;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _delegateLock;
    BOOL _isSearching;
    BOOL _isPublishing;
    BOOL _sessionStarted;
    int _mode;
    BOOL _isBusy;
    NSString *sessionID;
    NSString *displayName;
    double disconnectTimeout;
    struct _DNSServiceRef_t { } *_dnsServiceConnection;
    struct _DNSServiceRef_t { } *_dnsServiceResolveConnection;
    int _sReset;
    struct _DNSServiceRef_t { } *_serviceBrowser;
    struct _DNSServiceRef_t { } *_service;
    struct _DNSServiceRef_t { } *_oldService;
    BOOL _handleEventsRunning;
    BOOL _stopHandlingEvents;
    BOOL _wifiEnabled;
    BOOL _shutdown;
    GKVoiceChatSessionListener *_voiceChatListener;
}

@property struct OpaqueGCKSession { }* sessionRef;
@property struct OpaqueAGPSession { }* agpSessionRef;
@property(copy) NSString * domain;
@property(copy) NSString * serviceType;
@property unsigned int maxPeers;
@property unsigned int port;
@property(readonly) GKConnection * connection;
@property(readonly) id dataReceiveHandler;
@property <GKSessionDelegate> * delegate;
@property(readonly) NSString * sessionID;
@property(readonly) NSString * displayName;
@property(readonly) int sessionMode;
@property(readonly) NSString * peerID;
@property double disconnectTimeout;
@property(getter=isAvailable) BOOL available;
@property <GKSessionPrivateDelegate> * privateDelegate;
@property(getter=isBusy) BOOL busy;
@property BOOL wifiEnabled;


- (void)setAgpSessionRef:(struct OpaqueAGPSession { }*)arg1;
- (void)setSessionRef:(struct OpaqueGCKSession { }*)arg1;
- (struct OpaqueGCKSession { }*)sessionRef;
- (void)setMaxPeers:(unsigned int)arg1;
- (unsigned int)maxPeers;
- (id)voiceChatSessionListener;
- (void)didResolveService:(struct _DNSServiceRef_t { }*)arg1 forPeer:(id)arg2 hostName:(const char *)arg3 port:(unsigned short)arg4 interface:(unsigned int)arg5 txtLen:(unsigned short)arg6 txtRecord:(const void*)arg7 withError:(int)arg8 moreComing:(BOOL)arg9;
- (void)didLookupHostname:(struct _DNSServiceRef_t { }*)arg1 forPeer:(id)arg2 hostName:(const char *)arg3 address:(const struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; }*)arg4 interface:(unsigned int)arg5 withError:(int)arg6 moreComing:(BOOL)arg7;
- (void)didRemoveService:(const char *)arg1 fromIF:(const char *)arg2 withError:(int)arg3 moreComing:(BOOL)arg4;
- (void)didFindService:(const char *)arg1 fromIF:(const char *)arg2 withError:(int)arg3 moreComing:(BOOL)arg4;
- (void)stopOldService;
- (id)peersWithConnectionState:(int)arg1;
- (void)timeoutConnectToPeer:(id)arg1;
- (BOOL)sendAudioData:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 error:(id*)arg4;
- (BOOL)tryConnectToPeer:(id)arg1;
- (void)didUpdateTXTRecordForPeer:(id)arg1 fromIF:(const char *)arg2 txtLen:(unsigned short)arg3 txtRecord:(const void*)arg4 withError:(int)arg5 moreComing:(BOOL)arg6;
- (void)cleanupExAvailablePeers;
- (void)processTXTRecordForPeer:(id)arg1 txtLen:(unsigned short)arg2 txtRecord:(const void*)arg3;
- (BOOL)filterService:(const char *)arg1 withPID:(unsigned int)arg2;
- (void)setBusy:(BOOL)arg1;
- (void)handleEvents;
- (BOOL)checkDNSConnection;
- (id)displayNameForPeer:(id)arg1;
- (BOOL)passesSendDataSanityCheck:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 error:(id*)arg4;
- (BOOL)sendData:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 isAudio:(BOOL)arg4 error:(id*)arg5;
- (void)setDOOBReceiveHandler:(id)arg1 withContext:(void*)arg2 inBand:(unsigned int)arg3;
- (void)browse;
- (void)disconnectFromAllPeers;
- (id)stringForGCKID:(unsigned int)arg1;
- (struct OpaqueAGPSession { }*)agpSessionRef;
- (void)didPublishWithError:(int)arg1;
- (BOOL)parseServiceName:(const char *)arg1 intoDisplayName:(id*)arg2 pid:(unsigned int*)arg3 state:(id*)arg4;
- (void)tellDelegate_networkStatisticsChanged:(id)arg1;
- (void)tellDelegate_updateRelay:(id)arg1;
- (void)tellDelegate_initiateRelay:(id)arg1;
- (void)tellDelegate_peerDidBecomeBusy:(id)arg1;
- (void)tellDelegate_connectionRequestToPeerFailed:(id)arg1;
- (void)tellDelegate_gotInvited:(id)arg1;
- (void)tellDelegate_didReceiveData:(id)arg1;
- (void)tellDelegate_didReceiveBand_RetryICE:(id)arg1;
- (void)tellDelegate_peerDidBecomeUnavailable:(id)arg1;
- (void)tellDelegate_peerDidBecomeAvailable:(id)arg1;
- (void)tellDelegate_isConnectingPeer:(id)arg1;
- (void)tellDelegate_didDisconnectPeer:(id)arg1;
- (void)tellDelegate_didConnectPeer:(id)arg1;
- (void)setDisplayName:(id)arg1 forPeer:(unsigned int)arg2;
- (void)printDictionaries;
- (id)createNSErrorFromGKSessionError:(int)arg1 description:(id)arg2 reason:(id)arg3;
- (id)createNSErrorFromHRESULT:(long)arg1 description:(id)arg2 reason:(id)arg3;
- (BOOL)isShuttingDown;
- (void)stopResolvingAllPeers;
- (void)tellDelegate_sessionDidFailWithError:(id)arg1;
- (id)dataReceiveHandler;
- (void)receiveDOOB:(id)arg1 fromPeer:(id)arg2 inSession:(id)arg3 context:(void*)arg4;
- (id)privateDelegate;
- (void)sendCallbacksToDelegate:(struct { int x1; char *x2; int x3; unsigned int x4; }*)arg1 remotePeer:(unsigned int)arg2;
- (void)setPrivateDelegate:(id)arg1;
- (BOOL)wifiEnabled;
- (void)setWifiEnabled:(BOOL)arg1;
- (BOOL)isPeerBusy:(id)arg1;
- (void)setAvailable:(BOOL)arg1;
- (BOOL)isAvailable;
- (int)sessionMode;
- (void)disconnectPeerFromAllPeers:(id)arg1;
- (void)denyConnectionFromPeer:(id)arg1;
- (BOOL)acceptConnectionFromPeer:(id)arg1 error:(id*)arg2;
- (void)cancelConnectToPeer:(id)arg1;
- (void)connectToPeer:(id)arg1 withTimeout:(double)arg2;
- (void)setDataReceiveHandler:(id)arg1 withContext:(void*)arg2;
- (BOOL)sendDataToAllPeers:(id)arg1 withDataMode:(int)arg2 error:(id*)arg3;
- (BOOL)sendData:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 error:(id*)arg4;
- (double)disconnectTimeout;
- (void)setDisconnectTimeout:(double)arg1;
- (id)initWithConnection:(id)arg1 session:(id)arg2 delegate:(id)arg3;
- (id)initWithSessionID:(id)arg1 displayName:(id)arg2 session:(id)arg3 sessionMode:(int)arg4;
- (void)setServiceType:(id)arg1;
- (id)serviceType;
- (id)sessionID;
- (id)peerID;
- (void)reset;
- (id)displayName;
- (void)setPort:(unsigned int)arg1;
- (BOOL)isBusy;
- (unsigned int)port;
- (void)setDelegate:(id)arg1;
- (id)domain;
- (void)dealloc;
- (id)description;
- (id)delegate;
- (id)serviceName;
- (id)connection;
- (void)publish;
- (void)unlock;
- (void)lock;
- (void)setDomain:(id)arg1;

@end
