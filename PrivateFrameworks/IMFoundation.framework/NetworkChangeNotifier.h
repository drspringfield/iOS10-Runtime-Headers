/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class IMConnectionMonitor, NSString, NSArray;

@interface NetworkChangeNotifier : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate> {
    BOOL _lastPostedNetworkUp;
    struct __SCDynamicStore { } *_store;
    NSString *_myIP;
    NSArray *_myIPs;
    IMConnectionMonitor *_connectionMonitor;
}

@property(readonly) BOOL isNetworkUp;
@property(readonly) NSString * myGatewayAddress;
@property(readonly) NSString * myIPAddress;
@property(readonly) NSArray * myIPAddresses;
@property(readonly) struct __SCDynamicStore { }* getDynamicStore;
@property struct __SCDynamicStore { }* store;
@property BOOL lastPostedNetworkUp;
@property(retain) IMConnectionMonitor * connectionMonitor;
@property(retain) NSString * myIP;
@property(retain) NSArray * myIPs;

+ (void)disableNotifications;
+ (BOOL)enableNotifications;
+ (id)sharedInstance;

- (void)setStore:(struct __SCDynamicStore { }*)arg1;
- (struct __SCDynamicStore { }*)store;
- (void)setLastPostedNetworkUp:(BOOL)arg1;
- (BOOL)lastPostedNetworkUp;
- (void)setConnectionMonitor:(id)arg1;
- (id)connectionMonitor;
- (void)setMyIPs:(id)arg1;
- (id)myIPs;
- (void)setMyIP:(id)arg1;
- (id)myIP;
- (id)primaryInterfaceName;
- (BOOL)isPrimaryCellular;
- (BOOL)isNetworkUp;
- (unsigned int)linkQualityForInterfaceType:(unsigned int)arg1;
- (struct __SCDynamicStore { }*)getDynamicStore;
- (id)myGatewayAddress;
- (id)myIPAddresses;
- (void)connectionMonitorDidUpdate:(id)arg1;
- (void)systemDidWake;
- (void)systemWillSleep;
- (int)linkQualityValueForInterfaceType:(unsigned int)arg1;
- (int)linkQualityValueForInterface:(id)arg1;
- (BOOL)_listenForChanges;
- (void)_clearIPCache;
- (id)init;
- (void)dealloc;
- (id)myIPAddress;

@end
