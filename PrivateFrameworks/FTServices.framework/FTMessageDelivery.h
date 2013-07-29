/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class FTMessageQueue, IDSBaseMessage, NSString, NSArray, NSNumber, IMTimer;

@interface FTMessageDelivery : NSObject <FTMessageQueueDelegate> {
    unsigned int _retries;
    NSNumber *_protocolVersion;
    FTMessageQueue *_queue;
    NSString *_userAgent;
    unsigned int _maxConcurrentMessages;
    BOOL _retryInAirplaneMode;
    IMTimer *_timer;
}

@property(copy) NSString * userAgent;
@property(copy) NSNumber * protocolVersion;
@property(readonly) BOOL hasQueuedItems;
@property(readonly) BOOL busy;
@property BOOL retryInAirplaneMode;
@property(readonly) IDSBaseMessage * currentMessage;
@property(readonly) NSArray * queuedMessages;
@property(readonly) NSArray * allMessages;
@property(readonly) int maxMessageSize;
@property unsigned int maxConcurrentMessages;

+ (Class)APNSMessageDeliveryClass;
+ (Class)HTTPMessageDeliveryClass;
+ (id)_errorForTDMessageDeliveryStatus:(int)arg1 userInfo:(id)arg2;
+ (id)alloc;

- (void)setMaxConcurrentMessages:(unsigned int)arg1;
- (int)maxMessageSize;
- (void)setRetryInAirplaneMode:(BOOL)arg1;
- (BOOL)retryInAirplaneMode;
- (unsigned int)maxConcurrentMessages;
- (void)_signMessage:(id)arg1 useDataSignatures:(BOOL)arg2 body:(id)arg3 queryString:(id)arg4 intoDictionary:(id)arg5;
- (void)_setRetryTimer:(double)arg1;
- (void)cancelMessage:(id)arg1;
- (BOOL)hasQueuedItems;
- (BOOL)busy;
- (id)allMessages;
- (void)_informDelegateAboutMessage:(id)arg1 error:(id)arg2 result:(id)arg3 resultCode:(int)arg4;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;
- (void)_retryTimerHit:(id)arg1;
- (BOOL)_sendMessageAsynchronously:(id)arg1 error:(id*)arg2;
- (id)queuedMessages;
- (void)_clearRetryTimer;
- (void)networkStateChanged;
- (void)setProtocolVersion:(id)arg1;
- (id)protocolVersion;
- (id)userAgent;
- (void)setUserAgent:(id)arg1;
- (id)_queue;
- (id)currentMessage;
- (id)init;
- (void)invalidate;
- (BOOL)sendMessage:(id)arg1;
- (void)dealloc;

@end
