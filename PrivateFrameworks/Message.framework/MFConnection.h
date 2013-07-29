/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <MFSASLSecurityLayer>, NSArray, NSData, NSMutableString, NSString, _MFSocket;

@interface MFConnection : NSObject  {
    <MFSASLSecurityLayer> *_securityLayer;
    _MFSocket *_socket;
    double _lastUsedTime;
    char *_buffer;
    int _bufferRemainingBytes;
    unsigned int _bufferStart;
    unsigned int _bufferLength;
    unsigned long _desiredBufferLength;
    struct z_stream_s { char *x1; unsigned int x2; unsigned int x3; char *x4; unsigned int x5; unsigned int x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned int x13; unsigned int x14; } *_deflater;
    struct z_stream_s { char *x1; unsigned int x2; unsigned int x3; char *x4; unsigned int x5; unsigned int x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned int x13; unsigned int x14; } *_inflater;
    char *_zbuffer;
    NSData *_logData;
    unsigned int _dontLogReads;
    unsigned int _readBytesNotLogged;
    NSMutableString *_readBytesToLog;
    unsigned int _isFetching : 1;
    unsigned int _allowFallbacks : 1;
    unsigned int _compressionEnabled : 1;
    unsigned int _bytesWritten;
    unsigned int _bytesRead;
}

@property BOOL isFetching;
@property(readonly) double lastUsedTime;
@property(readonly) NSArray * capabilities;
@property(readonly) NSArray * authenticationMechanisms;
@property(readonly) NSString * securityProtocol;
@property(readonly) BOOL isValid;
@property(readonly) BOOL hasBytesAvailable;
@property(readonly) BOOL isCellularConnection;
@property(readonly) BOOL loginDisabled;
@property(readonly) BOOL usesOpportunisticSockets;
@property(readonly) unsigned int bytesWritten;
@property(readonly) unsigned int bytesRead;

+ (void)setLogActivityOnHosts:(id)arg1;
+ (id)logActivityOnHosts;
+ (void)setLogActivityOnPorts:(id)arg1;
+ (id)logActivityOnPorts;
+ (void)setLogAllSocketActivity:(BOOL)arg1;
+ (BOOL)logAllSocketActivity;
+ (void)setLogClasses:(id)arg1;
+ (id)logClasses;
+ (void)logBytes:(const char *)arg1 length:(int)arg2;
+ (void)readLoggingDefaults;
+ (BOOL)shouldTryFallbacksAfterError:(id)arg1;
+ (void)initialize;
+ (void)flushLog;

- (unsigned int)bytesRead;
- (BOOL)startCompression;
- (BOOL)startTLSForAccount:(id)arg1;
- (BOOL)readBytesIntoData:(id)arg1 desiredLength:(unsigned long)arg2;
- (void)logReadChars:(const char *)arg1 length:(unsigned long)arg2;
- (void)enableReadLogging:(BOOL)arg1;
- (void)setDesiredReadBufferLength:(unsigned long)arg1;
- (void)setIsFetching:(BOOL)arg1;
- (BOOL)connectUsingSettings:(id)arg1;
- (void)_setupNetworkLogging;
- (BOOL)usesOpportunisticSockets;
- (void)enableExcessiveKeepaliveDetection:(BOOL)arg1;
- (void)enableThroughputMonitoring:(BOOL)arg1;
- (void)setAllowsFallbacks:(BOOL)arg1;
- (BOOL)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2;
- (id)authenticationMechanisms;
- (BOOL)connectUsingAccount:(id)arg1;
- (BOOL)readLineIntoData:(id)arg1;
- (BOOL)writeBytes:(const char *)arg1 length:(unsigned long)arg2 dontLogBytesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (BOOL)writeData:(id)arg1 dontLogBytesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)securityProtocol;
- (unsigned int)bytesWritten;
- (BOOL)authenticateUsingAccount:(id)arg1;
- (BOOL)connectUsingFallbacksForAccount:(id)arg1;
- (BOOL)isCellularConnection;
- (double)lastUsedTime;
- (id)capabilities;
- (BOOL)isFetching;
- (BOOL)loginDisabled;
- (void)disconnect;
- (BOOL)writeData:(id)arg1;
- (BOOL)hasBytesAvailable;
- (BOOL)isValid;
- (void)dealloc;
- (id)description;

@end
