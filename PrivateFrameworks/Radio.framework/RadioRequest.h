/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class RadioRequestContext, NSDictionary, NSObject<OS_dispatch_queue>;

@interface RadioRequest : NSObject  {
    int _errorCode;
    NSObject<OS_dispatch_queue> *_queue;
    RadioRequestContext *_requestContext;
    int _status;
    NSDictionary *_unparsedResponseDictionary;
    BOOL _asynchronousBackgroundRequest;
}

@property(getter=isAsynchronousBackgroundRequest) BOOL asynchronousBackgroundRequest;
@property(copy) RadioRequestContext * requestContext;
@property(readonly) int status;
@property(readonly) int errorCode;
@property(readonly) NSDictionary * unparsedResponseDictionary;

+ (void)loadServiceConfigurationWithCompletionHandler:(id)arg1;

- (void)setAsynchronousBackgroundRequest:(BOOL)arg1;
- (id)unparsedResponseDictionary;
- (void)setUnparsedResponseDictionary:(id)arg1;
- (void)_loadRadioURLBagAndAllowRetry:(BOOL)arg1 withCompletionHandler:(id)arg2;
- (void)setRequestContext:(id)arg1;
- (id)requestContext;
- (void)_loadRadioURLBagWithCompletionHandler:(id)arg1;
- (BOOL)isAsynchronousBackgroundRequest;
- (void)setErrorCode:(int)arg1;
- (int)errorCode;
- (int)status;
- (void)setStatus:(int)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;

@end
