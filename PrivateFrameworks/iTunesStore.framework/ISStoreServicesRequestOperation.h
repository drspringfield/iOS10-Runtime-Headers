/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class SSRequest;

@interface ISStoreServicesRequestOperation : ISOperation  {
    SSRequest *_request;
}

@property(readonly) SSRequest * request;


- (void)run;
- (void)dealloc;
- (void)cancel;
- (id)initWithRequest:(id)arg1;
- (id)request;

@end