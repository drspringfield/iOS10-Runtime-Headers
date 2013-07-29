/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameController.framework/GameController
 */

@class NSData, NSString, NSObject<OS_dispatch_queue>, NSDictionary, NSRunLoop, NSMutableDictionary;

@interface _GCUserHIDDevice : NSObject  {
    struct __IOHIDUserDevice { } *_hidDevice;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_deviceProperties;
    NSRunLoop *_runLoop;
    BOOL _logLevel;
    NSMutableDictionary *_getReportHoldersByReportID;
}

@property(readonly) NSData * reportDescriptor;
@property(readonly) NSString * deviceName;
@property BOOL logLevel;
@property(readonly) unsigned short productID;
@property(readonly) unsigned short vendorID;
@property(readonly) unsigned int locationID;
@property(readonly) NSString * serialNumber;
@property(readonly) NSMutableDictionary * getReportHoldersByReportID;


- (id)serialNumber;
- (id)getReportHoldersByReportID;
- (unsigned int)locationID;
- (unsigned short)productID;
- (id)reportDescriptor;
- (void)setElementFloatValue:(float)arg1 usage:(unsigned int)arg2 page:(unsigned int)arg3;
- (id)initDualShock3;
- (void)startThread:(id)arg1;
- (void)setLogLevel:(BOOL)arg1;
- (BOOL)logLevel;
- (void)disconnect;
- (id)deviceName;
- (unsigned short)vendorID;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithProperties:(id)arg1;

@end
