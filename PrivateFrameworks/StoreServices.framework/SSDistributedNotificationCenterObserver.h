/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSObject<OS_dispatch_queue>;

@interface SSDistributedNotificationCenterObserver : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _block;

    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_name;
}

@property(readonly) id block;
@property(readonly) NSObject<OS_dispatch_queue> * dispatchQueue;
@property(readonly) NSString * name;


- (id)dispatchQueue;
- (id)initWithName:(id)arg1 queue:(id)arg2 block:(id)arg3;
- (id)name;
- (void)dealloc;
- (id)block;

@end
